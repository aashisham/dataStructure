// Static Implementation of Array

#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout  << "Enter the elements of array : " << endl;
    for(int i=0;i<10;i++){
        cin >> arr[i] ;
    }

    cout << "\nThe elements of array are as follows :" << endl;
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
