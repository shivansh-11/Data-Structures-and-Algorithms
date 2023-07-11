#include<iostream>
using namespace std;


// 3
//   *
//  ***
// *****

int main(){

    int n;
    cin >> n;

    // loop to print no. of roe
    for(int i = 1; i <= n; i++){

        //spaces
        for(int spaces=1;spaces <= n- i;spaces++){
            cout << " ";
        }
        // star
        for(int star = 1; star <=2*i-1; star++){
            cout << "*";
        }

        cout<< endl;
    }

    return 0;
}