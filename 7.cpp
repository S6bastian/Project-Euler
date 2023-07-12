#include <iostream>

using namespace std;

bool is_prime(int x){
    if(x == 2 || x == 3){
        return true;
    }

    for(int i = 3; i < x; i += 2){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int limit = 10001;
    int prime = 2;

    cout<<"El numero primo 1 es: "<<prime<<endl;

    for(int i = 3, j = 1; j < limit; i += 2){
        if(is_prime(i)){
            prime = i;
            j++;
            cout<<"El numero primo "<<j<<" es: "<<prime<<endl;
        }
    }

    //cout<<"El numero primo "<<limit<<" es: "<<prime<<endl;

    return 0;
}