#include<stdio.h>
int main(){
    int option,deposit,withdraw,balance,y;
    printf("Enter 0 For start:\n");
    scanf("%d",&y);
    
    int amount=10000;
    balance=amount;
    while(y==0){
        printf("Enter Your Option\n '1' For Balance Check\n '2'For Withdraw Amount\n '3' For Deposit Amount\n");
    scanf("%d",&option);
    if(option==1){
        printf("Your Bank Balance is %d\n ",balance);
    }
    else if(option==2){
        printf("Enter The Amount To Withdraw\n:");
        scanf("%d",&withdraw);
        if(withdraw>=amount-500){
            printf("Insufficent balance\n");
        }
        else {
            balance=balance-withdraw;
            printf("Your Bank Balance is %d\n",balance);
            
            }
    }
    else if(option==3){
        printf("Enter The amount To Be Cradit\n");
        balance=deposit+balance;
        printf("Your Bank Balance is:%d\n",balance);

    }
    printf("Do You Want To Continue:\n then inter 0\n");
    scanf("%d",&y);
    }

    

    return 0;
}