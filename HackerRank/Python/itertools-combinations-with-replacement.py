from itertools import combinations_with_replacement

word,num = input().split()
num = int(num)

for val in combinations_with_replacement(sorted(word),num):
    print(''.join(val))