// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int R;
    float V;
    cin >> R;
    V = R * (5.0 / 1023.0);
    //Lưu ý rằng hàm main() đã được cung cấp sẵn. Sinh viên chỉ viết đoạn code xử lý
	if (V < 1.4)
		cout << "Đen led dang tat" << endl;
	// dieu kien cua den sang mo
	else if (V < 2.5)
		cout << "Den led co do sang mo" << endl;
	// dieu kien cua den sang trung binh
	else if (V < 5.0)
		cout << "Den led co do sang trung binh" << endl;
        // dieu kien cua den sang toi da
	else if (V == 5.0)
		cout << "Den led co do sang toi da" << endl;
    else
        cout<<"Den led bi doan mach"<<endl;
}