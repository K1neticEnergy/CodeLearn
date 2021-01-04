/*
    Chuong trinh giai bai toan Thap Ha Noi
*/

#include <iostream>
#include <fstream>
std::ofstream outfile; 

void move(int n, int x, int y) {
    
    
    if (n == 1) outfile << "Chuyen 1 dia tu " << x << " sang " << y << std::endl;
    else
    {
        move(n - 1, x, 6 - x - y);
        move(1, x, y);
        move(n - 1, 6 - x - y, y);
    }
    
    
}

int main() {
    int n,x,y;
    outfile.open("file.dat", std::ios::out | std::ios::trunc );
    std::cin >> n;
    move(n,1,2);
    return 0;
    outfile.close();
}