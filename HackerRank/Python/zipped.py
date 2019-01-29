n,m = map(int,input().split())
ls = []
for _ in range(3):
    ls.append(list(map(float,input().split())))

for i in zip(*ls):
    print(sum(i)/len(i))