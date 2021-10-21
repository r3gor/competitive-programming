from functools import reduce
n = int(input())
for i in range(n):
    l = len(
        reduce(lambda ans, curr: ans+[curr] if curr not in ans else ans, 
        filter(lambda x: x.isalpha(), input()), 
        []))
    if l==26: print("frase completa")
    elif l>=13: print("frase quase completa")
    else: print("frase mal elaborada")