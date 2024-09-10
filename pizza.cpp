#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //string for size, double for topping, price
    string size;
    double topping, price;

    //take input of size: s, m, l
    cout << "What size pizza would you like to order?" << endl;
    cin >> size;
    //take input of number of toppings
    cout << "How many toppings do you want?" << endl;
    cin >> topping;

    //make conditional if size isnt s,m,l AND topping < 0, print "Invalid pizza size and number of toppings."
    if ((size != "s" or size != "S" or size != "m" or size != "M" or size != "l" or size != "L") and topping < 0){
        cout << "Invalid pizza size and number of toppings.";
        return 0;
    }
    //make conditional if size isnt s,m,l print "Invalid pizza size."
    if (size != "s" or size != "S" or size != "m" or size != "M" or size != "l" or size != "L"){
        cout << "Invalid pizza size.";
        return 0;
    }
    //make conditional if topping < 0 print "Invalid number of toppings."
    if (topping < 0){
        cout << "Invalid number of toppings.";
        return 0;
    }

    //take size and topping and figure out price (onece the code above checks if it is a valid input)
    if (size == "s" or size =="S"){
        price = 8;
        price = price + (topping * 0.99);
    }else if (size == "m" or size == "M"){
        price = 10;
        price = price + (topping * 1.99);
    }else if (size == "l" or size == "L"){
        price = 14;
        price = price + (topping * 2.99);
    }
    //print price $0.00 if input can be taken if not it shouldn't print
    cout << "Your total is $" << setprecision(2) << fixed << price << endl;

    return 0;
}
