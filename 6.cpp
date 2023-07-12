#include <iostream>

using namespace std;

int sum_of_the_squares(int);
int squares_of_the_sum(int);

int main(){
    int dif, limit;
    limit = 100;
    
    dif = squares_of_the_sum(limit)-sum_of_the_squares(limit);

    cout<<"Respuesta: "<<dif<<endl;

    return 0;
}

int sum_of_the_squares(int limit){
    int sum = 0;

    for(int i = 1; i <= limit; i++){
        sum += (i*i);
    }

    return sum;
}

int squares_of_the_sum(int limit){
    int sum = 0;

    for(int i = 1; i <= limit; i++){
        sum += i;
    }

    return sum*sum;
}