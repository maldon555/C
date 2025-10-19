#include <stdio.h>
#include <string.h>
int main(){//Shop I Guess!🤔
char name[30]="";
float price=0.0f;
int quantity=0;
printf("enter the name of product:  ");
fgets(name,sizeof(name),stdin); //scanf("%s",&name);هذا تمام بس بندير الاخر لأنه أعقد
name[strlen(name)-1]='\0';//if we ganna do this method we have to #include <string.h>

printf("how much you need in this product:  ");
scanf("%f",&price);

printf("enter the quantity of the product");
scanf("%d",&quantity);


printf("you bought %d",quantity);
printf(" %ss\n",name);

price*=quantity;
printf("and the price is $%.2f\nthak you for your visit.🤗\n",price);






    return 0;
}/*for(int i=0;i>=price;i++){
printf("%s\n",name);
printf("%f\n",price);
printf("%d\n",quantity);
}fgets(name,sizeof(name),stdin);

getchar();
for(int i=0;i=quantity;i++){
    price+=price;
}
    
*/