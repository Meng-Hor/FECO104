#include <iostream>
using namespace std;

int main(){
    // #1
    // int matrix[2][3]{
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout << matrix[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // #2
    // int matrix[2][2];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout << "Enter value for (" << i << ", " << j << ") : ";
    //         cin >> matrix[i][j];
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout << matrix[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // #3
    // int matrix[3][3]{
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // for(int j=0;j<3;j++){
    //     cout << matrix[0][j] << "\t";
    // }

    // #4
    // int matrix[3][3]{
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // for(int i=0;i<3;i++){
    //     cout << matrix[i][1] << "\n";
    // }

    // #5
    // int matrix[4][2]{
    //     {1,2},
    //     {4,5},
    //     {7,8},
    //     {1,2}
    // };
    // int count=0;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<2;j++){
    //         count++;
    //     }
    // }
    // cout << "Total elements: " << count;

    // #6
    // int matrix[2][3]{
    //     {1,2,3},
    //     {4,5,6}
    // };
    // int sum=0;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         sum+=matrix[i][j];
    //     }
    // }
    // cout << "Total sum: " << sum;

    // #7
    // int matrix[3][3]{
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<3;j++){
    //         sum+=matrix[i][j];
    //     }
    //     cout << "Sum of row " << i << " : " << sum << endl;
    // }

    // #8
    // int matrix[3][3]{
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<3;j++){
    //         sum+=matrix[j][i];
    //     }
    //     cout << "Sum of column " << i << " : " << sum << endl;
    // }

    // #9
    // int matrix[2][4]{
    //     {9,1,2,3},
    //     {4,8,6,7}
    // };
    // int max=matrix[0][0];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<4;j++){
    //         if(matrix[i][j]>=max){
    //             max=matrix[i][j];
    //         }
    //     }
    // }
    // cout << "Largest value: " << max;

    // #10
    // int matrix[3][2]{
    //     {1,2},
    //     {3,-10},
    //     {5,6}
    // };
    // int min=matrix[0][0];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         if(matrix[i][j]<=min){
    //             min=matrix[i][j];
    //         }
    //     }
    // }
    // cout << "Smallest value: " << min; 

    // #11
    // int matrix[3][2]{
    //     {1,2},
    //     {3,-10},
    //     {8,6}
    // };
    // int count=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         if(matrix[i][j]%2==0){
    //             count++;
    //         }
    //     }
    // }
    // cout << "Number of even: " << count; 

    // #12
    // int matrix[3][2]{
    //     {11,2},
    //     {3,-10},
    //     {28,60}
    // };
    // int count=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         if(matrix[i][j]>10){
    //             count++;
    //         }
    //     }
    // }
    // cout << "Number > 10: " << count; 

    // #13
    // int matrix[3][3]{
    //     {11,2,5},
    //     {3,-10,8},
    //     {28,60,80}
    // };
    // cout << "Diagonal element: ";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j || i+j==2){
    //             cout << matrix[i][j] << " ";
    //         }
    //     }
    // }

    // #14
    // int matrix[3][3]{
    //     {11,2,5},
    //     {3,10,8},
    //     {28,60,80}
    // };
    // int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j){
    //             sum+=matrix[i][j];
    //         }
    //     }
    // }
    // cout << "Total sum: " << sum;

    // #15
    // int matrix[3][3]{
    //     {11,2,5},
    //     {3,10,8},
    //     {28,60,80}
    // };
    // for(int i=2;i>=0;i--){
    //     for(int j=0;j<3;j++){
    //         cout << matrix[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // #16
    // int matrix[2][3]{
    //     {2,4,8},
    //     {8,5,7}
    // };
    // int transpose[3][2];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         transpose[i][j]=matrix[j][i];
    //         cout << transpose[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    // #17
    // int matrix[3][3]{
    //     {11,2,5},
    //     {-3,10,8},
    //     {28,60,80}
    // };
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(matrix[i][j]<0){
    //             cout << "Not all elements are positive";
    //             return 0;
    //         }
    //     }
    // }
    // cout << "All elements are positive";

    // #18
    // int matrix[3][3]{
    //     {10,2,5},
    //     {3000,10,8},
    //     {28,60,80000}
    // };
    // int rowSum[3];
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<3;j++){
    //         sum+=matrix[i][j];
    //     }
    //     rowSum[i]=sum;
    // }
    // int max=rowSum[0];
    // int row=0;
    // for(int k=0;k<3;k++){
    //     if(rowSum[k]>max){
    //         max=rowSum[k];
    //         row=k;
    //     }
    // }
    // cout << "Row " << row+1 << " has the largest sum.";

    // #19
    // int matrix[3][3]{
    //     {0,2,1},
    //     {1,10,1},
    //     {1,60,1}
    // };
    // int colSum[3];
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<3;j++){
    //         sum+=matrix[j][i];
    //     }
    //     colSum[i]=sum;
    // }
    // int min=colSum[0];
    // int col=0;
    // for(int k=0;k<3;k++){
    //     if(colSum[k]<min){
    //         min=colSum[k];
    //         col=k;
    //     }
    // }
    // cout << "Column " << col+1 << " has the smallest sum.";


    return 0;
}