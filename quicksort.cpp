#include <iostream>
using namespace std;
int p(int *arr, int front_, int end_)
{
    int pivot = arr[end_];
    int i = front_ - 1;
    for (int j = front_; j < end_; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end_]);
    return i;
}
void quicksort(int *arr, int front_, int end_)
{
    if (front_ < end_)
    {
        int pivot = p(arr, front_, end_);
        quicksort(arr, front_, pivot-1);
        quicksort(arr, pivot+1, end_);
    }

}

int main()
{
    int n;
    cout<<"±ý¿é¤J­Ó¼Æ: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
}
