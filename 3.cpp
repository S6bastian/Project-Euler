#include <iostream>

using namespace std;


void reduce(long long int &, int);

int main(){
    long long int x;
    int prime;
    x = 600851475143;
    prime = 2;
    
    cout<<"Operaciones"<<endl;
    reduce(x, prime);
    prime++;

    while (x > prime){
        reduce(x, prime);
        prime +=2;
    }
    cout<<"Resultado"<<endl;
    cout<<prime<<endl;

    return 0;
}

void reduce(long long int &x, int prime){
    while(x%prime == 0){
        cout<<x<<"/"<<prime<<"=";
        x /= prime;
        cout<<x<<endl;
    }
}