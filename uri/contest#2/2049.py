s = input()
i = 1
while(int(s)):
    p = input()
    if (i!=1): print()
    print(f"Instancia {i}")
    print("verdadeira" if s in p else "falsa")
    i+=1
    s = input()
