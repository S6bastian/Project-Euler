#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 1, b = 2, c = 997;
    int product;

    for(;a <= 997;){
        if(pow(a,2)+pow(b,2) == pow(c,2)){
            product = a*b*c;
            cout<<"Producto"<<endl<<a<<" x "<<b<<" = "<<c<<endl<<product<<endl;
            break;
        }
        b++;
        c--;
        if(c == 1){
            a++;
            b = a+1;
            c = 1000-b-a;
        }
    }

    //cout<<"Producto"<<endl<<a<<" x "<<b<<" = "<<c<<endl<<product<<endl;

    return 0;
}