//class Printer {
//public:
//	vector<int> printMatrix(vector<vector<int> > mat, int n, int m) {
//		// write code here
//		vector<int> a;
//		for (int i = 0; i != n; i++) {
//			if ((i + 1) % 2 == 1) {
//				for (int j = 0; j != m; j++) {
//					a.push_back(mat[i][j]);
//				}
//			}
//			if ((i + 1) % 2 == 0) {
//				for (int j = m; j>0; j--) {
//					a.push_back(mat[i][j - 1]);
//				}
//			}
//		}
//		return a;
//	}
//};