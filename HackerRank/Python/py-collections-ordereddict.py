from collections import OrderedDict

n = int(input())
dic = OrderedDict()

for _ in range(n):
    item,space,price = input().rpartition(' ')
    dic[item] = dic.get(item,0)+int(price)

print(*[" ".join([item,str(price)]) for item,price in dic.items()], sep="\n")