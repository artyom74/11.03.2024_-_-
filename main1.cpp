#include<iostream>
#include"time.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	int const n = 10, a = 10, b = 20;
	
	int arr[n];
	int min, max;
	
	srand(time(NULL));

	for (int i = 0; i < n; i++) {

	arr[i] = a + rand() % (b - a);
	cout << arr[i] << " ";
}

	min = arr[0];
	max = arr[0];

	for (int i = 1; i < n; i++){

	if (arr[i] > max) {
		max = arr[i];
	} 

	if (arr[i] < min) {
		min = arr[i];
	}
}
cout << "минимпльное: " << min << ", максимальное: " << max;

return 0;
}