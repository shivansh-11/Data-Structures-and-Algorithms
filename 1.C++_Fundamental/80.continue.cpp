#include<iostream>
using namespace std;

int main(){

    int calories = 0;

    while(calories <= 20){

        if(calories % 5 == 0){
            cout << "Well Done" << endl;
            calories++;
            continue;
        }

        cout << " running and burning "<< calories << " calories" << endl;
        calories++;
    }

    cout << "out of loop" << endl;

    return 0;
}