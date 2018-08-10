//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main() {
//	int T = 0;
//	cin >> T;
//	//ÊäÈë
//	for (int i = 0; i != T; i++) {
//		int N = 0;
//		vector<long long> a;
//		set<long long>s;
//		cin >> N;
//		for (int i = 0; i != N; i++) {
//			int number = 0;
//			cin >> number;
//			a.push_back(number);
//			s.insert(number);
//		}
//		//Êä³ö
//		cout << a.back();
//		s.erase(s.find(a.back()));
//		a.pop_back();
//		for (int i = N - 1; i>0; i--) {
//			int last = a.back();
//			int index = 0;
//			if (s.find(last) != s.end()) {
//				cout << " " << last;
//				s.erase(s.find(last));
//			}
//			a.pop_back();
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}