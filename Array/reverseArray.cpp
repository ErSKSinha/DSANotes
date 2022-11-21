#include <iostream>
using namespace std;

//(Itrative Approach) reverse Array Function
// time complexity : O(n)
void reverseArray(int arr[], int n) {
    int start = 0, end = n -1;
    while(start < end) {
      int temp = 0;
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
}
//(Recursive Approach) reverse Array Function
// time complexity : O(n)
void recursiveReverseArray(int arr[], int start, int end) {
  // base condition 
    while(start >= end)
    return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // again call same function
    recursiveReverseArray( arr,  start + 1,  end -1);
}
// print array
void printArray(int arr[] , int size){
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
}

int main() {
 
  int arr[] = {5, 2, 3, 10, 0, 6};
  int arrSize =  sizeof(arr) / sizeof(arr[0]);
  printArray(arr, arrSize);
  // after reverse array
  recursiveReverseArray(arr, 0, arrSize - 1);
  cout << "after reversing array\n";
  printArray(arr, 6);

  return 0;
} 
