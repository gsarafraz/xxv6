#include "types.h"
#include "user.h"


    int i, pid[30],j;
    int a[30],b[30];


    int midTurnAround=0, midWait = 0;

    int resultTurnaround2=0, resultTurnaround1=0, resultTurnaround0=0;
    int resultWait2=0, resultWait1=0, resultWait0=0;





int main ( int argc, char *argv[] )
{

for(i = 0; i < 30; i++) {
    pid[i] = fork();

    if (pid[i] == 0) {
        
        if(i%3 == 0){
            nice();
	    
	}
        else if(i % 3 == 1){
            nice();
            nice();
	
	}

        for(j = 0; j < 500; j++)
           // printf(1,"cid : %d\n",getpid());
        exit();
    }
}
       int k=0;
        for(k=0;k<30;k++){
       		 getPerformanceData(&a[k], &b[k]);
	}


       	for(k=0 ;k<30;k++){
		midTurnAround+=b[k];
		midWait+=a[k];
		if(k%3 == 1){
			resultTurnaround0+=b[k];
			resultWait0+=a[k];
		}
		else if(k%3 == 0){
			resultTurnaround1+=b[k];
			resultWait1+=a[k];
		}
		else{
			resultTurnaround2+=b[k];
			resultWait2+=a[k];
		}
	}

        printf(1,"Average of turnaround time: %d\n",midTurnAround);
        printf(1,"Average of waiting time: %d\n",midWait);

        printf(1,"Average of turnaround time queue2: %d \n",resultTurnaround2);
        printf(1," Average of turnaround time queue1: %d\n ",resultTurnaround1);
        printf(1," Average of turnaround time queue0: %d\n",resultTurnaround0);

        printf(1,"Average of waiting time queue2: %d\n",resultWait2);
        printf(1,"Average of waiting time queue1: %d\n",resultWait1);
        printf(1,"Average of waiting time queue0: %d\n",resultWait0);

        
        


}



