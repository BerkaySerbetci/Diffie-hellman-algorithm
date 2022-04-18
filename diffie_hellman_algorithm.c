#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int p,g,a,b,x,y,ka,kb;
    /*
    In this program p and g variables means public key
    This program we think Alice and Bob select private key  Alice's private key is a Bob' private key is b
    x and y means key generated
    ka and kb  is generated key secret

    */
    printf("Hello Diffie-Hellman Algorithm\n");
    printf("Please enter the public key P\n");
    scanf("%d",&p);
    printf("Please enter the public key G\n");
    scanf("%d",&g);
    printf("Please enter the Alice's private key \n");
    scanf("%d",&a);
    printf("Please enter the Bob's private key \n");
    scanf("%d",&b);

    x=(int)pow(g,a)%p;
    y=(int)pow(g,b)%p;

    ka=(int)pow(y,a)%p;
    kb=(int)pow(x,b)%p;
    printf("Alice's secret key is :%d\n",ka);
    printf("Bob's secret key is :%d\n",kb);
    if(ka==kb){
        printf("Users now have a symmetric secret key to encrypt");
    }
    else{
        printf("Secret key is not symmetric");
    }

    return 0;
}
