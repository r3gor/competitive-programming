n=int(input(""))
total=0
a=0
r=0

name_min = ""
nota_min = 101
name_max = ""
nota_max = -1

for i in range(n):
    name = input("")
    nota = float(input(""))
    while(nota<0 or nota>100):
        print("UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE",name)
        nota = float(input(""))
    total+=nota
    if (nota>=60): a+=1
    if (nota<60): r+=1

    if (nota_min>nota):
        nota_min = nota
        name_min = name
    
    if (nota_min==nota and name<name_min):
        nota_min = nota
        name_min = name

    if (nota_max<nota):
        nota_max = nota
        name_max = name
    
    if (nota_max==nota and name<name_max):
        nota_max = nota
        name_max = name

# // UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE ABDEL MORALEZ
# // PROMEDIO GRUPAL: 99.44
# // ALUMNOS APROBADOS 4
# // ALUMNOS REPROBADOS 0
# // ABDIAS MORTILARI 99.9
# // ABDEL MORALEZ 98.99

prom = total/n
d=False
if (prom-int(prom)!=0):
    d=True
print("PROMEDIO GRUPAL: ",end="")
if(d):
    print("%.2f"%prom)
else:
    print(int(prom))
print("ALUMNOS APROBADOS",a)
print("ALUMNOS REPROBADOS",r)
print(name_max,nota_max)
print(name_min,nota_min)

