//Recursion 
#include<iostream>
using namespace std;
int fact(int num){
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}
int fibSeries(int num , int a, int b){
    if(num==0){
        return 0;
    }
    int sum = a+b;
    cout<<a<<" ";
    return fibSeries(num-1, b,sum);
}
int digitSum(int num){
    if(num==0){
        return 0;
    }
    return (num % 10) + digitSum(num/10);
}
int revNum(int num){
    if(num<0){
        return 0;
    }
    
}
int main(){
    int num;
    cout<<"Enter the Number "<<endl;
    cin>>num;
    // cout<<"Factorial: "<<fact(num)<<endl;
    // fibSeries(num , 0, 1);
    cout<<"Sum of Digits: "<<digitSum(num);
}