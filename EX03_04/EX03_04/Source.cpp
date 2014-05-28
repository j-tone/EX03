#include <iostream>
#include <string>
using namespace std;

string sort(string &s);

int main()
{
	string s;
	cout << "Enter a word to be alphabatized: ";
	cin >> s;
	cout << sort(s) << endl;
}

string sort(string &s)
{
	string s1;
	for (int i = 0; i < s.size(); i++){
		for (int j = s.size()-1; j > i; j--){
			char tmp;
			if (s[i] > s[j]){
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
	s1 = s;
	return s1;
}