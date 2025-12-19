#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long ct = 0;
	int remainder = 0;
	int n, m;
	cin >> n >> m;


	long* sum = new long[n];
	long* c = new long[m]();


	for (int i = 0; i < n; i++) {
		int input = 0;
		cin >> input;

		if (i == 0)
			sum[i] = input;
		else
			sum[i] = sum[i - 1] + input;

		remainder = sum[i] % m;

		if (remainder == 0) {
			ct++;
		}

		c[remainder]++;
	}

	for (int i = 0; i < m; i++) {
		if (c[i] > 1) {
			ct += c[i] * (c[i] - 1) / 2;
		}
	}

	cout << ct;

	return 0;
}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long ct = 0;
//	int remainder = 0;
//	int n, m;	
//	cin >> n >> m;
//
//	
//	vector<long> s(n, 0);
//	vector<long> c(m, 0);
//
//	cin >> s[0];
//
//	for (int i = 1; i < n; i++) {
//		int a = 0;
//		cin >> a;
//
//		s[i] = s[i - 1] + a;
//
//	}
//
//	for (int i = 0; i < n; i++) {
//		int remainder = s[i] % m;
//
//		if (remainder == 0) {
//			ct++;
//		}
//
//		c[remainder]++;
//	}
//
//	for (int i = 0; i < m; i++) {		
//		if (c[i] > 1) {
//			ct = ct + (c[i] * (c[i] - 1) / 2);
//		}
//	}
//
//	cout << ct << "\n";
//	
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//	vector<long> S(n, 0);
//	vector<long> C(m, 0);
//	long answer = 0;
//	cin >> S[0];
//
//	for (int i = 1; i < n; i++) {
//		int temp = 0;
//		cin >> temp;
//		S[i] = S[i - 1] + temp;
//	}
//
//	for (int i = 0; i < n; i++) {
//		int remainder = S[i] % m;
//
//		if (remainder == 0) {
//			answer++;
//		}
//
//		C[remainder]++;
//	}
//
//	for (int i = 0; i < m; i++) {
//		if (C[i] > 1) {
//			answer = answer + (C[i] * (C[i] - 1) / 2);
//		}
//	}
//
//	cout << answer << "\n";
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int n, m;
//    cin >> n >> m;
//
//    vector<long long> c(m, 0);
//
//    long long sum = 0;
//    long long answer = 0;
//
//    // "아무것도 더하지 않은 누적합" (0의 나머지)
//    c[0] = 1;
//
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//
//        sum = (sum + x) % m;
//        c[sum]++;
//    }
//
//    for (int i = 0; i < m; i++) {
//        answer += c[i] * (c[i] - 1) / 2;
//    }
//
//    cout << answer;
//    return 0;
//}