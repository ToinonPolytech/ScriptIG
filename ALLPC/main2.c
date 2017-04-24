#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Let us create a global variable to change it in threads
int g = 0;

// The function to be executed by all threads
void *myThreadFun(void *vargp)
{
	char terminal[256] = "sh Terminal.sh \"";
  char cd[256] = "cd ";

  char cwd[1024];
  getcwd(cwd, sizeof(cwd));
  strcat(cd, cwd);
  strcat(terminal, cd);
  strcat(terminal, ";expect testScript.exp ");

    int myid = (int)vargp;

    static int s = 0;


    char tmp[3];
    sprintf(tmp,"%d",myid);

    if(myid	< 10){
    	strcat(terminal,"0");
    	strcat(terminal,tmp);
      strcat(terminal,"\"");
    }
    else{
    	strcat(terminal,tmp);
      strcat(terminal,"\"");
    }
    printf("%s\n",terminal);
    system(terminal);
}

int main()
{
    int i;
    pthread_t tid;

    // Let us create three threads
    for (i = 0; i < 15; i++)
        pthread_create(&tid, NULL, myThreadFun, (void *)i);

    pthread_exit(NULL);
    return 0;
}
