#include <iostream> 
using namespace std; 
  
int linearsearch(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 14; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = linearsearch(arr, n, x); 
    if(result == -1){ 
      cout << "Element arrayde bulunmamakta." << endl;
       }
    else{
      cout<<"Element arrayin " <<result << ". indexinde bulunmaktadır."; }
   return 0; 
} 
