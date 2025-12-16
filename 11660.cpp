#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int soultion;

	int n, q;
	int x1, x2, y1, y2;
	cin >> n >> q;
	
	int** arr = new int*[n];
	int** sum = new int*[n+1];
	int** flag = new int* [n];	

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		sum[i] = new int[n+1]();
	}
	sum[n] = new int[n+1]();


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			sum[i+1][j+1] = arr[i][j] - sum[i][j] + sum[i+1][j] + sum[i][j+1];
		}
	}


	for (int i = 0; i < q; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		soultion = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1-1][y1-1];
		cout << soultion << "\n";
	}

	return 0;
}