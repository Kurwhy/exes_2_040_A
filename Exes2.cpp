#include <iostream>
using namespace std;

int Wahyu[36];
int n;
int i;
int lowerbound = 0;
int upperbound = n - 1;
int mid = (lowerbound + upperbound) / 2;

void input()
{
	while (true)
	{
		cout << "Enter the numbre of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 36))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 36 elements.\n\n";
	}

	cout << "\n--------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> Wahyu[i];
	}
}

void BinarySearch()
{
	while (Wahyu[mid] = n)
	{
		cout << "Found" << endl;
		break;
	}
	if (Wahyu[mid] < n)
	{
		upperbound = mid - 1;
	}
	if (Wahyu[mid] > n)
	{
		lowerbound = mid + 1;
	}
	if (lowerbound <= upperbound)
	{
		mid = (lowerbound = upperbound) / 2;
	}
	else cout << "Not Found" << endl;
}

int main()
{
	input();
	BinarySearch();
}