#include <iostream>
using namespace std;

string bai[10] = { "Cau 1: ","Cau 2: ", "Cau 3: ", "Cau 4: ", "Cau 5: ", "Cau 6: ", "Cau 7: ", "Cau 8: ", "Cau 9: ", "Cau 10: " };
string ans[10] = { "A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. ","A. \nB. \nC. \nD. " };
char anss[10];
char ketQua1[10] = { 'a','a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a' };
char ketQua2[10] = { 'A','A','A','A','A','A','A','A','A','A' };

void chedoluyentap();
void chedokiemtra();
int main()
{
	cout<<"MOI BAN CHON CHE DO: "<<endl;
	cout<<"1.CHE DO LUYEN TAP"<<endl;
	cout<<"2.CHE DO KIEM TRA"<<endl;
	int CHEDO;
	cin>>CHEDO;
	switch(CHEDO)
	{
		case 1:
		chedoluyentap();
		break;
		case 2:
		chedokiemtra();
	    break;
	}
	return 0;
}
void chedoluyentap()
{
	
	
	int kieuKT,count=0; 
	for (int i = 0; i < 10; i++) {
	cout << "===================================================================================\n";
	cout << "=====================================LUYEN TAP=====================================\n";
	cout << "===================================================================================\n";
	cout << bai[i] << endl;
	cout << ans[i] << endl;
	cin >> anss[i];
	if (anss[i] == ketQua1[i]||anss[i] == ketQua2[i]) {
		cout << "Dung roi nha\n";
		count += 1;
	}
	else 
	cout << "sai cmnr\n";	
	
}

}
void chedokiemtra()
{
	int kieuKT,count=0; 
		for (int i = 0; i < 10; i++) {
				cout << "===================================================================================\n";
				cout << "====================================KIEM TRA=======================================\n";
				cout << "===================================================================================\n";
				cout << bai[i] << endl;
				cout << ans[i] << endl;
				cin >> anss[i];
				if (anss[i] == ketQua1[i] || anss[i] == ketQua2[i]) count += 1;
				{
					cout << "Dung roi nha\n";
				}
	}
}
