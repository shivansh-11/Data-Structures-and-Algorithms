#include<iostream>
using namespace std;

//forward declaration
void play_music(int songId);


int main(){

    play_music(5);

    return 0;
}


void play_music(int songId){

    cout << "Playing music " << songId << endl;
}