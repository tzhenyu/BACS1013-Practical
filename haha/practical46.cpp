#include <iostream>
#include <iomanip>

using namespace std; 

int maisdsdfsn() {
	float sales, income = 0;
	cout << "Hi, what's your monthly sales? RM";
	cin >> sales; 

	//nested if
	//if (sales >= 50000) {
	//	income = 375 + (0.16 * sales);
	//	if (sales < 50000 && sales >= 40000) {
	//		income = 350 + (0.14 * sales);
	//		if (sales < 40000 && sales >= 30000) {
	//			income = 325 + (0.12 * sales);
	//			if (sales < 30000 && sales >= 20000) {
	//				income = 300 + (0.09 * sales);
	//				if (sales < 20000 && sales >= 10000) {
	//					income = 250 + (0.05 * sales);
	//					if (sales < 10000) {
	//						income = 200 + (0.03 * sales);
	//					}
	//				}
	//			}
	//		}
	//	}
	//}

	//multi-way if-else
	if (sales >= 50000) {
		income = 375 + (0.16 * sales);
	}
	else if (sales < 50000 && sales >= 40000) {
		income = 350 + (0.14 * sales);
	}
	else if (sales < 40000 && sales >= 30000) {
		income = 325 + (0.12 * sales);
	}
	else if (sales < 30000 && sales >= 20000) {
		income = 300 + (0.09 * sales);
	}
	else if (sales < 20000 && sales >= 10000) {
		income = 250 + (0.05 * sales);
	}
	else if (sales < 10000) {
		income = 200 + (0.03 * sales);
	}

	cout << fixed << setprecision(2);
	cout << "Your monthly salary would be: RM" << income << endl;
	return 0;
}