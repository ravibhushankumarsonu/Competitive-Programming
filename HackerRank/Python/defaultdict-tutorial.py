# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
x,y = map(int, input().split())
d = defaultdict(list)
for i in range(x):
    ch = input()
    d[ch].append(i+1)
for i in range(y):
    ch = input()
    if(d.get(ch) != None):
        for item in d.get(ch):
            print(item, end=" ")
        print()
    else:
        print(-1)