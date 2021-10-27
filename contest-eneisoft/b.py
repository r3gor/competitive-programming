x = input()
x = x.lower()
arr = [i for i in x]
cont = 0
for i in range(int(len(arr)/2)):
  if (arr[i]==arr[i*-1-1]): 
    cont+=2
if (len(arr)%2!=0): cont+=1
print(cont)
