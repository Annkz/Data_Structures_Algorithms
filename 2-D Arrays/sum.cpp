#include<iostream>
using namespace std;

// void printRowSum(int arr[][3], int row, int col){

//     cout << "Printing sum row wise: " << endl << endl;
//     for(int row=0; row<3; row++){
//         int sum = 0;
//         for(int col=0; col<3; col++){
//             sum += arr[row][col];
//         }
//         cout << sum << endl;
//     }
//     cout << endl;
// }

void printColSum(int arr[][3], int row, int col){

    cout << "Printing sum col wise: " << endl << endl;
    for(int col=0; col<3; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}


int main(){
    
    int arr[3][3];

    cout << "Enter the elements: " << endl << endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >> arr[row][col];
        }
    }
    cout << endl;
    cout << "Printing the array: " << endl << endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
          cout << arr[row][col] << " ";
        }cout << endl ;
    }

    cout << endl;

    // printRowSum(arr, 3, 3);

    printColSum(arr, 3, 3);


    return 0;
}