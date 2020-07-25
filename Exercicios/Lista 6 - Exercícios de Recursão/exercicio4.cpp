#include <iostream>

using namespace std;



int ricci(int n,int& n1,int& n2){

    if (n==0){
        return n1;
    }
    else if (n==1){
        return n2;
    }
    else{
        return ricci(n-1,n1,n2)+ricci(n-2,n1,n2);
    }
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<ricci(i,n1,n2)<<" ";
    }

    return 0;
}