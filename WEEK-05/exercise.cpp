#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // #1
    // char str[] = "Hello!";
    // cout << str;

    // #2
    // char str[30];
    // cout << "Enter a word: ";
    // cin >> str;
    // cout << str;

    // #3
    // char str[30];
    // cout << "Enter a word: ";
    // cin >> str;
    // for(int i=0;str[i]!='\0';i++){
    //     cout << str[i] << endl;
    // }

    // #4
    // char str[30];
    // cout << "Enter a word: ";
    // cin >> str;
    // int count=0;
    // for(int i=0;str[i]!='\0';i++){
    //     count++;
    // }
    // cout << "Total characters: " << count;

    // #5
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // int count=0;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]==' '){
    //         count++;
    //     }
    // }
    // cout << "Total space: " << count;

    // #6
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // int count=0;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    //         count++;
    //     }
    // }
    // cout << "Total vowels: " << count;

    // #7
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // int count=0;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]>='0' && str[i]<='9'){
    //         count++;
    //     }
    // }
    // cout << "Total digits: " << count;

    // #8
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // int upperCount=0;
    // int lowerCount=0;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]>='A' && str[i]<='Z'){
    //         upperCount++;
    //     }else if(str[i]>='a' && str[i]<='z'){
    //         lowerCount++;
    //     }
    // }
    // cout << "Total uppercase letter: " << upperCount;
    // cout << "\nTotal lowercase letter: " << lowerCount;

    // #9
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // char chr[2];
    // cout << "Enter the character you want to check: ";
    // cin >> chr;
    // int count=0;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]==chr[0]){
    //         count++;
    //     }
    // }
    // cout << "The letter " << chr << " appears " << count << " times.";

    // #10
    // char str[100];
    // cout << "Enter username: ";
    // cin.getline(str,100);
    // bool hasSpace=false;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]==' '){
    //         hasSpace=true;
    //         break;
    //     }
    // }
    // if(hasSpace){
    //     cout << "The username contain space";
    // }else{
    //     cout << "The username doesn't contain any space";
    // }

    // #11
    // char str[100];
    // cout << "Enter the string: ";
    // cin.getline(str,100);
    // bool containDigit=true;
    // for(int i=0;str[i]!='\0';i++){
    //     if(str[i]<='0' || str[i]>='9'){
    //         containDigit=false;
    //         break;
    //     }
    // }
    // if(containDigit){
    //     cout << "The string contain only digits";
    // }else{
    //     cout << "The string doesn't contain only digits";   
    // }

    // #12
    // char control[100];
    // char test[100];
    // cout << "Enter a string: ";
    // cin.getline(control,100);
    // cout << "Enter another string: ";
    // cin.getline(test,100);
    // bool sameStr=true;
    // for(int i=0;(test[i]!='\0');i++){
    //     if(control[i]!=test[i]){
    //         sameStr=false;
    //         break;
    //     }
    // }
    // if(sameStr){
    //     cout << "The strings are identical.\n";
    // }else{
    //     cout << "The strings are NOT identical.\n";
    // }

    // #13
    // char control[100];
    // char test[100];
    // cout << "Enter a string: ";
    // cin.getline(control,100);
    // cout << "Enter another string: ";
    // cin.getline(test,100);
    // bool sameStr=true;
    // for(int i=0;(test[i]!='\0');i++){
    //     if(strcmp(control,test)!=0){
    //         sameStr=false;
    //         break;
    //     }
    // }
    // if(sameStr){
    //     cout << "The strings are identical.\n";
    // }else{
    //     cout << "The strings are NOT identical.\n";
    // }

    // #14
    // char strA[100];
    // char strB[100];
    // cout << "Enter a string: ";
    // cin.getline(strA,100);
    // cout << "Enter another string: ";
    // cin.getline(strB,100);
    // int strA_Length=0;
    // int strB_Length=0;
    // for(int i=0;(strA[i]!='\0');i++){
    //     strA_Length++;
    // }
    // for(int i=0;(strB[i]!='\0');i++){
    //     strB_Length++;
    // }
    // if(strA_Length>strB_Length){
    //     cout << "String A is longer than string B.";
    // }else if(strA_Length<strB_Length){
    //     cout << "String B is longer than string A.";
    // }else{
    //     cout << "Both strings have the same length.";
    // }

    // #15
    // char psw[100];
    // cout << "Enter password: ";
    // cin.getline(psw,100);
    // int pswLen=0;
    // for(int i=0;(psw[i]!='\0');i++){
    //     pswLen++;
    //     if(pswLen==8){
    //         break;
    //     }
    // }
    // if(pswLen>=8){
    //     cout << "The password has at least 8 characters";
    // }else{
    //     cout << "The password has less than 8 characters";
    // }

    // #16
    // char str[100];
    // cout << "Enter something: ";
    // cin.getline(str,100);
    // int totalChar=0;
    // int totalVow=0;
    // int totalDig=0;
    // int totalSpa=0;
    // for(int i=0;(str[i]!='\0');i++){
    //     totalChar++;
    //     if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    //         totalVow++;
    //     }else if(str[i]>='0' && str[i]<='9'){
    //         totalDig++;
    //     }else if(str[i]==' '){
    //         totalSpa++;
    //     }
    // }
    // cout << "\nTotal characters: " << totalChar;
    // cout << "\nTotal vowels: " << totalVow;
    // cout << "\nTotal digits: " << totalDig;
    // cout << "\nTotal space: " << totalSpa;

    // #17
    // char psw[100];
    // cout << "Enter password: ";
    // cin.getline(psw,100);
    // int pswLen=0;
    // int digitCount=0;
    // for(int i=0;(psw[i]!='\0');i++){
    //     pswLen++;
    //     if(psw[i]>='0' && psw[i]<='9'){
    //         digitCount++;
    //     }
    // }
    // if(pswLen>=8 && digitCount>=1){
    //     cout << "The password has at least 8 characters and at least 1 digit";
    // }else{
    //     cout << "The password doesn't has at least 8 characters and at least 1 digit";
    // }

    // #18
    // char str[100];
    // cout << "Enter a string: ";
    // cin.getline(str,100);
    // int upCount=0;
    // int lowCount=0;
    // for(int i=0;(str[i]!='\0');i++){
    //     if(str[i]>='A' && str[i]<='Z'){
    //         upCount++;
    //     }else if(str[i]>='a' && str[i]<='z'){
    //         lowCount++;
    //     }
    //     if(upCount>=1 && lowCount>=1){
    //         cout << "The string contain both uppercase and lowercase letters.";
    //         break;
    //     }
    // }
    // if(upCount<1 || lowCount<1){
    //     cout << "The string DOESN'T contain both uppercase and lowercase letters.";
    // }

    // #19
    // char str[100];
    // cout << "Enter a string: ";
    // cin.getline(str,100);
    // int wordCount=0;
    // bool inWord=false;
    // for(int i=0;(str[i]!='\0');i++){
    //     if(str[i]!=' '){
    //         if(!inWord){
    //             wordCount++;
    //             inWord=true;
    //         }
    //     }else{
    //         inWord=false;
    //     }
    // }
    // cout << "Total word(s): " << wordCount;

    // #20
    // char str[100];
    // cout << "Enter a string: ";
    // cin.getline(str,100);
    // int charLen=0;
    // for(int i=0;(str[i]!='\0');i++){
    //     charLen++;
    // }
    // for(int i=charLen-1;i>=0;i--){
    //     cout << str[i];
    // }

    return 0;
}