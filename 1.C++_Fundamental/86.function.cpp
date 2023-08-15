#include<iostream>
using namespace std;


void sayHi(string name){

    cout << "Hi " + name << endl; 
}

string sayHello(string name){

    return "Hello " + name;
}

int areaOfCircle(int radius){
    return 3.14 * radius * radius;
}

int main(){


    sayHi("Shivansh");
    sayHi("Saurabh");

    cout << sayHello("Raj")<< endl;
    cout << sayHello("Tejasva") << endl;

    int area = areaOfCircle(5);

    cout << "Area of Circle " << area << endl;

    return 0;
}