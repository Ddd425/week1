#include"ch14.h"
int main()
{
	char *shm,*s;
	int shmid;
	if((shmid=shmget(758,SHMSZ,IPC_CREAT|0666))<0)
		err_exit("shmget failed!\n");
	if((shm=shmat(shmid,NULL,0))==(char *)-1)
		err_exit("shmat!\n");
	for(s=shm;*s!='\0';s++)
		putchar(*s);
	putchar('\n');
	exit(0);
}
