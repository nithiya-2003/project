#include<Stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct parlor
{
	char name[100];
	
	float amount;
};
struct parlor i;
void orders();
void flavours();
void topping();
float total_bill();
int main()
{
	printf("**************************welcome to scoopfull of happiness**************************\n");
	int f=1,c;
	printf("enter your name....");
	gets(i.name);
	float amt;
	while(f==1)
	{
		printf("\n1- ordering\n2-to bill\n3-to see available flovours\n4-to see available topping\n");
		scanf("%d",&c);
		
		switch (c)
		{
			case 1:
				{
					orders();
					break;
				}
			
			case 2:
				{
					printf("===========================================================");
					printf(" \nthank you for visiting our shop %s\n",i.name);
					printf("enjoy your day with....wonderful flovours of chillness....");
					printf("\n***************************************************************************\n");
					printf("\nyour total bill is %f",total_bill());
					printf("\n***************************************************************************\n");
					printf("\nvisit again.....%s\n",i.name);
					printf("===========================================================");
					f=0;
					
					break;
				}
			case 3:
				{
					printf("\n1.vannila\n2.strawberry \n3.mango\n4.chocolate\n5.raspberry \n6.butterscotch\n7.pista\n8.blackcurrent\n these are the available flavours .........");
					break;
				}
			case 4:
				{
					printf("\n1sprinckles .\n2.tosted coconut flakes \n3.fruits\n4.tosted nuts\n5.almonds \n6.nutella syrup\n7.cherries\n8.chocolate syrup \n9.wafers\n10.caramel syrup\n11.chocochips\n these are the available toppings");
					
					break;
					}
			default :
				{
					f=0;
					break;
				}
		}
	}
}
void orders()
{
	
	flavours();
	topping();

	 
	
}
void flavours()
{
	printf("======================================================icecream menu===================================================\n");
	int l=1,f;

	while(l==1)
	{
	printf("\n1.vannila\n2.strawberry \n3.mango\n4.chocolate\n5.raspberry \n6.butterscotch\n7.pista\n8.blackcurrent");
	scanf("\n%d",&f);
	switch(f)
	{
		case 1:
			{
				printf("vannila    $5.00 per scoop");
				float f_amount=5.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				i.amount=i.amount+p;
				printf("========================================================");
				printf("\nyou order vannila %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 2:
			{
				printf("strawberry  $7.00 per scoop");
				float f_amount=7.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order strawberry %d scoop  has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;	
			}
		case 3:
			{
				printf(" mango $10.00 per scoop");
				float f_amount=10.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order mango %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 4:
			{
				printf("chocolate   $15.00 per scoop");
				float f_amount=15.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order chocolat %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 5:
			{
				printf("raspberry  $17.00 per scoop");
				float f_amount=17.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order raspberry %d scoophas been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 6:
			{
				printf("butterscotch $20.00 per scoop");
				float f_amount=20.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order butterscotch %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 7:
			{
				printf("pista  $22.00 per scoop");
				float f_amount=22.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order pista %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		case 8:
			{
				printf("blackcurrent  $25.00 per scoop");
				float f_amount=25.00;
				int s;
				printf("\nno of scoops:");
				scanf("%d",&s);
				float p=s*f_amount;
				
				i.amount+=p;
				printf("========================================================");
				printf("\nyou order blackcurrent  %d scoop has been successfully placed\n",s);
				printf("========================================================");
				l=0;
				break;
			}
		default :
			{
				l=0;
				break;
			}
	}
}

}
float total_bill()
{
	
	return i.amount;
}
void topping()
{
	printf("=================================================toppings menu===========================================\n");
	int o=1,t;
	
	while(o==1)
	{
	printf("\n1sprinckles .\n2.tosted coconut flakes \n3.fruits\n4.tosted nuts\n5.almonds \n6.nutella syrup\n7.cherries\n8.chocolate syrup \n9.wafers\n10.caramel syrup\n11.chocochips\n any no to exit");
	scanf("%d",&t);
	switch(t)
	{
		case 1:
			{
				printf("sprinckles   $5.00 ");
				float t_amount=5.00;
				
				i.amount=i.amount+t_amount;
				printf("========================================================");
				printf("\nyour sprinckles toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 2:
			{
				printf("tosted coconut flakes$7.00 ");
				float t_amount=7.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour tosted coconut flakes toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;	
			}
		case 3:
			{
				printf(" fruits $5.00");
				float t_amount=5.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour  fruits toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 4:
			{
				printf("tosted nuts $10.00 ");
				float t_amount=10.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour tosted nuts toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 5:
			{
				printf("almonds $17.00 ");
				float t_amount=17.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour almonds toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 6:
			{
				printf("nutella syrup$15.00 ");
				float t_amount=15.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour nutella syrup toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 7:
			{
				printf("cherries  $15.00 ");
				float t_amount=15.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour cherries toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;			}
		case 8:
			{
				printf("chocolate syrup  $15.00 ");
				float t_amount=15.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour chocolate syrup toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 9:
			{
				printf("wafers $20.00 ");
				float t_amount=20.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour  wafers toppings has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 10:
			{
				printf("caramel syrup  $25.00 ");
				float t_amount=25.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour caramel syrup topping has been successfully added\n");
				printf("========================================================");
				o=0;
				break;
			}
		case 11:
			{
			printf("choco chips $13.00 ");
				float t_amount=13.00;
				i.amount+=t_amount;
				printf("========================================================");
				printf("\nyour choco chips topping has been successfully added\n");
				printf("========================================================");
				o=0;
				break;	
			}
		default :
			{
				o=0;
				break;
			}
	}
}}

		
	

