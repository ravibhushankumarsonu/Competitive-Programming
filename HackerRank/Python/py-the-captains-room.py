import collections
k = int(input())
arr = map(int, input().split())

counter = collections.Counter(arr)
#print(counter)
for val in counter.keys():
    if(counter.get(val)== 1):
        print(val)


