#include <iostream>

using namespace std;

int main(){
    int a, b, tmp, limite, sum;
    a = 0;
    b = 1;
    limite = 4000000;
    sum = 0;

    cout<<"Secuencia"<<endl;

    while(b+a <= limite){
        tmp = b;
        b += a;
        a = tmp;
        cout<<" "<<b;
        if(b%2 == 0){
            sum += b;
        } 
    }
    
    cout<<endl<<"Suma de los pares menores a "<<limite<<" :"<<sum<<endl;

    return 0;
}