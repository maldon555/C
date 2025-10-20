#include <stdio.h>
#include <stdbool.h>
int main(){
int choices0=0;
int choices1=0;
float value=0.0f;
float currency=0.0f;

while(true){

printf("[hello and welcome in Currency programm]\nWe have three types of currencies to convert:\n");
printf("1.Dinar:\n2.Dollar:\n3.Euro:\n#####or choice 0 to [EXIT]#####\nChoice one of them please:");
scanf("%d",&choices0);
if(choices0 == 1 ){
if(choices0==0){
    break;
}
    printf("Please enter the value you want to convert:");
    scanf("%f",&value);
    if(value==0){
        break;
    }
    
    printf("Select the currency you want to convert\n1.Dollar:\n2.Euro: ");
    scanf("%d",&choices1);
    if(choices1==1){
        currency=value * 0.1840;
        printf("your %.2f  Dinars is Convert to $%.2f Dollars.",value,currency);
    }
    else if(choices1==2){
        currency=value * 0.1580;
        printf("your %.2f Dinars is Convert to €%.2f",value,currency);
    }
    else if(choices1==0){
        break;
    }
    else{
        printf("wrong input 1");
    }

}
else if(choices0==2){
    printf("Please enter the value you want to convert:");
    scanf("%f",&value);

    printf("Select the currency you want to convert\n1.Dinar:\n2.Euro: ");
    scanf("%d",&choices1);
    if(choices1==1){
        currency=value/ 0.1840;
        printf("your $%.2f Dollars is Convert to %.2f Dinars ",value,currency);
    }
    else if(choices1==2){
        currency= value*0.94;
        printf("your $%.2f Dollars is Convert to €%.2f ",value,currency);
    }
    else if(choices1==0){
        break;
    }
    else{
        printf("wrong input 2");
    }

}
else if(choices0==3){
    printf("Please enter the value you want to convert:");
    scanf("%f",&value);

    printf("Select the currency you want to convert\n1.Dinar:\n2.Dollar: ");
    scanf("%d",&choices1);
    if(choices1==1){
        currency=value/ 0.1580;
        printf("your €%.2f Euros is Convert to %.2f Dinars ",value,currency);
    }
    else if(choices1==2){

        currency=value/0.94;
        printf("your €%.2f Euros is Convert to $%.2f Dollars ",value,currency);
    }
    else if(choices1==0){
        break;
    }
    else{
        printf("wrong input 3");
    }

}
else if(choices0==0){
    break;
}
else{
printf("wrong choice");
}
if(choices0==0||choices1==0||value==0)
break;
}
printf("Good bye!");

    return 0;
}
//100!