#include <iostream>

using namespace std;

int DigitChecker(long long number){
	int UnitCount = 1;
	while (number > 9){
		number = number / 10;
		UnitCount++;
	}
	return UnitCount;
}

int main(){
long long number;

cout << "Input Number" << endl << "__: ";
cin >> number;
for (int i = 0; i < 96; i++){
	cout << "\n";
}
int digit = DigitChecker(number);

switch (digit){
	case 1:
		cout << "Unit";
		break;
	case 2:
		cout << "Ten";
		break;
	case 3:
		cout << "Hundred";
		break;
	case 4:
		cout << "Thousand";
		break;
	case 5: 
		cout << "Ten Thousand";
		break;
	case 6:
		cout << "Hundred Thousand";
		break;
	case 7:
		cout << "Million";
		break;
	case 8:
		cout << "Ten Million";
		break;
	case 9:
		cout <<	"Hundred Million";
		break;
	case 10:
		cout << "Billion";
		break;
	case 11:
		cout << "Ten Billion";
		break;
	case 12:
		cout << "Hundred Billion";
		break;
	case 13:
		cout << "Trillion";
		break;
	case 14:
		cout << "Ten Trillion";
		break;
	case 15:
		cout << "Hundred Trillion";
		break;
	case 16:
		cout << "Quadrillion";
		break;
	case 17:
		cout << "Ten Quadrillion";
		break;
	case 18:
		cout << "Hundred Quadrillion";
		break;
	case 19:
		cout << "Qintillion";
		break;
	case 20:
		cout << "Ten Qintillion";
		break;
	case 21:
		cout << "Hundred Qintillion";
		break;	
	default:
		cout << "Value not within the limitations of C++";
		break;															
}
cout << endl;

return 0;
}


