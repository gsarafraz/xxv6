
#include "types.h"
#include "user.h"



int pids[10] ;



int main ( int argc, char *argv[] )
{
int i=0,j=0,k=0;

for(i = 0; i < 10; i++) {
    pids[i] = fork();
   
   if (pids[i] == 0) {
        for(j = 0; j < 1000; j++){
            //printf(1,"pid = %d, ppid = %d\n",getpid(),getppid());
         }
       exit();
    }
}
for(k=0;k<10;k++)
wait();
    

return 0;

}



