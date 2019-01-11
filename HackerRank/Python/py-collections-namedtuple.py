# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import namedtuple
num = int(input())

fields = input().split()
student = namedtuple('student',fields)
marks = [int(student._make(input().split()).MARKS) for _ in range(num)]
avg = sum(marks)/len(marks)
print(avg)
