from math import factorial
fact = 1.0
n = int(input())
for i in range(1, n+1):
    if (i>30): break
    fact += 1/factorial(i)

print(fact)

