#include <stdlib.h>
#include <stdio.h>

main(){
    int num;
    for(num=1000;num<=2000;num++){
        if(num%7==0){
            printf("%d\n",num);
        }
    }
return 0;
}