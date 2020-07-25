#include <iostream>

using namespace std;

int main(){
    float salario,imposto,gratificacao,salarioliq;
    int tempo;
    char categoria;
    cin>>salario>>tempo;
    
    if (salario<200){
        imposto = 0*salario;
    }
    else if (salario>=200 and salario<=450){
        imposto = 0.03*salario;
    }
    else if (salario>450 and salario<700){
        imposto = 0.08*salario;
    }
    else if (salario>=700){
        imposto = 0.12*salario;
    }
    
    if (salario<=500){
        if (tempo<=3){
            gratificacao=salario*0.23;
        }
        else if (tempo>3 and tempo<6){
            gratificacao=salario*0.35;
        }
        else if (tempo>=6){
            gratificacao=salario*0.33;
        }
    }
    
    else if (salario>500){
        if (tempo<=3){
            gratificacao=salario*0.2;
        }
        else if (tempo>=3){
            gratificacao=salario*0.3;
        }
    }
    
    salarioliq=salario+gratificacao-imposto;
    
    if (salarioliq<350){
        categoria = 'A';
    }
    else if (salarioliq>=350 and salarioliq<600){
        categoria= 'B';
    }
    else if (salarioliq>=600){
        categoria= 'C';
    }
    
    cout<<imposto<<endl<<gratificacao<<endl<<salarioliq<<endl<<categoria;
    
    return 0;
}
