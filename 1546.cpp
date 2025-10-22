#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int* a1 = new int[n];	
	double a2 = 0;
	int max = 0;	
	
	for (int i = 0; i < n; i++) {
		cin >> a1[i];
		if (max < a1[i]) {
			max = a1[i];
		}
	}
	
	for (int i = 0; i < n; i++) {
		a2 += double(a1[i]) / max * 100;
	}

	cout << double(a2 / n);

	return 0;
}