#include <iostream>
using namespace std;

int main(){
    cout << "Enter Principal: ";
    double principal;
    cin >> principal;

    cout << "Enter Interest Rate: ";
    double rate;   
    cin >> rate;

    cout << "Enter Number of Years: ";
    double year;
    cin >> year;

// cin >> principal >> rate >> year;
    double sI = (principal * rate * year)/ 100;
    cout << "The simple interest for the given set of values is: " << sI;
    return 0;
}