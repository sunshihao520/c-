//#include <iostream>
//#include <string>
////#include <cstring>
//
//using namespace std;
//int Next[10001];
//
//void get_next(string& str){
//	int i = 0, j = -1;
//	Next[0] = -1;
//	while (i<str.size())
//	{
//		if (j == -1 || str[i] == str[j])
//		{
//			i++;
//			j++;
//			if (i==str.size()||str[i] != str[j])
//				Next[i] = j;
//			else
//				Next[i] = Next[j];
//		}
//		else
//		{
//			j = Next[j];
//	    }		
//	}
//
//}
//
//int KMP_find(string& str1, string& str2)
//{
//	int i = 0, j = 0;
//	get_next(str2);
//	int count = 0;
//	while (i<str1.size())
//	{
//		if (j ==-1 || str1[i] == str2[j])
//		{
//			i++;
//			j++;
//		}
//		else if (j<str2.size())
//		{
//			j = Next[j];
//		}
//		if (j == str2.size())
//		{
//			count++;
//			j = Next[j];
//		}
//
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	string str1, str2;
//	int n;
//	cin >> n;
//	for (int i = 0; i != n; i++) {
//		cin >> str2;
//		cin >> str1;
//		int number = KMP_find(str1, str2);
//		cout << number << endl;
//	}
//	system("pause");
//	return 0;
//}