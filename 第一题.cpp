//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	int len = str.size();
//	int K = len/4;
//	string ps = str.substr(0, K + 1);
//	cout << ps << endl;
//	for (int j = 0; j<K - 1; j++) {
//		string as(K+1, ' ');
//		as[0] = str[str.size()-1 - j];
//		as[K] = str[K + 1+j];
//		cout << as << endl;
//	}
//	for (int i = str.size() -K ; i != 2*K-1; i--) {
//		cout << str[i];
//	}
//	cout << endl;
//	return 0;
//}