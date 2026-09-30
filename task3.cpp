#include<iostream>
using namespace std;
int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;

	}
	return -1;
}
int main() {
	int arr[] = { 10,25,30,45,60 };
	int result = LinearSearch(arr, 5, 20);
	if (result != -1)

		cout << "Element is found" << endl;

	else

		cout << "Element not found" << endl;

}