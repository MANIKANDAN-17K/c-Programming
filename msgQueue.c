#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>  
 
struct msgBuffer{
    long msgType;
    char msgText[100];
};

int main(){
    key_t key;
    int msgid;
    struct msgBuffer message;

    key = ftok("msgfile",65);
    if(key == -1) { perror("ftok"); exit(1);}
    msgid = msgget(key, 0666| IPC_CREAT);
    if (msgid == -1 ) { perror("msgget"); exit(1);}

    pid_t pid = fork();
    if(pid < 0) { perror("fork"); exit(1);}
    else if(pid == 0){
        if(msgrcv(msgid,&message,sizeof(message.msgText),1,0) == -1) { perror("msgrcv"); exit(1);}
        printf("child message received %s\n",message.msgText);
        if(msgctl(msgid,IPC_RMID,NULL) == -1) { perror("ftok"); exit(1);}

    }
    else{
        message.msgType = 1;
        printf(" parent Enter the message to send");
        fgets(message.msgText,sizeof(message.msgText),stdin);
        message.msgText[strcspn(message.msgText,"\n")] = 0;
        if(msgsnd(msgid,&message,sizeof(message.msgText),0) == -1) { perror("ftok"); exit(1);}
        printf("parent message send");
    }
    return 0;
}
