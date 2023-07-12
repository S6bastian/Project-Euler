#include <iostream>

using namespace std;

//Intenté que sea más eficiente comenzando con la búsqueda de palíndromos de mayor a menor, y despues busqué si tiene tiene múltiplos válidos
//Ignorar los cont solo quería ver cual era más eficiente

bool is_palindrome(int);

int main(){
    int a = 999;
    int limit = 10;

    for(int i = a; i >= 100; i /= 10){
        limit *= 10;
    }
    //int cont=0;
    for(int b = a*a; b > limit*limit; b--){
        if(is_palindrome(b)){
            for(int d = a; d >= limit; d--){
                if(b%d == 0 && b/d >= limit && b/d < a){
                    cout<<d<<" x "<<b/d<<" = "<<b<<endl;
                    b = 0;
                    break;
                }
                //cout<<++cont<<endl;
            }
        }
        //cout<<++cont<<endl;
    }
    

    return 0;
}

bool is_palindrome(int x){
    int inverse = 0;
    for(int i = x; i != 0; i /= 10){
        inverse = inverse*10 + i%10;
    }
    return inverse == x;
}