#include<iostream>
using namespace std;


/*
   1
  232
 34543
4567654


*/

int main(){


    int n;
    cin >> n;

    // to print n number of row
    for(int i = 1; i <= n; i++){
        int val = i;

        // to print the spaces in each row
        for(int spaces = 1; spaces <= n-i; spaces++){
            cout << " "; 
        }

        // to print increasing sequence
        for(int inc = 1; inc <= i; inc++){
            cout << val;
            val++;
        }

        val = val - 2;

        // to print the decreasing sequence
        for(int dsc = 1; dsc <= i-1;dsc++){
            cout << val;
            val--;
        }

        cout << endl;
    }

    return 0;
}