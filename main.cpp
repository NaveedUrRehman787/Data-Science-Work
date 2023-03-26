#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
  int arr[10] = {3,5,8,12,18,21,29,54,66,75};
  int n,mid,start,end,loc;
  loc = -1;
  start = 0;
  end = 9;
  cout << "Enter any number to find  ";
  cin >> n;
  while(start <= end){
    mid = (start+end)/2;
    if(arr[mid] == n){
      loc = mid;
      break;
    }else if(n < arr[mid]){
      end = mid - 1;
    }else{
      start = mid + 1;
    }
    
  }
  if (loc == -1){
    cout << n << " is not found";
  }else{
    cout << n << " is found in index of " << loc;
  }
}