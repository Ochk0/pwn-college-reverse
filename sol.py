
a = list("lqcxwjqpuqgzcyh")
b = a[::-1]
print(b)
# // swap 4nd and 5th

b[12], b[5] = b[5], b[12]
b[1], b[2] = b[2], b[1]

for i in b:
    print(i, end='')

