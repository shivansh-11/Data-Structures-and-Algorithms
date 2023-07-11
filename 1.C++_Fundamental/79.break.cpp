#include<iostream>
using namespace std;

int main(){

    int calories = 0;
    int gf_call_up = 10;

    while(calories < 30){

        cout << "Running and burning" << calories << endl;
        if(calories == gf_call_up){
            break;
        }

        calories++;
    }

    cout << "Out of the loop" << endl;

    return 0;
}