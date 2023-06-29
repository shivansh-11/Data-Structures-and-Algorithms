#include<iostream>
using namespace std;


int main(){

    cout << (5/3) <<endl;
    //Typecasting --> changing of resulting datatype

    // Implicit Typecasting
    // Float + Int
    cout << (5/ 3.0) << endl;
    cout << (5.0/3) << endl;

    // char + Int
    char letter  = 'A';
    cout << letter << endl;
    cout << letter + 1 << endl;
    letter = letter + 1;
    cout << letter << endl;

    // Boolean + Int 

    cout << true +5 << endl;
    cout << false + 5 << endl;
    return 0;
}