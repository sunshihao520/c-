//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int lena=9, lenb=1;
//	string A="jnduwslil", B="l";
//	//cin >> A >> B ;
//	int Next[1];
//	int i = 0, j = -1;
//	Next[0] = j;
//	while (i<lenb) {
//		if (j == -1 || B[i] == B[j]) {
//			Next[++i] = ++j;
//		}
//		else
//			j = Next[j];
//	}
//	i = 0;
//	j = 0;
//	while (i<lena) {
//		if (j == -1 || A[i] == B[j]) {
//			if (j == lenb - 1) {
//				break;
//			}
//			else {
//				i++;
//				j++;
//			}
//		}
//		else
//			j = Next[j];
//	}
//
//
//
//	return 0;
//}