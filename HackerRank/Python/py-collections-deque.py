from collections import deque

n = int(input())
d = deque()
for _ in range(n):
    words = input().split()
    if(words[0] == "append"):
        d.append(int(words[1]))
    elif(words[0] == "appendleft"):
        d.appendleft(int(words[1]))
    elif(words[0] == "pop"):
        d.pop()
    elif(words[0] == "popleft"):
        d.popleft()

for i in list(d):
    print(i,end=" ")
print()