#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        // optimized for sorting
        int swapped = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

                swapped = 1;
            }
        }
        // check of optimization
        if (swapped == 0)
            break;
    }
    printArray(arr, size);
}

void selectionSott(int arr[], int size)
{
    /* 
        find the minimun element in 
        unsorted array and swap it with
        element at begining. 
    */

    for (int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printArray(arr, size);
}

void insertionSort(int arr[], int size)
{
    /* 
       insert an element from unsorted 
       array to it's correct position in 
       sorted array. 
     */
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    printArray(arr, size);
}

void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; //temp arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j < n1){
        arr[k] = a[j];
        k++;
        j++;
    }

}

void mergeSort(int arr[], int l, int r)
{
    // O( n log n )

    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{

    // int data[] = {-2, 45, 0, 11, -9};
    // int size = sizeof(data) / sizeof(data[0]);
    // bubbleSort(data,size);
    // selectionSott(data,size);
    // insertionSort(data,size);
    // mergeSort(data, 0,5);

    string s = "Helloareyou?";
    for(auto i :s ) cout<<i<<endl;
}