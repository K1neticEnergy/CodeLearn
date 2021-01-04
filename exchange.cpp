#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct unit {
    string name;
    int pow;
    float num = 1;
};

int main() {
    const vector <unit> currency_lenght = {
    {"mm",  -3},
    {"cm",  -2},
    {"in",  -2, 2.54},
    {"dm",  -1},
    {"ft",  -1, 3.048},
    {"yd",  -1, 9.144},
    {"m" ,   0},
    {"dam",  1},
    {"hm",   2},
    {"km",   3},
    {"mi",   3, 1.609344}
};
while (true) {
    system("cls");
    float number1, number2, n1, n2;
    int u1, u2;
    string unit1, unit2;
    cin >> number1 >> unit1 >> unit2;
    for (int i = 0; i < currency_lenght.size(); i++)
    {
        if (unit1 == currency_lenght.at(i).name){
            u1 = currency_lenght.at(i).pow;
            n1 = currency_lenght.at(i).num;
        }
        if (unit2 == currency_lenght.at(i).name){
            u2 = currency_lenght.at(i).pow;
            n2 = currency_lenght.at(i).num;
        }
    }

    number2 = number1 * (n1 * pow(10,u1))/(n2 * pow(10,u2)); 
    system("cls");
    cout << number1 << " " << unit1 << " = " << number2 << " " << unit2 << endl;
    
    cout << "Continue? (Y/N)" ;
    string Check;
    cin >> Check;
    if ((Check == "n")||(Check == "N")) exit(0);
}
    return 0;
}