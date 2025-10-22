#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, q;
	int a, b;
	cin >> n >> q;	
	int num;
	int* sum = new int[n+1];	
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> num;	
		sum[i] = sum[i-1] + num;
	}

	for (int i = 0; i < q; i++) {
		cin >> a >> b;							
		
		cout << sum[b] - sum[a - 1] << "\n";
	}



	return 0;
}