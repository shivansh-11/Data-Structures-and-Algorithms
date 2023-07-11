#include<iostream>
using namespace std;


int main(){

    int x;
    cin >> x;

    x%2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl; 

    string weather = x > 30 ? "Hot" : "cool";

    cout << weather << endl;

    return 0;
}

