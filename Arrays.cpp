//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	bool ships[4][4] = {
//						 { 0, 1, 1, 0 },
//						 { 0, 0, 0, 0 },
//						 { 0, 0, 1, 0 },
//						 { 0, 0, 1, 0 }
//					   };
//
//	int hits = 0;
//	int numberOfturns = 0;
//
//	while (hits < 4) {
//		int row, column;
//
//		cout << "Enter row between 0 to 3" << endl;
//		cin >> row;
//
//		cout << "Enter column between 0 to 3" << endl;
//		cin >> column;
//
//		if (ships[row][column] == 1) {
//			ships[row][column] = 0;
//			hits++;
//			cout << "Hit" << 4 - hits << " left." << endl;
//		}
//		else {
//			cout << "Missed" << endl;
//		}
//
//		numberOfturns++;
//	}
//
//	cout << "Victory!" << endl;
//	return 0;
//}