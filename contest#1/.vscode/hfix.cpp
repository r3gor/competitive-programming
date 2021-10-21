//CORRECT!
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
#include <algorithm>
#include <math.h>  
using namespace std;

void pretty(double x){
    bool dec = 0; 
    dec = (x-int(x)==0)? 0:1;
    if (dec)
        printf("%.2lf\n", x);
    else
        printf("%d\n", int(x));
}

int compare(string a, string b){
    for (unsigned int i=0; i<min(a.size(),b.size()); i++){
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }
    if (a.size()>b.size())
        return 1;
    if (a.size()<b.size())
        return -1;
    
    return 0;
}

int main(){
    int n;
    cin>>n;
    pair<string, double> min, max;
    min = make_pair("", 101);
    max = make_pair("", -1);
    int a=0, d=0;
    double t=0;
    int alum = n;
    while(n--){
        string name;
        string name2;
        double nota;
        cin>>name>>name2>>nota;
        while (nota<0 || nota>100){
            cout<<"UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE "<<name<<" "<<name2<<endl;
            cin>>nota;
        }
        name+=" " + name2;
        t+=nota;
        if (fabs(nota-min.second)<1e-9 && compare(name,min.first)<0) min= make_pair(name, nota);

        if (nota < min.second) min= make_pair(name, nota);

        if (fabs(nota - max.second)<1e-9 && compare(name,max.first)<0) max= make_pair(name, nota);

        if (nota > max.second) max= make_pair(name, nota);

        if (nota<60) d++;
        if (nota>=60) a++;
    }

    double p= t/alum;
    cout<<"PROMEDIO GRUPAL: ";
    pretty(p);
    printf("ALUMNOS APROBADOS %d\n", a);
    printf("ALUMNOS REPROBADOS %d\n", d);
    cout<<max.first<<" "<<max.second<<endl;
    cout<<min.first<<" "<<min.second<<endl;

    return 0;
}