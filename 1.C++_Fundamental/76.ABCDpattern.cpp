#include<iostream>
using namespace std;


/*5
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/


int main(){

    int n;
    cin >> n;

//    to print the rows
    for(int i = 1; i <=n;i++){

        char letter = 'A';

        // to print letter in increasing order
        for(int inc =1; inc <= n-i+1; inc++){
            cout << letter;
            letter++;
        }

        letter = letter - 1;

        // to print the letter in decreasing order
        for(int dsc = 1; dsc <= n-i+1; dsc++){
            cout << letter;
            letter--;
        }
        cout << endl;
    }

  


    return 0;
}