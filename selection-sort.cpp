// SELECTION SORT
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<" Enter the desired size of the array"<<endl;
    cin>>n;
    cout<<" enter "<<n << " elements of the array"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //selection sorting
   for(int i = 0; i<n-1; i++){
    int minIndex = i;
    for(int j = i+1; j<n; j++){
        if(arr[j]< arr[minIndex])
        swap(arr[minIndex], arr[j]);
    }
   }
   cout<< "the sorted array is "<<endl;
   for(int i = 0; i<n ; i++){
    cout<<arr[i]<< " ";
   } 
   cout<<endl;
}
