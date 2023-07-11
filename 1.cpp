#include <iostream>

using namespace std;

int MCD(int, int);
int MCM(int, int);

int main(){
    int a, b, limit, sum;

    a = 3;
    b = 5;
    limit = 1000;
    sum = 0;

    cout<<"Lista de numeros"<<endl;

    for(int i = 1, j = 1; a*i < limit || b*j < limit;){
        if(a*i < b*j){
            sum += a*i;
            cout<<a*i<<" ";
            i++;
        }
        else if(b*j < a*i){
            sum += b*j;
            cout<<b*j<<" ";
            j++;
        }
        else if(a*i == b*j){
            sum += a*i;
            cout<<a*i<<" ";
            i++;
            j++;
        }
        
    }

    cout<<endl<<endl<<"Sumatoria"<<endl;
    cout<<sum<<endl;
}

//Algoritmo de MCD y MCM no necesario para este problema

int MCD(int a, int b){
    //Algoritmo de Euclides
    int tmp;

    while(b != 0){
        tmp = a%b;
        a = b;
        b = tmp;
    }

    return a;
}

int MCM(int a, int b){
    int mcm, mcd;
    
    mcd = MCD(a,b);
    mcm = a*b/mcd;

    return mcm;
}