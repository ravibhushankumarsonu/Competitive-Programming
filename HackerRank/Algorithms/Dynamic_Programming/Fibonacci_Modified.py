a, b, n = (int(x) for x in raw_input().split())
if n == 1: print(a)
elif n == 2: print(b)
else:
    for i in range(2, n):
        temp =  b*b+a
        a = b
        b = temp
    print(temp)