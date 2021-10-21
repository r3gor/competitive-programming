# -*- coding: utf-8 -*-
from functools import reduce

d=dict()
d["1"]=2
d["2"]=5
d["3"]=5
d["4"]=4
d["5"]=5
d["6"]=6
d["7"]=3
d["8"]=7
d["9"]=6
d["0"]=6

n = int(input())
while(n):
    print(str(reduce(lambda x, y: x+y, [d[i] for i in input()])) + " leds")
    n-=1
    