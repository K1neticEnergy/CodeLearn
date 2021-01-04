#include <iostream>
using namespace std;

int goingStraight(int now, int then){
    int length = static_cast<int>(abs(then - now));
    if(length % 2 == 0) return length * 2;
        else return (length - 1) * 2 + 1;
}

int goingDiagonal(int x1, int y1, int x2, int y2) {
    int step = 0;
    if(x2 >= y2){
        step = y2 - y1;
    } else step = x2 - x1;
    int straight = goingStraight(x1 + step, x2) + goingStraight(y1 + step, y2);
    return step * 2 + straight;
}

int main(int argv, char **argc, char* envp[]) {
    int x_a, y_a, x_b, y_b;
    int x_direction, y_direction;
    cin >> x_a >> y_a >> x_b >> y_b;

    if(x_a < x_b) x_direction = 1;
    else if(x_a == x_b) x_direction = 0;
    else x_direction = -1;

    if(y_a < y_b) y_direction = 1;
    else if(y_a == y_b) y_direction = 0;
    else y_direction = -1;

    if(x_direction == 0 || y_direction == 0) {
        cout << goingStraight(x_a, x_b) + goingStraight(y_a, y_b);
    }
    else if(x_direction == 1 && y_direction == 1) cout << goingDiagonal(x_a, y_a, x_b, y_b);
    else if(x_direction ==-1 && y_direction ==-1) cout << goingDiagonal(x_b, y_b, x_a, y_a);
    else if(x_direction ==-1 && y_direction == 1) cout << goingDiagonal(x_b, y_a, x_a, y_b);
    else cout << goingDiagonal(x_a, y_b, x_b, y_a);

    return 0;
}
/*
    Bài toán robot đi trên đồ thị
    Robot trong 1 lần đi chỉ đi 4 hướng (đông tây nam bắc)
    Trong 2 lần đi kế tiếp nhau, robot không được đi cùng 1 hướng quá 2 lần
    ví dụ
    Input: 
    1 2 (tọa độ điểm đầu)
    3 4 (tọa độ điểm sau)
    Output:
    4
    Hình:
    |        .
    |      __|  
    |  .__|
    |
    |__ __ __ __

*/