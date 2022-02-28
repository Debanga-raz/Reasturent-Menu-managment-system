#include<stdio.h>
main()
{
	int a,temp1,temp2,temp3,temp4;
	printf("\t\t****MENU****\n");
	printf("For Veg option type '1' else type any number:\t\n");
	scanf("%d",&temp1);
	if(temp1!=1)
	{
	printf("\tItem\t\tPrice\n");
	printf("1.Tandoori Chicken\t250\n");
	printf("2.Chicken Tikka\t\t140\n");
	printf("3.Chicken Momo\t\t100\n");
	printf("4.Chicken Roll\t\t120\n");
	printf("5.Roasted chicken\t150\n");
	}
	else
	{
	printf("\tItem\t\tPrice\tItem Code\n");
	printf("1.Tandoori panner\t150\t362\n");
	printf("2.Paneer Tikka\t\t100\t452\n");
	printf("3.Paneer Momo\t\t70\t678\n");
	printf("4.Paneer Roll\t\t100\t927\n");
	printf("5.Veg Momo\t\t60\t825\n");
	}
	printf("Enter Your selection\n(Note:Enter only one dish at a time):");
	scanf("%d",&a);
	printf("Quantity :\t");
	scanf("%d",&temp3);
	
	if(temp1==1)
	{
			switch(a)
	{
		case 1:
				printf("\tItem\t\tPrice\n");
	            printf("1.Tandoori panner\t150\n");
	            temp2=150*temp3;
	            break;
	            
	    case 2:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("2.Paneer Tikka\t\t100\n");
	            temp2=100*temp3;
	            break;
	    
	    case 3:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("3.Paneer Momo\t\t70\n");
	            temp2=70*temp3;
	            break;
	            
	    case 4:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("4.Paneer Roll\t\t100\n");
	            temp2=100*temp3;
	            break;
	    case 5:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("5.Veg Momo\t\t60\n");
	            temp2=60*temp3;
	            break;	    
	}
	}
	else
	{
	
	 	switch(a)
	{
		case 1:
				printf("\tItem\t\tPrice\n");
	            printf("1.Tandoori Chicken\t250\n");
	            temp2=250*temp3;
	            break;
	            
	    case 2:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("2.Chicken Tikka\t\t140\n");
	            temp2=140*temp3;
	            break;
	    
	    case 3:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("3.Chicken Momo\t\t100\n");
	            temp2=100*temp3;
	            break;
	            
	    case 4:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("4.Chicken Roll\t\t120\n");
	            temp2=120*temp3;
	            break;
	    case 5:
	    	   	printf("\tItem\t\tPrice\n");
	            printf("5.Roasted chicken\t150\n");
	            temp2=150*temp3;
	            break;	    
	}
}
printf("BILL:\t%d",temp2);
}