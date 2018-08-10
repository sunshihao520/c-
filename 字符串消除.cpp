//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string delete_string(string s)
//{
//	string s1;
//	for (int i = 0; i != s.size() - 1; i++) {
//		if (s[i] != s[i + 1]) {
//			if (i == 0 || s[i] != s[i - 1]) {
//				s1 += s[i];
//			}
//		}
//	}
//	if (s[s.size() - 2] != s[s.size() - 1]) {
//		s1 += s[s.size() - 1];
//	}
//	if (s1 != s&&s1.size()>1) {
//		s1 = delete_string(s1);
//	}
//	return s1;
//}
//
//
//
//int main()
//{
//	int number = 0;
//	string str;
//	cin >> number;
//	for (int i = 0; i != number; i++) {
//		cin >> str;
//		int max = 0;
//		for (int j = 0; j != str.size() - 1; j++) {
//			for (int k = 0; k != 3; k++) {
//				char add = 'A' + k;
//				string str_change = str.substr(0, j) + add + str.substr(j,str.size()-j);
//				string result = delete_string(str_change);
//				int score = str_change.size() - result.size();
//				if (score>max) {
//					max = score;
//				}
//			}
//		}
//		cout << max << endl;
//	}
//	system("pause");
//	return 0;
//}
