from functools import reduce
n = int(input())
while(n):
    for i in range(n):
        num = input()
        sum = lambda i, jump: reduce(lambda a, c: a+int(c), num[i::jump], 0)
        sum_dig = lambda x: reduce(lambda a, c: a+int(c), str(x), 0)
        print(sum_dig(sum(0,2)) + sum_dig(sum(1,2)))
    n = int(input())
    