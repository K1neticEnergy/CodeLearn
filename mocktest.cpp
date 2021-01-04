#include <cmath>
#include <iostream>
#include <string>
using namespace std;
/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
                      to be clearer, you can implement them. However if you
                      dont know how to use funtion in programming, dont worry, 
                      you dont have to implement them, and you just add a comment 
                      in each of them.
*******************************************************************************/
int move(string moves)
{
    /*TODO: add your code here*/
    int x_location = 0, y_location = 0;
    for(int i = 0; i < moves.length();) {
        char dirChar = (char)moves[i];       
        int x_direction = 0, y_direction = 0;

        switch (dirChar)
        {
        case 'U':
            y_direction = 1;
            break;
        case 'D':
            y_direction =-1;
            break;
        case 'L':
            x_direction =-1;
            break;
        case 'R':
            x_direction = 1;
            break;
        }

        int index = i+1;
        int multiplier = 0;
        while((char)moves[index] >= 48 && (char)moves[index] < 58) {
            multiplier *= 10;
            multiplier +=((int)moves[index] - 48); 
            index++;
        }

        x_location += x_direction * multiplier;
        y_location += y_direction * multiplier;  

        i = index;
    }
    

    return round(sqrt(x_location * x_location + y_location * y_location));
}
bool isPrime(int n)
{
    /*TODO: add your code here*/
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
bool isSquared(int n)
{
    /*TODO: add your code here*/
    if (n < 0) return false;
    for(int i = 0; i*i <= n; i++) {
        if (i*i == n) return true;
    }
    return false;
}
int main()
{
    string moves;
    int distance;
    bool primality, squared;
    /// =======================================================
    /*
        The following code initializes variable `moves`
    */
    /// BEGIN   TESTCASE
    cin >> moves;
    /// END     TESTCASE
    /*---------------------------------
        * Calculate the distance
        * Remember to assign calculated value to variable `distance`
    */
    /*TODO: add your code here*/
    distance = move(moves);
    
    /*---------------------------------*/
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
        << distance << '\n';

    /*---------------------------------
        * Check if distance is prime
        * Remember to assign appropriate value to variable `primality`
    */
    /*TODO: add your code here*/
    
    
    /*---------------------------------*/
    /*---------------------------------
        * Check if distance is squared
        * Remember to assign appropriate value to variable `squared`
    */
    /*TODO: add your code here*/
    primality = isPrime(distance);
    squared = isSquared(distance);
    
    /*---------------------------------*/
    if (primality) {
        cout << "So " << distance << " la so nguyen to\n";
    }
    if (squared) {
        cout << "So " << distance << " la so chinh phuong\n";
    }
    return 0;
}