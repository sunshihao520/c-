#include <iostream>
using namespace std;


int main() {
	int a,  b,  type;
	cin >> a >> b >> type;
		// write code here
		if (type == 1) {
			for (int i = 1; i <= b; i++) {
				a += a;
			}
			return a;
		}

		else if (type == 0) {
			int count = 0;
			while (a >= 0) {
				a = a - b;
				count++;
			}
			return count - 1;
		}



		else if (type == -1) {
			return a - b;
		}
		return 0;
	}
