#include<iostream>
using namespace std;


// program to find the sum of digits of a number N
int main(){

    int N;
    cin >> N;

    int sum = 0;

    while(N != 0){

        sum = sum + N%10;
        //update
        N = N/10;
    }

    cout << sum << endl;
    
    return 0;
}