//The continue statement skips some lines of code inside the loop and continues with the next iteration.
#include<stdio.h>
int main (){

int x;
for (x=1;x<=10;x++){
    if(x==4)
        continue;
    printf(" %d ",x);

}
    printf("\nUsed continue to skip printing the value 4 \n");
    return 0;
}
