#include<iostream>
using namespace std;


// find atleast 1 divisor between the range 2 - (n-1) to proof the no. is not prime

int main(){

    int n;
    cin >> n;
    bool isprime = true;

    for(int i = 2; i < n; i++ ){

        if(n % i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout << n << " is a prime number" << endl;
    }
    else{
        cout << n << " is not a prime number" << endl;
    }

}