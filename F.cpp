#include <stdio.h>
#include <string.h>


int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    getchar();

    char s1[n+1];
    char s2[m+1];

    gets(s1);
    gets(s2);

    int prefix=1,suffix=1;

    for(int i=0;i<n;i++){
       if(s1[i]!=s2[i]){
        prefix=0;
       }

       if(s1[n-1-i]!=s2[m-1-i]){
        suffix=0;
       }
    }

    
    if(prefix==1 && suffix==1){
        printf("0\n");
    }
    else if(prefix==1 && suffix==0){
        printf("1\n");
    }
    else if(prefix==0 && suffix==1){
        printf("2\n");
    }
    else{
        printf("3\n");
    }

    return 0;
}