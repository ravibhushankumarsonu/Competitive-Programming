t = int(input())
for _ in range(t):
    n=int(input())
    set_a = set(map(int, input().split()))
    k = int(input())
    set_b = set(map(int,input().split()))
    #print(len(set_b.union(set_a)))
    if(len(set_b.union(set_a)) == k):
        print('True')
    else:
        print('False')