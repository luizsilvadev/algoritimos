#include <iostream>
using namespace std;

int main(){
    int contcoluna=1,contlinha=1,n;
    string linhapar="",linhaimpar="";
    cin>>n;

    while (contcoluna<=n){
        if (contcoluna%2==1){
            linhaimpar += ".";
            linhapar += "#";
        }
        else if (contcoluna%2==0){
            linhaimpar += "#";
            linhapar += ".";
        }
        contcoluna++;
    }
    
    while (contlinha<=n){
        if (contlinha%2==1){
            cout<<linhaimpar<<endl;
        }
        else if (contlinha%2==0){
            cout<<linhapar<<endl;
        }
    contlinha++;
    }
    
    return 0;
}
