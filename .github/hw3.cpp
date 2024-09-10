#include <iostream>
using namespace std;

int main(){
    int temp;
    cout << "What is the temperature?" << endl;
    cin >> temp;
    //asks user what the temp is and then takes an input

    if (temp <= 0){
        cout << "Invalid temperature." << endl;
    }else if (temp < 85){
        cout << "You don't need extra water." << endl; //if temp is >85
    }else if (temp > 85){
        cout << "You need to carry extra water." << endl; //if temp is <85
    }
    return 0;

}
