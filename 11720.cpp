#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string val;
	int sum = 0;
	cin >> n;
	cin >> val;
	for (int i = 0; i < val.length(); i++) {
		sum += val[i] - '0';
	}
	cout << sum;
	return 0;
}
