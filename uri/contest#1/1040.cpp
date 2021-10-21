#include <iostream>
using namespace std;

int main(){
    double media=0;
    double val;
    cin>>val; media+=val*2.0;
    cin>>val; media+=val*3.0;
    cin>>val; media+=val*4.0;
    cin>>val; media+=val*1.0;
    media /= 10.0;
    printf("Media: %.1f\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    } else if (media>=5.0){
        printf("Aluno em exame.\n");
        cin>>val;
        printf("Nota do exame: %.1f\n", val);
        media += val;
        media /= 2;
        if (media>=5.0){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}