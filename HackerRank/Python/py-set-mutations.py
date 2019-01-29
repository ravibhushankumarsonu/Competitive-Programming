
n = int(input())
set_a = set(map(int, input().split()))
times = int(input())
for _ in range(times):
    word = input().split()
    set_b = set(map(int, input().split()))
    if(word[0] == "intersection_update"):
        set_a.intersection_update(set_b)
    elif(word[0] == "update"):
        set_a.update(set_b)
    elif(word[0] == "difference_update"):
        set_a.difference_update(set_b)
    elif(word[0] == "symmetric_difference_update"):
        set_a.symmetric_difference_update(set_b)

print(sum(set_a))