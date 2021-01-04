#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <io.h>
#include <fcntl.h>

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	int n, group;
	std::wcout << L"Số phần tử của tập hợp và của một nhóm: ";
	std::wcin >> n >> group;

	try
	{
		if (group <= 0)
			throw group;
		if (n <= 0)
			throw n;
	}
	catch (int e)
	{
		std::wcout << L"Ngoại lệ: NHẬP SỐ " << e << std::endl;
		std::wcout << L"Chương trình không thực hiện được." << std::endl;
		system("pause");
		return 0;
	}
	
	std::vector<std::wstring> subject;
	std::vector<int> chose;

	std::wcout << L"Danh sách:" << std::endl;
	std::wcin.get();
	for (int i = 0; i < n; i++)
	{

		std::wstring temp;
		std::wcin.ignore();
		std::getline(std::wcin, temp);
		// cin.ignore();
		subject.push_back(temp);
	}

	srand(static_cast<unsigned int>(time(NULL)));

	for (int j = 0; j < n; j++)
	{

		if (j % (group) == 0)
			std::wcout << std::endl;
	restart:
		int guess = rand() % n;
		for (auto i : chose)
			if (guess == i)
				goto restart;
		chose.push_back(guess);
		std::wcout << guess << "\t" << subject.at(guess) << std::endl;
	}

	return 0;
}