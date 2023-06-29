#include<iostream>
#include<iomanip> // for setprecision
using namespace std;


int main(){

    int x = true;
    int isWeatherRainy = false;

    cout << x <<endl;
    cout << isWeatherRainy << endl;

    int y = 5128;
    float pi = 3.14285799;
    double pi_d = 3.14285799;

    cout << y << endl;
    cout << setprecision(10) << pi <<endl;
    cout <<setprecision(10) <<  pi_d << endl;

    char z = 'A';
    char i = '$';


    cout << z << endl;
    cout << i << endl;


    return 0;
}