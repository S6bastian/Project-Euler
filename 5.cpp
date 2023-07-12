#include <iostream>

using namespace std;

long int MCD(long int, long int);
long int MCM(long int, long int);

int main(){
    long int sum = 1;
    int limit = 20;
    
    for(long int i = 2; i <= limit; i++){
        sum = MCM(sum,i);
        //cout<<sum<<"-> "<<i<<endl;
    }

    cout<<"Respuesta: "<<sum<<endl;

    return 0;
}

long int MCD(long int a, long int b){
    //Algoritmo de Euclides
    long int tmp;

    while(b != 0){
        tmp = a%b;
        a = b;
        b = tmp;
    }

    return a;
}

long int MCM(long int a, long int b){
    long int mcm, mcd;
    
    mcd = MCD(a,b);
    mcm = a/mcd*b;

    return mcm;
}