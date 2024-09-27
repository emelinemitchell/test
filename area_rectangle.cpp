#include <iostream>
using namespace std;

double area(double length, double width){
    double area;
    area = length * width;
    return area;
}

int main(){
    double length, width, a;
    cout << "Enter the length for a square or rectangle: " << endl;
    cin >> length;
    cout << "Enter the width for a square or rectangle: " << endl;
    cin >> width;

    a = area(length, width);
    cout << "The area is= " << a << endl;
    return 0;
}
