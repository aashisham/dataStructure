#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int number;
    cout << "Enter how many elements you want to see in Fibonacci Series : ";
    cin >> number;

    // Recursively calls the fibonacci function.
    for(int i=0; i<number; i++){
        cout << fibonacci(i) << " ";
    }
}

int fibonacci(int number){
    if(number <= 1){
        return 1;
    }else{
        // Key algorithm
        return fibonacci(number - 1) + fibonacci (number - 2);
    }
}
