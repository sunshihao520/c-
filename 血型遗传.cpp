//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//vector<string> child;
//int main() {
//	string father = "O", mother = "O";
//	if (father == mother) {
//		if (father == "O")
//			child.push_back("O");
//		if (father == "AB") {
//			child.push_back("A");
//			child.push_back("B");
//			child.push_back("AB");
//		}
//		else {
//			child.push_back(father);
//			child.push_back("O");
//		}
//	}
//	else {
//		if (father == "O" || mother == "O") {
//			if (father == "AB" || mother == "AB") {
//				child.push_back("A");
//				child.push_back("B");
//			}
//			if (father == "A" || mother == "A") {
//				child.push_back("A");
//				child.push_back("O");
//			}
//			if (father == "B" || mother == "B") {
//				child.push_back("B");
//				child.push_back("O");
//			}
//		}
//		if (father == "AB"&&mother == "A" || father == "A"&&mother == "AB") {
//
//			child.push_back("A");
//			child.push_back("AB");
//			child.push_back("B");
//		}
//		if (father == "AB"&&mother == "B" || father == "B"&&mother == "AB") {
//
//			child.push_back("A");
//			child.push_back("AB");
//			child.push_back("B");
//		}
//		if (father == "A"&&mother == "B" || father == "B"&&mother == "A") {
//
//			child.push_back("A");
//			child.push_back("AB");
//			child.push_back("B");
//			child.push_back("O");
//		}
//	}
//	return 0;
//
//}
