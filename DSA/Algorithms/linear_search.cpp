#include <iostream>
using namespace std;

int linearSearch(int array[],int size){
    for (int i = 0; i < size; i++)
       {
        if(array[i]==99){
            return i;
        }
        
    }

    return -1;
}    


int main() {
    int arr[]={1,23,43,5,466,8,32,43};
    int size=sizeof(arr)/sizeof(int);
    
    
    cout << linearSearch(arr,8);

    return 0;
}



