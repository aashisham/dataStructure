#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array : " ;
    cin >> size;
    int *arr = new int[size];
    cout  << "Enter the elements of array : " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i] ;
        //arr++;
    }
    cout << "\nThe elements of array are as follows :" << endl;
    // arr--;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
        // arr--;
    }
    delete[] arr;
}
