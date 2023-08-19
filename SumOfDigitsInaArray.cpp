#include<iostream>
using namespace std;


int getSum(int *arr , int size){

    if(size==0){
        return 0 ;
    }
    if (size==1){
        return arr[0];

    }


    int remainingPart = getSum(arr+1  , size-1);
    int sum =  arr[0] + remainingPart;
    return sum;

}

int main(){
    int arr[5] = {3,2,5 ,16 ,6};
    int size = 5;
    int sum = getSum(arr,size);

    cout << "Sum is " << sum << endl;
    return 0 ;

}




