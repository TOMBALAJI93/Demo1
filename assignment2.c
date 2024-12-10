#include<stdio.h>
int main(){
    int a;
    printf("ENTER NO OF MENU ITEM(MAXIMUM OF 5):",a);
    scanf("%d",&a);
    char b[15];
    int c;
    char d[16];
    int e;
    char f[16];
    int g;
    char h[16];
    int i;
    char j[16];
    int k;
    switch(a)
    {
    case 5:
        printf("ENTER THE ITEM 1:");
          scanf("%s",&b);
          printf("ENTER ITS PRICE:");
          scanf("%d",&c);
    case 4:
        if(a==4){
            printf("ENTER THE ITEM 1:");
        }
        else{
        printf("ENTER THE ITEM 2:");
        }
        scanf("%s",&d);
        printf("ENTER ITS PRICE:");
          scanf("%d",&e);

    case 3:
        if(a==4){
            printf("ENTER THE ITEM 2:");
        }
        else if(a==3){
            printf("ENTER THE ITEM 1:");
        }
        else{
        printf("ENTER THE ITEM 3:");
        }
        scanf("%s",&f);
        printf("ENTER ITS PRICE:");
          scanf("%d",&g);

    case 2:
        if(a==4){
            printf("ENTER THE ITEM 3:");
        }
        else if(a==3){
            printf("ENTER THE ITEM 2:");
        }
        else{
        printf("ENTER THE ITEM 4:");
        }
        scanf("%s",&h);
        printf("ENTER ITS PRICE:");
          scanf("%d",&i);

    default:
        if(a==4){
            printf("ENTER THE ITEM 4:");
        }
        else if(a==3){
            printf("ENTER THE ITEM 3:");
        }
        else if(a==2){
            printf("ENTER THE ITEM 2:");
        }
        else{
        printf("ENTER THE ITEM 1:");
        }
        scanf("%s",&j);
        printf("ENTER ITS PRICE:");
          scanf("%d",&k);

     }

      printf("\t\t\t\t*****MENU*****");
      printf("\n\tITEM NO 1 = %s-$%d",b,c);
      printf("\n\tITEM NO 2 = %s-$%d",d,e);
      printf("\n\tITEM NO 3 = %s-$%d",f,g);
      printf("\n\tITEM NO 4 = %s-$%d",h,i);
      printf("\n\tITEM NO 5 = %s-$%d",j,k);

      int x;
      printf("\nHOW MANY ITEM DO YOU WANT FROM THE MENU? :");
      scanf("%d",&x);
      int y;
      switch(x)
      {
          case 5:
          printf("\nENTER THE ITEM NUMBER(1to5)YOU WANT TO ORDER:");
          scanf("%d",&x);
          printf("\nENTER THE QUANTITY OF THE ITEM:");
          scanf("%d",&y);
          case 4:
          printf("\nENTER THE ITEM NUMBER(1to5)YOU WANT TO ORDER:");
          scanf("%d",&x);
          printf("\nENTER THE QUANTITY OF THE ITEM:");
          scanf("%d",&y);
          case 3:
          printf("\nENTER THE ITEM NUMBER(1to5)YOU WANT TO ORDER:");
          scanf("%d",&x);
          printf("\nENTER THE QUANTITY OF THE ITEM:");
          scanf("%d",&y);
          case 2:
          printf("\nENTER THE ITEM NUMBER(1to5)YOU WANT TO ORDER:");
          scanf("%d",&x);
          printf("\nENTER THE QUANTITY OF THE ITEM:");
          scanf("%d",&y);
          default:
          printf("\nENTER THE ITEM NUMBER(1to5)YOU WANT TO ORDER:");
          scanf("%d",&x);
          printf("\nENTER THE QUANTITY OF THE ITEM:");
          scanf("%d",&y);
      }
       printf("PLEASE WAIT FOR YOUR BILL\n");

       int m=(c+e+g+i+k);
       int n=(c+e+g+i+k);
       int o=(c+e+g+i+k);
       int p=(c+e+g+i+k);
       int q=(c+e+g+i+k);

       if(x==5){
       printf("TOTAL AMOUNT:%d",m);
       }
       else if(x==4){

        printf("TOTAL AMOUNT:%d",n);
       }
        else if(x==3){

        printf("TOTAL AMOUNT:%d",o);
       }
        else if(x==2){

        printf("TOTAL AMOUNT:%d",p);
       }
       else{

        printf("TOTAL AMOUNT:%d",q);
       }



    return 0;
}
