//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//	int N = 0, number = 0;
//	int a[100][100];
//	set<int> s;
//	cin >> N >> number;
//	for (int i = 0; i != N; i++) {
//		for (int j = 0; j != N; j++) {
//			cin >> a[i][j];
//			if (cin.get() == '\n')
//				break;
//		}
//	}
//	for (int i = 0; i != N; i++) {
//		s.insert(a[number][i]);
//
//	}
//	int max = 0;
//	int label = -1;
//	for (int i = 0; i != N; i++) {
//		int num = 0;
//		if (i!=number&&s.find(i) == s.end()) {
//			for (int j = 0; j != N; j++) {
//				if (s.find(a[i][j]) != s.end()) {
//					if (j >= 1 && a[number][i] == 0)
//						break;
//					num++;
//				}
//			}
//			if (num>max) {
//				max = num;
//				label = i;
//			}
//		}
//	}
//	cout << label << endl;
//	return 0;
//}