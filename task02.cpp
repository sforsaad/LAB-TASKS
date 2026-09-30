//#include<iostream>
using namespace std;
template <class T>
void sortArray(T arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{

				T temp = arr[i];

				arr[i] = arr[j];

				arr[j] = temp;

			}
		}
	}
}


int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	sortArray(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " " << endl;
	}
}