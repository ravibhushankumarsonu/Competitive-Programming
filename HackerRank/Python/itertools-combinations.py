from itertools import combinations

word,n = input().split()
n= int(n)

for i in range(1,n+1):
    for val in combinations(sorted(word),i):
        print(''.join(val))
