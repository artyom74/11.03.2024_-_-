#include <iostream> 
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int arr[12];
	int start, end;

	for (size_t i = 1; i <= 12; i++) {
		cout << "������� ��������� �� " << i << ". �����: ";
		cin >> arr[i - 1];
	}

	cout << "������� ��������: ";
	cin >> start >> end;

	int max = arr[start - 1];
	int min = arr[start - 1];
	int maxI = 0, minI = 0;

	for (size_t i = start - 1; i < end - 1; i++) {

		if (max < arr[i])
		{
			max = arr[i];
			maxI = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			minI = i;
		}
	}

	cout << "������������ ������� ���� � " << maxI + 1 << " ������." << endl << "����������� ������� ���� � " << minI + 1 << " ������" << endl;


	return 0;
}