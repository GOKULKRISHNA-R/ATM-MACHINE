#include<stdio.h>
void withdrawal()
{
    int balance,amount=50000,amt;
    printf ("enter the amount to be taken ");
    scanf("%d",&amt);
    amount=amount-amt ;
    printf("here is your cash \n your account balance  = %d", amount);   
            
}
void balanceamt()
{
    int amount=50000;
    printf("the balance amount is %d",amount);
}
void changepass()
{
    int password=2003,new_pass , pass1 ;
    printf(" \t enter your password - ");
    scanf("%d",&pass1);
    if(password==pass1)
    {
        printf("enter the new password  ");
        printf(" \n ");
        scanf("%d",&new_pass);
        password=new_pass;
        printf("your password is succes fully changed");
    }
}
void debit()  
{
    int totamt,amount=50000,add_amt;
    printf("enter the amount to be deposited \n");
    scanf ("%d",&add_amt);
	totamt=amount+add_amt;
    printf("the total amount in your account is %d",totamt);	
}                      
int main ()
{
    int password=2003 , amount=50000,pass,wish,process,amt,balance,new_pass,add_amt,totamt;
    printf(" \t WELCOME \n");
    again:
    printf("\nif you need to continue the process enter --> 1 \n if you need to discontinue the process enter --> 2");
    printf("\n");
    scanf(" %d",&wish);
    if (wish!=1)
        goto end ;
    if (wish=1)
    {
        printf(" \t enter your password - ");
        scanf("%d",&pass);
        if(password==pass)
        {
            printf(" password is correct \n hii gokul");
            printf("\n");
            printf(" press \n 1 for cash withdrawal \n 2 for checking amunt balance \n 3 for changing password \n 4 for depositing money \n");
            scanf("%d",&process);
            switch (process)
            {
            case 1 : withdrawal();
            break;
            case 2 : balanceamt();
            break;
            case 3 : changepass();
            break;
            case 4 : debit();
            break;
            default:printf("enter the above values only");
            break;
            }
        } 
        else 
        {
            printf("enter correct password");
        }
    }
    goto again;
    end:
    printf("\nthank you for visiting vist us again \n \n");
    printf("---------transaction completed--------- \n \n");
return 0 ;
} 