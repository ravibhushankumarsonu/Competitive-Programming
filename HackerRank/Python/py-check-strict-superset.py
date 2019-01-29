set_a = set(map(int, input().split()))
l = len(set_a)
n = int(input())
result = True
for _ in range(n):
    set_b = set(map(int, input().split()))
    if(len(set_a.union(set_b))>=l or len(set_b)>=l):
        result = False

if(result):
    print('True')
else:
    print('False')
