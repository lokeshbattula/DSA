//Binary Search

#include<iostream>
using namespace std;

int binary_search(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + ( end - start )/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] >key){
            end = mid -1;
            cout<<"else if"<<endl;            
        }
        else{
            start = mid +1;
            cout<<"else :"<<endl;
        }
        mid = start + ( end - start )/2;
    }
    return -1;
}


int main(){
    int even[6] = {3, 4, 8, 24, 34, 45};
    int odd[5] = {3, 8 , 11, 14, 16};

    int eveIndex  = binary_search(even, 6 , 35);
    int oddIndex  = binary_search(odd, 5 , 14);
    
    cout<<"eveIndex:  "<<eveIndex<<endl;
    cout<<"oddindex:  "<<oddIndex<<endl;

    return 0;
}