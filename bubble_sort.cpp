#include<bits/stdc++.h>

using namespace std;

void bubblesort(int *input, int size)
{
    for(int i = 0; i< size;i++){
        for(int j =0; j<size - i -1;j++){      
            if(input[j] > input[j+1])
                swap(input[j], input[j+1]);
        }
    }
}



int main(){
    int arr[] = {2,13,4,1,3,6,28};
    int size = 7;
    bubblesort(arr,size);

    for(auto i:arr){
        cout<<i<<endl;
    }

    return 0;
}