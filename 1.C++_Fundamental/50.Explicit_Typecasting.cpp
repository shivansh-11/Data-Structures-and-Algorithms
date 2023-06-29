#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //Find the average of 5 int and print the out put upto 4 decimal

    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;

    cout << "Average "<< fixed << setprecision(4) << (float)sum/ 5 << endl;

    return 0;

}