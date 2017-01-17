
#include "types.h"
#include "user.h"


int main ( int argc, char *argv[] )
{
    int i=0,j=0, pid;
    printf(1,"father pid is %d ",getpid());
        sleep(100);
    pid = fork();


    if (pid == 0) {
        for(j = 0; j < 50; j++){
                    printf(1,"process %d is printing for the %d time.\n",getpid(),j+1);
                    }
        exit();
    }
    else{
    
    for(i = 0; i < 50; i++){
                    printf(1,"process %d is printing for the %d time.\n",getpid(),i+1);
                    }
        
        }

wait();
return 0;

}

