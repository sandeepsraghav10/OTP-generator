// OTP generater

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        int otp;
        srand(getpid());                                 //process_id
        l1:
	otp=rand()%10001;
    
	 if(otp>=1000)
	printf("YOUR 4 DIGIT OPT NUMBER IS :%d\n",otp);
	if(otp<1000)
	{
	  goto l1;
	}
	return 0;
}
