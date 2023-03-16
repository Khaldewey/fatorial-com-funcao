#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
int i,f=1;
for(i=1;i<=n;i++){
    f=f*i;
    if(i<n){
    printf("%d x",i);
    }else{
    printf("%d\n",i);
    };
}


return f;
}
int main()
{int x,y;
printf("Digite o int n que vc deseja fatorar\n");
scanf("%d",&x);
y=fatorial(x);
printf("%d\n",y);

    return 0;
}
