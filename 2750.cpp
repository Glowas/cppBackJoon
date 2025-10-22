//251021
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int flag;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {		
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {
				flag = a[i];
				a[i] = a[j];
				a[j] = flag;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
