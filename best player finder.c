#include<stdio.h>
#include<math.h>
struct cricketer{
      char name[50];
      int run[5];
    };
int main()
{
    struct cricketer shakib,Tamim,Mushfiq,Mashrafi,Mustafiz;
    int i;
    printf("Enter the runs of shakib ");
    double total=0,T=0;
    for(i=0;i<5;i++){
        scanf("%d",&shakib .run[i]);
        total = total + shakib .run[i];
    }
    total = total/5;
    for(i=0;i<5;i++){
        T = T + (total-shakib .run[i])*(total-shakib .run[i]);
    }
    T = sqrt(T/2);

    printf("Enter the runs of Mushfiq");
    total = 0;
    double T2=0;
    for(i=0;i<5;i++){
        scanf("%d",&Mushfiq.run[i]);
        total = total + Mushfiq.run[i];
    }
    total = total/5;
    for(i=0;i<5;i++){
        T2 = T2 + (total-Mushfiq.run[i])*(total-Mushfiq.run[i]);
    }
    T2 = sqrt(T2/2);


    printf("Enter the runs of Tamim");
    double T3=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Tamim.run[i]);
        total = total + Tamim.run[i];
    }
    total = total/5;
    for(i=0;i<5;i++){
        T3 = T3 + (total-Tamim.run[i])*(total-Tamim.run[i]);
    }
    T3 = sqrt(T3/2);

    printf("Enter the runs of Mashrafi");
    double T4=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Mashrafi.run[i]);
        total = total + Mashrafi.run[i];
    }
    total = total/5;
    for(i=0;i<5;i++){
        T4 = T4 + (total-Mashrafi.run[i])*(total-Mashrafi.run[i]);
    }
    T4 = sqrt(T4/2);

    printf("Enter the runs of Mustafiz");
    double T5=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Mustafiz.run[i]);
        total = total + Mustafiz.run[i];
    }
    total = total/5;
    for(i=0;i<5;i++){
        T5 = T5 + (total-Mustafiz.run[i])*(total-Mustafiz.run[i]);
    }
    T5 = sqrt(T5/2);

    double k=T;
    double run[5]={T,T2,T3,T4,T5};
    for(i=1;i<=4;i++)
    {
        if(k<run[i]) k=run[i];
    }

    if(k==T) printf("shakib  is a best Player\n");
    else if(k==T2) printf("Mushfiq is a best Player\n");
    else if(k==T3) printf("Tamim is a best Player\n");
    else if(k==T4) printf("Mashrafi is a best Player\n");
    else if(k==T5) printf("Mustafiz is a best Player\n");

    return 0;
}
