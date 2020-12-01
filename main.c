#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <inttypes.h>



void task1(char *str){

char* p=strtok(str," ");

while(p!=NULL){
    printf("%s",p);
    p=strtok(NULL," ");
    if (p!=NULL && strcmp(".",p)!=0){
        printf(" ");
    }
}

}



char* task2(char* str){
char* str1;
char* last;
last=(char*)malloc(sizeof(char)*256);
str1=(char*)malloc(sizeof(char)*256);

strcpy(str1,str);
//printf("\n help    %s \n",str);
char *p=strtok(str," .");
while (p!=NULL){
    last=p;
    p=strtok(NULL," .");
    //printf("%s\n",last);
}

char *q=strtok(str1," .");



while (q!=NULL){
    if (strcmp(q,last)!=0){
            printf("%s ",q);
    }
    //printf("%s   ",last);

    q=strtok(NULL," .");
}
return last;

}


void task3(char* str,char *last){
unsigned long long l_cur,i;
int flag;


//char* last=&str[l-1];


char *p=strtok(str," .");
while (p!=NULL){
    l_cur=strlen(p);
    flag=0;
    if (strcmp(last,p)!=0){
    for (i=1;i<l_cur;i++){
        if(p[0]==p[i])
            flag=1;
    }

    if (flag)
        printf("%s ",p);


}
p=strtok(NULL," .");
}
}





int main()
{
    //task1();
    char *s,*s1,*s2;
    s=(char*)malloc(sizeof(char)*256);
    s1=(char*)malloc(sizeof(char)*256);
    s2=(char*)malloc(sizeof(char)*256);
    printf("vvedite stroku\n");
    gets(s);
    strcpy(s1,s);
    strcpy(s2,s);
    printf("\n stroka bez lishnich probelov\n");
    task1(s);
    printf("\n slova ne sovpadayushie s poslednym\n");
    char* last=task2(s1);
    printf("\n slova u kotoryh ptrvaya bukva vstrechaetsa v slove bolche odnogo raza(zadanie3)\n");
    task3(s2,last);
    return 0;
}
