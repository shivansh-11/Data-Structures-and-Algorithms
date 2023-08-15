#include<iostream>
using namespace std;

void play_music(int songID = 1, int songID2 = 2){

    cout << "Playing music " << songID << " and " << songID2 <<  endl;
}


int main(){

    // without giving any argument
    play_music();

    // giving just 1 argument
    play_music(5);

    // giving both argument
    play_music(101,102);
  

    return 0;
}