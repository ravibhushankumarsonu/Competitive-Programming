n = int(input())
for _ in range(n):
    a,b = map(str,input().split())
    try:
        print(int(a)//int(b))
    except Exception as e:
        print('Error Code: '+ str(e))