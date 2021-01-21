#include <bits/stdc++.h>
using namespace std;

void printSubStr(string str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		cout << str[i];
}

int longestPalSubstr(string str)
{
	int n = str.size();
	int max1 = 1;
    int start = 0;
	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			int flag = 1;
			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					flag = 0;
			if (flag && (j - i + 1) > max1) {
				start = i;
				max1 = j - i + 1;
			}
		}
	}
	printSubStr(str, start, start + max1 - 1);
	return max1;
}
//This progrom has O(n^3)
int main()
{
	string str ;
    cin>>str;
	cout << longestPalSubstr(str);
	return 0;
}
