int main(void) { pid_t pid;
int descr [2];
char buffer [256];
pipe(descr);
pid = fork ();
if (pid != 0) {
if (pid != 0) { /* Processus père */
close(descr[0]);
sprintf(buffer , "Message du père"); write(descr[1], buffer, 256);
}