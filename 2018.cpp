#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int sum = 3;
	int sti = 1;
	int eni = 2;
	int count = 1;

	cin >> n;

	while (n >= sti + eni) {
		if (sum < n) {
			eni++;
			sum += eni;
		}
		else if (sum > n) {
			sum = sum - sti;
			sti++;
		}
		else {
			sti++;
			eni = sti + 1;
			sum = sti + eni;
			count++;
		}
	}

	cout << count;

	return 0;
}