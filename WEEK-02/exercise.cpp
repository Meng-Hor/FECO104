#include <iostream>
using namespace std;

int main(){
    // // #1's teacher
    // int i, n[5], sum=0;
    // // Input loop
    // for(i=1;i<=5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> n[i-1];
    // }
    // // Calculation loop
    // for(i=0;i<=4;i++){
    //     cout << n[i];
    //     if(i==4){
    //         cout << " = ";
    //     }else{
    //         cout << " + ";
    //         sum = sum + n[i];
    //     }
    //     cout << sum;
    // }

    // #1
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }

    // #2
    // int arr[5], i;
    // int sum=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     sum+=arr[i];
    // }
    // cout << "The total sum is: " << sum;

    // #3
    // int arr[5], i;
    // int countEven=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     if(arr[i]%2==0){
    //         countEven++;
    //     }
    // }
    // cout << "Total of even numbers: " << countEven;

    // #4
    // int arr[5], i;
    // int countPos=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     if(arr[i]>0){
    //         countPos++;
    //     }
    // }
    // cout << "Total of even numbers: " << countPos;

    // #5
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(i=4;i>=0;i--){
    //     cout << arr[i] << " ";
    // }

    // #6
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // int maxVal=arr[0];
    // for(i=1;i<5;i++){
    //     if(arr[i]>maxVal){
    //         maxVal=arr[i];
    //     }
    // }
    // cout << "The maximun value is: " << maxVal;

    // #7
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // int minVal=arr[0];
    // for(i=1;i<5;i++){
    //     if(arr[i]<minVal){
    //         minVal=arr[i];
    //     }
    // }
    // cout << "The minimum value is: " << minVal;

    // #8
    // int arr[5], i;
    // int sum=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     sum+=arr[i];
    // }
    // int avg;
    // avg= sum/5.0;
    // cout << "The average is: " << avg;

    // #9
    // int arr[5], i;
    // int count=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     if(arr[i]>10){
    //         count++;
    //     }
    // }
    // cout << "Number greater than 10: " << count;

    // #10
    // int arr[5], i;
    // int sum=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     sum+=arr[i];
    // }
    // int avg;
    // avg= sum/5.0;
    // int count=0;
    // for(i=0;i<5;i++){
    //     if(arr[i]>avg){
    //         count++;
    //     }
    // }
    // cout << "Greater than average: " << count;

    // #11
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     if(arr[i]<0){
    //         arr[i]=0;
    //     }
    // }
    // for(i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }

    // #12
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // int maxVal=arr[0];
    // int index=0;
    // for(i=1;i<5;i++){
    //     if(arr[i]>maxVal){
    //         maxVal=arr[i];
    //         index=i;
    //     }
    // }
    // cout << "Index: " << index;

    // #13
    // int arr[5], i;
    // int sum=0;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    //     if(arr[i]%2==0){
    //         sum+=arr[i];
    //     }
    // }
    // cout << "Sum of even numbers: " << sum;

    // #14
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // for(i=0;i<5;i++){
    //     if(arr[i]<0){
    //         cout << "NO";
    //         return 0;
    //     }
    // }
    // cout << "YES";

    // #15
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // int count=-1;
    // for(i=0;i<5;i++){
    //     if(arr[i]==arr[0]){
    //         count++;
    //     }
    // }
    // cout << "Duplicate of " << arr[0] << " : " << count;

    // #16
    // int arr[5], i;
    // for(i=0;i<5;i++){
    //     cout << "Enter an integer: ";
    //     cin >> arr[i];
    // }
    // int maxVal=arr[0];
    // int tmp;
    // for(i=1;i<5;i++){
    //     if(arr[i]>maxVal){
    //         tmp=maxVal;
    //         maxVal=arr[i];
    //     }
    //     else if(arr[i]>tmp && arr[i]!=maxVal){
    //         tmp=arr[i];
    //     }
    // }
    // if(tmp==maxVal){
    //     cout << "No second maximun.";
    // }else{
    //     cout << "Second maximun: " << tmp;
    // }

    // #17
    // {1,2,3,4,5} >> {5,4,3,2,1}
    int arr[5], i, tmp;
    for(i=0;i<5;i++){
        cout << "Enter an integer: ";
        cin >> arr[i];
    }
    


    // #19
    // int a[5], i, tmp;
    // for(i=0;i<=4;i++){
    //     cout << "Enter an integer: ";
    //     cin >> a[i];
    // }
    // tmp=a[4];
    // for(i=4;i>=1;i--){
    //     a[i]=a[i-1];
    // }
    // a[0]=tmp;
    // for(i=0;i<=4;i++){
    //     cout << a[i];
    // }

    // // Extra
    // // [4,5,1,2,3]
    // int a[5], i, tmp, n;
    // cout << "How many time you want to shift? ";
    // cin >>n;
    // for(i=0;i<=4;i++){
    //     cout << "Enter an integer: ";
    //     cin >> a[i];
    // }
    // for(int j=1; j<=n;j++){
    //     tmp=a[4];
    //     for(i=4;i>=1;i--){
    //         a[i]=a[i-1];
    //     }
    //     a[0]=tmp;
    // }
    // for(i=0;i<=4;i++){
    //     cout << a[i];
    // }
    return 0;
}