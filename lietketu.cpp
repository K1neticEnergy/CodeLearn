#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <class T>
void swapV(T &obj1,T &obj2){
    T temp = obj1;
    obj1 = obj2;
    obj2 = temp;
}

std::string sortSTR(std::string getIn){
    std::string temp = getIn;
    for(int i = 2; i <= getIn.length(); i++)
        for(int j = getIn.length() ; j >= i ; j--){
            if (static_cast<int>(temp.at(j-1)) - static_cast<int>(temp.at(j-2)) < 0) 
                swapV(temp.at(j-1),temp.at(j-2));
        }
    return temp;
}
bool is_palidrome(std::string str){
    std::string pal;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = str.length()-1; i >= 0; i--) {
        pal.push_back(str.at(i));
    }
    if (str.compare(pal) == 0) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    int i;
    std::string word, tmp;
    std::vector<std::string> stream;
    std::cin >> word;
    std::cout << std::endl;
    i = word.length();
    tmp = sortSTR(word);
    while(i >= 0){
        std::cout << tmp << std::endl;
        if(is_palidrome(tmp)) stream.push_back(tmp);
        i = word.length() - 2;
        while ((i >= 0) && (static_cast<int>(tmp.at(i)) > static_cast<int>(tmp.at(i+1)) )) i--;
        if (i >= 0) {
            int k = word.length() - 1;
            while (static_cast<int>(tmp.at(k)) < static_cast<int>(tmp.at(i))) k--;
            swapV(tmp.at(k), tmp.at(i));
            int a = i + 1;
            int b = word.length() - 1;
            while (a < b) {
                swapV(tmp.at(a), tmp.at(b));
                a++;
                b--;
            }
        }
    }
    std::cout << std::endl;
    for(auto x: stream) std::cout << x << " ";
    
    return 0;
}
