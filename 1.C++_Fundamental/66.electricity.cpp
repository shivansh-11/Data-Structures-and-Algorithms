#include<iostream>
using namespace std;


int main(){

    int units;
    cin >> units;
    int total_bill;

    if(units <= 100){
        total_bill = 0;
    }
    else if (units <= 200){
        total_bill = (units - 100) * 5;
    }
    else if(units <= 300){
        total_bill= 500 + (units - 200) * 10;
    }
    else if(units > 300){
        total_bill = 500 + 1000 + (units - 300) * 12;
    }

    cout << "Total Bill " << total_bill << endl;

    return 0;
}