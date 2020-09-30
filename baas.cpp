#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


std::vector<int> times;
std::vector< std::vector<int> > dependencies;
std::vector<int> lookup;
std::vector<int> intestTime; // intest time leading up to each step.

int rec(int, int&);

int fastTimeLookup(int step, int &lon) {
    int l = lookup[step];
    if (l != -1) {
        lon = intestTime[step];
        return l;
    } else {
        int intest;
        int v = rec(step, intest);
        lookup[step] = v;
        intestTime[step] = intest;
        lon = intest;
        return v;
    }
}

int rec(int step, int &intest) {
    if (step == 0) { 
        intest = times[0];
        return times[0]; 
    }
    else { 
        int t = times[step];
        int l = 0;
        for (int dep : dependencies[step]) {
            int temp;
            int depTime = fastTimeLookup(dep-1, temp);
            if (depTime > l) { 
                l = depTime; 
                intest = temp;
                //if (temp > t) { intest = temp; }
                //else { intest = t; }
            }
            // If this step has the intest time:
            if (t > intest) { intest = t; }
        }
        return t + l;
    }
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    times = std::vector<int> (n);
    lookup = std::vector<int> (n, -1);
    intestTime = std::vector<int> (n, -1);
    for (int i=0;i<n;i++) {
        std::cin >> times[i];
    }
    for (int i=0;i<n;i++) {
        int tDep;
        std::cin >> tDep;
        std::vector<int> tmp;
        for (int j=0;j<tDep;j++) {
            int temp;
            std::cin >> temp;
            tmp.push_back(temp);
        }
        dependencies.push_back(tmp);
    }

    
    int intest;
    int duration = fastTimeLookup(n-1, intest);

    std::vector<int>::iterator it = std::find(times.begin(), times.end(), intest);
    *it = 0;
    lookup = std::vector<int> (n, -1);
    int temp;
    int duration2 = fastTimeLookup(n-1, temp);


    int out;
    if (duration-intest < duration2) {
        int out = duration2;
    } else {
        out = duration-intest;
    }

    std::cout << duration2;
    return 0;
}












