#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50}; //single int contain 4 bit in an array  
    int size = sizeof(arr)/sizeof(arr[0]);// total size divided by the elememnt size
    //sizeof(arr)=20 and sizeof(arr[0])=4
    cout << "size of array: " << size << endl;
    return 0;
}