//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//	int findMaxDivision(vector<int> A, int n) {
//		// write code here
//
//		int maxnum = A[0];
//		int minnum = A[0];
//		for (int i = 0; i < A.size(); i++) {
//			if (maxnum < A[i])
//				maxnum = A[i];
//			if (minnum > A[i])
//				minnum = A[i];
//		}
//		int *arr = new int[maxnum - minnum + 1]; // 生成桶
//		for (int i = 0; i < A.size(); i++) {
//			arr[A[i] - minnum]++; // 填桶
//		}
//		int count = 0;
//		int max = 0;
//		for (int i = 0; i < maxnum - minnum + 1; i++) {
//			if (arr[i] == 0) { // 桶为空
//				count++;//记录连续空桶数
//			}
//			else {
//				if (max < count)
//					max = count;
//				count = 0;
//			}
//		}
//		return max + 1;
//	}
//
//int main() {
//	vector<int> A = { 89,568,486,329,387 };
//	cout<<findMaxDivision(A, 5);
//	system("pause");
//	return 0;
//}