#include <iostream>
using namespace std;

int main(){
    // #1
    // int count=1;
    // int arr[6];
    // for(int i=0;i<6;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(int i=0;i<6;i++){
    //     if(arr[i]==arr[0]){
    //         count++;
    //     }
    // }
    // cout << "The integer " << arr[0] << " appears " << count << " times!";

    // #2
    // int arr[5];
    // int arrSize=5;
    // for(int i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(int i=0;i<5;i++){
        
    // }

    // // #4
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(int i=0;i<4;i++){
    //     arr[i]=arr[i+1];
    //     cout << arr[i] << " ";
    // }
    // cout << "0";

    // #6
    // int arr[8] = {1, 8, 3, 3, 4, 5, 2, 2};
    // // for(int i=0;i<8;i++){
    // //     cout << "Enter an integer: ";
    // //     cin >> arr[i];
    // // }
    // for(int i=0;i<8;i++){
    //     for(int j=i+1;j<8;j++){
    //         if(arr[i]!=arr[j]){
    //             cout << arr[j];
    //         }
    //     }
    // }

    // #13
    int arr[7];
    for(int i=0;i<7;i++){
        cout << "Enter an integer: ";
        cin >> arr[i];
    }
    bool duplicateFound=false;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                cout << "First duplicate value found: " << arr[i];
                duplicateFound=true;
                break;
            }
        }
        if(duplicateFound){
            break;
        }
    }


    return 0;
}