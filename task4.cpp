////#include<iostream>
//using namespace std;
//template <class T>
//void sortArray(T arr[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//
//				T temp = arr[i];
//
//				arr[i] = arr[j];
//
//				arr[j] =  temp;
//
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 64, 25, 12, 22, 11 };
//	sortArray(arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " " << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int LinearSearch(int arr[] , int size, int key)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == key)
//			return i;
//
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 10,25,30,45,60 };
//	int result = LinearSearch(arr, 5, 20);
//	if (result != -1)
//
//		cout << "Element is found" << endl;
//
//	else
//
//		cout << "Element not found" << endl;
//
//}

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            low = mid + 1;
      else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70 };
    int result = binarySearch(arr, 7, 60);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
}