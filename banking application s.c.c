#include<Stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct bankdet
{
	char name[100];
	char accno[17];
	float balance;
};
struct bankdet a;
void creat_acc();
void deposit(float d_amount);
void cash_withdraw(float withdraw_amount);
float balance_enquiry();

int main()
{
	int f=1,c;
	float amt;
	while(f==1)
	{
		printf("\n 1- create account \n 2-deposit \n 3- cash withdraw \n 4-balance enquiry\n");
		scanf("%d",&c);
		
	
	switch(c)
	{
		case 1:
			{
				creat_acc();
				break;
			}
			case 2:
				{
					printf("enter amount to deposit");
					scanf("%f",&amt);
					deposit(amt);
					break;
				}
			case 3:
				{
					printf("enter amount to withdraw");
					scanf("%f",&amt);
					cash_withdraw(amt);
					break;
				}
			case 4:
				{
					printf("your balance is %f",balance_enquiry());
					break;
				}
			default:
				{
					f=0;
					break;
				}
		
	}}
}
void creat_acc()
{
	char d;
	scanf("%c",&d);
	printf("enter your name:");
	gets(a.name);
	printf("\nenter acc no(15):");
	scanf("%s",a.accno);
}
void deposit(float d_amount)
{
	a.balance =a.balance+d_amount;
	printf("amount successfully deposited \n");
}
void cash_withdraw(float withdraw_amount)
{
	if(withdraw_amount<=a.balance)
	{
		a.balance = a.balance-withdraw_amount;
		printf("amount successfully withdrawn \n");
	}
}
float balance_enquiry()
{
	return a.balance;
}

