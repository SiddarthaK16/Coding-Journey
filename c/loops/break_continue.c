#include <stdio.h>

int main(){
    int i;

    for(i=0;i<16;i++){
        if(i==6){
           // break;            //exit the loop now if i comes to 6....
              continue;         //skip this iteration i.e loop will skip i=6 part
        }
           
        printf("%d \n",i);

    }
    return 0;
}