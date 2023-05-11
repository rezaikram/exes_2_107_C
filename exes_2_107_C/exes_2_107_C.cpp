#include <iostream>
using namespace std;

int arr[28];								
int cmp_count = 0;				
int mov_count = 0;				
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 28)
			break;
		else
			cout << "\nMaksimum panjang array adalah 28" << endl;
	}

	cout << "\n--------------------" << endl;
	cout << "\n Enter Element Array" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void display() {
	cout << "\n=================" << endl;
	cout << "Sorted Array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparasions: " << cmp_count << endl;
	cout << "Number of data movements: " << mov_count << endl;
	
	return ;
}
