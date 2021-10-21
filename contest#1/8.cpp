#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

// UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE ABDEL MORALEZ
// PROMEDIO GRUPAL: 99.44
// ALUMNOS APROBADOS 4
// ALUMNOS REPROBADOS 0
// ABDIAS MORTILARI 99.9
// ABDEL MORALEZ 98.99


int comp(string s1, string s2){
    for (int i=0; i<max(s1.size(), s2.size()); i++){
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
    }
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
        t+=nota;
 

        if (nota == min.second && comp(min.first, name)){
            min= make_pair(name+" "+name2, nota);
        }
        if (nota < min.second){
            min= make_pair(name+" "+name2, nota);
        }


        if (nota == max.second && comp(name, max.first)){
            max= make_pair(name+" "+name2, nota);
        }
        if (nota > max.second){
            max= make_pair(name+" "+name2, nota);
        }

        if (nota<60) d++;
        if (nota>=60) a++;
    }

    double p= t/alum;
    bool dec = 0; 
    dec = (p-int(p)==0)? 0:1;
    if (dec)
        printf("PROMEDIO GRUPAL: %.2lf\n", p);
    else
        printf("PROMEDIO GRUPAL: %d\n", int(p));

    printf("ALUMNOS APROBADOS %d\n", a);
    printf("ALUMNOS REPROBADOS %d\n", d);
    cout<<max.first<<" "<<max.second<<endl;
    cout<<min.first<<" "<<min.second<<endl;

    return 0;
}