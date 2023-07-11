#include<iostream>
using namespace std;


// program to find sum of N number
int main(){
    
    // no, of inputs
    int N;
    cin >> N;

    int i = 1;
    int sum = 0;
    int number;

    while(i <= N){

        cin >> number;
        sum = sum + number;

        i++;
    }
    cout << sum << endl;

    return 0;
}