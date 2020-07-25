#include <iostream>
using namespace std;

void menospontos(int n1,int n2,int n3,int n4,int& menort1,int& menort2){
    int menor1= n1;
    int menor2= n1;
    if (n1<=menor1){
        menor1=n1;
        menort1=1;
    }
    if (n2<=menor1){
        menor1=n2;
        menort1=2;
    }
    if (n3<=menor1){
        menor1=n3;
        menort1=3;
    }
    if (n4<=menor1){
        menor1=n4;
        menort1=4;
    }
    
    if (n1>menor1 and n1<=menor2){
        menor2=n1;
        menort2=1;
    }
    if (n2>menor1 and n2<=menor2){
        menor2=n2;
        menort2=2;
    }
    if (n3>menor1 and n3<=menor2){
        menor2=n3;
        menort2=3;
    }
    if (n4>menor1 and n4<=menor2){
        menor2=n3;
        menort2=4;
    }
}
    
int main(){
    string t1,t2,t3,t4;
    int n1,n2,n3,n4,menort1=0,menort2=0;
    cin>>t1>>t2>>t3>>t4>>n1>>n2>>n3>>n4;
    menospontos(n1,n2,n3,n4,menort1,menort2);    
    if (menort1==1){
        cout<<t1<<" ";
    }
    else if (menort1==2){
        cout<<t2<<" ";
    }
    else if (menort1==3){
        cout<<t3<<" ";
    }
    else if (menort1==4){
        cout<<t4<<" ";
    }
    if (menort2==1){
        cout<<t1;
    }
    else if (menort2==2){
        cout<<t2;
    }
    else if (menort2==3){
        cout<<t3;
    }
    else if (menort2==4){
        cout<<t4;
    }
    
    return 0;
}
