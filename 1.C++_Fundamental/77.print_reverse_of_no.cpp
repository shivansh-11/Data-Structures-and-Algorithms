#include<iostream>
using namespace std;


int main(){

    int N;
    cin >> N;

    while(N != 0){

        int last_digit = N % 10;
        cout << last_digit;
        N = N / 10;
    }

    cout<< endl;

    return 0;
}