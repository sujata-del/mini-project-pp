#include<stdio.h>
void Customername(){
	//This function ask the customer to enter their name
	printf("welcome to LPG gas agency\n");
	char Customername[50];
	//arrray is used here to take character input of name
	printf(" please enter your the name \n");
	gets(Customername);
	printf("Name of respected customer is :\n");
	puts(Customername);
	printf("\n");
}
 void registerednum(){
    printf("Please enter your registered number\n");
    //this function takes the input of phone number of customer
    long long int registerednum;
    scanf("%lld",&registerednum);
    printf("your registered phone number is :\n");
    printf("%lld\n",registerednum);
    printf("\n");
}
void modeofpayment(){
	printf("please select your mode of payment\n");
	//select the mode of paymment,press 1 for online and 2 for offline paymnet
	printf("press 1 for online payment\n");
	printf("press 2 for offline payment\n");
	int modeofpayment ;
	scanf("%d", &modeofpayment);
	getchar();
	printf("preferable mode of payment is :\n");
	//conditional statements are used here
	if(modeofpayment==1){
		printf("you are processiding towards online payment\n");
	}
	else if(modeofpayment==2){
		printf("you are processiding towards ofline payment\n");
	}
	else{
		printf("enter the correct number by reading above instruction carefully\n");
	}
	printf("\n");
}
void employeeinfo(){
	//This function is to shows the name and number of employee of LPG agency
	char empname[50];
	printf("name of employee of LPG gas agency\n");
	gets(empname);
	puts(empname);
	long long int mobileno;
	printf("Give the mobile number of the employee\n");
	scanf("%lld",&mobileno);
	getchar();
	printf("Mobile number of your employee is %lld\n",mobileno);
	printf("\n");
}
void addressofcustomer(){
	//This function takes input of address of customer 
	char location[100];
	int streetno;
   // char is used to take character input name and int for integer value of street number
	printf("please confirm your registered address by entering your address\n");
	gets(location);
	printf("your current address is \n");
	puts(location);
	printf("Street number of customer\n");
	scanf("%d",&streetno);
	printf("%d",streetno);	
	getchar();
	printf("\n");
}
void cylinderlimit(){
	//This function take the input of number of cylinders customer buyed before booking current cylinder
	printf("Enter the number of cylinders you ordered in the current year\n");
	int cylinderno;
	scanf("%d",&cylinderno);
	getchar();
	if(cylinderno<15){
		//Customer can't have more than 15 cylinders in a year
		printf("you can go with procedure to get cylinder\n");
	}
	else{
		printf("sorry, your limit is fullfilled of getting cylinder for this year\n");
	}
	printf("\n");
}
 void verifyDAC(){
 	//This function is verify the delivary authentication code
 int DACsend;
 int DACreceive;
 printf("DAC sended to the registered phone number:\n");
 scanf("%d",&DACsend);
 printf("share DAC %d on delivery\n",DACsend);
 scanf("%d",&DACreceive);
 printf("My delivary authentication code is %d:\n",DACreceive);
 int T;
 while(T>0){
 	//while loop is used to take take repeatly input till the DAC is correctly verified
 if(DACsend==DACreceive){
 printf("The entire process till the cylinder comes home ends\n");
 break;
}
 else{
printf("please check your message again and verify the correct DAC received on registered number\n");
scanf("%d",&DACreceive);
 }
 T--;	
}
printf("\n");
}
void Rating(){
	printf("Dear customer,");
	printf("please spare a few seconds to provide your feedback which will help us to surve you better\n");
	//Please select appropriate response for the service
	printf("  If Cylinder is checked for leakage enter 'y'\n");
	printf("Otherwise enter anyother charactyer");
	char response;
	scanf("%s",&response);	
	if(response=='y'){
		printf("Thank you for checking\n");
	}
	else{
        printf("Please check your cylinder for leakage\n");
		printf("\n");
	}
	printf("please rate the service of LPG gas agency according to our service of of 5 stars\n");
	int star;
	scanf("%d",&star);
	switch (star){
		case 1:
			printf("*\n");
			printf("Thank you\n");
			break;
		case 2:
			printf("* *\n");
			printf("Thank you\n");
			break;
		case 3:
			printf("* * *\n");
			printf("Thank you\n");
			break;
		case 4:
			printf("* * * *\n");
			printf("Thank you\n");
			break;
		case 5:
			printf("* * * * *\n");
			printf("Thank you\n");
			break;
			printf("\n");	
	}
}
void offlinepay(){
	int costofcylinder=1120;
	char dayofdelivary;
	int extracharge;
	printf("Enter character s for weekened days\n");
	printf("On which day you want cylinder\n");
	scanf("%s",&dayofdelivary);
	if(dayofdelivary=='s'){
		printf("charges for weekened days is 50 Rs\n");
		extracharge=50;
	}
	else{
		printf("charges of nonweekend days is 20 Rs\n");
		extracharge=20;
	}
	printf("amount of money customer needs to pay  ");
	int pay=costofcylinder+extracharge;
	printf("%d\n",pay);
	int moneypaid;
	scanf("%d",&moneypaid);
	int count;
	while(count>0){
	if(moneypaid==pay){
		printf("Your payment is successfull, thank you so much\n");
		break;
	}
	else{

		printf("your payment is rejected\n");
		printf("Please pay correct amount\n");
		scanf("%d",&moneypaid);
		getchar();
	}
	 count--;

}
	printf("\n");
}

void bookingbywtsp(){
	//customer can book cylinder from wtsp also by typing REFILL.
	//to know the status of the gas booking send STATUS.
	printf("Enter 'REFIL' on number 7588888824  for booking\n");
	char Refil[100];
	gets(Refil);
	puts(Refil);
	printf("your cylinder is booked\n");
	char status[100];
	printf("check status by entering 'STATUS'\n");
	gets(status);
	printf("Now you can check the status of cylinder booking\n");
		printf("\n");
}
 
int main() {
	//calling each function
		Customername();
		registerednum();
    	cylinderlimit();
 	    employeeinfo();
		addressofcustomer();
	    bookingbywtsp();
	    verifyDAC();
        modeofpayment();
        offlinepay();
     	Rating();
     	return 0;
}
