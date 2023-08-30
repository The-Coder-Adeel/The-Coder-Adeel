#include <iostream>
using namespace std;

int evenodd(int num){
 if (num % 2 == 0) {
        cout << num << " is even.";
    } else {
        cout << num << " is odd.";
    }
return num;
}
int main(){
	int num;

	cout << "enter number";
		cin >> num;
	evenodd(num);
	return 0;
}

