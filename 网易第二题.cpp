//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int N = 0;
//	vector<int> a;
//	vector<string> b;
//	int c;
//	string d;
//	int M = 0;
//	cin >> N;
//	for (int i = 0; i != N; i++) {
//		cin >> c >> d;
//		a.push_back(c);
//		b.push_back(d);
//	}
//	cin >> M;
//	int result[51];
//	for (int j = 0; j != M; j++) {
//		cin >> d >> c;
//		if (c == 1) {
//			for (int i = 0; i != N; i++) {
//				if (b[i] == d)
//					result[i] = 1;
//			}
//		}
//		if (c == 0) {
//			for (int i = 0; i != N; i++) {
//				if (b[i] == d)
//					result[i] = 0;
//			}
//		}
//	}
//	vector<string> re1;
//	vector<int> re11;
//	vector<string> re2;
//	vector<int> re22;
//	for (int i = 0; i != N; i++) {
//		if (result[i] == 1) {
//			re1.push_back(b[i]);
//			re11.push_back(a[i]);
//		}
//	}
//	for (int i = 0; i != N; i++) {
//		if (result[i] == 0) {
//			re2.push_back(b[i]);
//			re22.push_back(a[i]);
//		}
//	}
//
//	for (int i = 0; i != re1.size(); i++) {
//		for (int j = 1; j != re1.size(); j++) {
//			if (re11[i]<re11[j]) {
//				int f = re11[i];
//				string g = re1[i];
//
//				re11[i] = re11[j];
//				re11[j] = f;
//
//				re1[i] = re1[j];
//				re1[j] = g;
//			}
//			if (re11[i] == re11[j]) {
//				if (re1[i]>re1[j]) {
//					string g = re1[i];
//					re1[i] = re1[j];
//					re1[j] = g;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i != re2.size(); i++) {
//		for (int j = i+1; j != re2.size(); j++) {
//			if (re22[i]<re22[j]) {
//				int f = re22[i];
//				string g = re2[i];
//
//				re22[i] = re22[j];
//				re22[j] = f;
//
//				re2[i] = re2[j];
//				re2[j] = g;
//			}
//			if (re22[i] == re22[j]) {
//				if (re2[i]>re2[j]) {
//					string g = re2[i];
//					re2[i] = re2[j];
//					re2[j] = g;
//				}
//			}
//		}
//	}
//	for (string s : re1) {
//		cout << s << endl;
//	}
//	for (string s : re2) {
//		cout << s << endl;
//	}
//	//system("pause");
//	return 0;
//}