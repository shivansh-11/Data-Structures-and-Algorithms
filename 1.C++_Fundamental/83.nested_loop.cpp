#include<iostream>
using namespace std;


/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16 
*/

int main(){

    int row, col;
    cin >> row >> col;

    int val =1;
    // loop to print row 
    for(int i = 1; i <= row; i++){

        //to print the column of number
        for(int j = 1; j <= col; j++){
            cout << val << " ";
            val++;
        }

        cout << endl;

    }



    return 0;
}