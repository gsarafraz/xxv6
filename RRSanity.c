
#include "types.h"
#include "user.h"



int pids[10] ;
int p1[10];
int p2[10];


int main ( int argc, char *argv[] )
{
    int i=0,j=0;

for(i = 0; i < 10; i++) {
    pids[i] = fork();
   
   if (pids[i] == 0) {
        for(j = 0; j < 1000; j++){
            printf(1,"pid = %d, ppid = %d\n",getpid(),getppid());
         }
       exit();
    }
}

int k=0;
for(k=0 ;k<10;k++){
    getPerformanceData(&p1[k],&p2[k]);
    }
for(k=0 ;k<10;k++){
    
   printf(1,"runtime = %d, waittime = %d , turnAroundTime = %d \n",p2[k],p1[k],p2[k]+p1[k]);
        
    }
    

return 0;

}

