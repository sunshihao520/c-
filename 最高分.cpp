//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N, M, b;
//	cin >> N >> M;
//	vector<int> a;
//	for (int i = 0; i != N; i++) {
//		cin >> b;
//		a.push_back(b);
//	}
//	char s;
//	int c, d;
//	for (int i = 0; i <= M-1; i++) {
//		cin >> s;
//		cin >> c >> d;
//		if (s == 'Q') {
//			if (c>d) {
//				int v = c;
//				c = d;
//				d = v;
//			}
//			int max = 0;
//			for (int j = c; j <= d; j++) {
//				if (a[j - 1] >= max)
//					max = a[j - 1];
//			}
//			cout << max << endl;
//		}
//		if (s == 'U') {
//			a[c - 1] = d;
//		}
//	}
//	return 0;
//}