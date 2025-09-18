///week02-2a.cpp Part1
///using C++
#include <iostream>///cin cout
#include <string>///string
using namespace  std;
int main()
{
	string a;
	string ans;
	cin >> a;
	int N = a.length();
	for(int i=N-1; i>=0; i--){
		ans += a[i];
	}

	cout << ans;
}
