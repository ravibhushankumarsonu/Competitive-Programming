

n = int(input())
arr = input().split()
print((all(int(x)>=0 for x in arr)) and (any(i==i[::-1] for i in arr)))
