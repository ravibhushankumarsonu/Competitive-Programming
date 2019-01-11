n = int(input())
s = set(map(int, input().split()))
t = int(input())

for _ in range(t):
    command = input().split()
    try:
        if(command[0] == "pop"):
            s.pop()
        elif(command[0] == "remove"):
            s.remove(int(command[1]))
        else:
            s.remove(int(command[1]))
    except Exception:
        continue;

print(sum(s))
