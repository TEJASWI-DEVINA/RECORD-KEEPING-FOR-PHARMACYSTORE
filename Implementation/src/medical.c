#include"medical.h"
#include<stdio.h>
#include<string.h>

   void menutab()
   {
    int choice,number=0,c;
   do{
   printf("Enter\n1 - Purchase Medicine\n2 - Enter Information about a Medicine\n3 - Stock of Medicine in Store\n4 - Medicine Information\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change Quantity of Medicine\n");
   scanf("%d",&choice);

   while(!(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7))
   {
       printf("\nInvalid option");
       printf("\nEnter valid option");
       scanf("%d",&choice);
    }
   switch(choice)
   {
      case 1:
    {
     Purchase(number+1);
     break;
    }
      case 2:
    {
     EnterInfo(number+1);
     break;
    }
      case 3:
      {
       Stock(number+1);
       break;
      }
      case 4:
      {
       KnowInfo(number+1);
       break;
      }
      case 5:
      {
       ++number;
       Add(number,b);
       break;
      }
      case 6:
      {
       Delete(number+1);
       break;
      }
      case 7:
      {
       ChangeDetails(number+1);
       break;
      }
   }
     printf("To Continue with other Options Enter 1 Else any other number\n");
     scanf("%d",&c);
   }while(c==1);


 }


void Add(int number,struct Med b[])
 {
  char name[100];
  printf("Enter Medicine Id\n");
  scanf("%d",&(b[number].id));
  //fflush(stdin);
  printf("Enter Medicine Name\n");
  //fflush(stdin);
  scanf("%s",name);
  strcpy(b[number].medicneName,name);
  printf("Enter Company Name\n");
  //fflush(stdin);
  scanf("%s",b[number].Company);
  printf("Enter Manufactured Date\n");
  //fflush(stdin);
  gets(b[number].Mfg_Date);
  printf("Enter Expiry Date\n");
  //fflush(stdin);
  gets(b[number].Exp_Date);
  printf("Enter Quantity\n");
  //fflush(stdin);
  scanf("%d",&(b[number].quantity));
  printf("Enter Price\n");
  //fflush(stdin);
  scanf("%d",&(b[number].price));
  strcpy(b[number].info,"");
  printf("Medicine with id %d Added Successfully\n",b[number].id);
  
 }
void ChangeDetails(int number)
 {
  int id,quantity,choice,c,i;
  printf("Enter id to change Details\n");
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(b[i].id==id && b[i].id!=0)
   {
    do
    {
        printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit");
        scanf("%d",&choice);
        if(choice==1)
        {
         int quantity;
         printf("Enter Quantity to be changed\n");
         //fflush(stdin);
         scanf("%d",&quantity);
         b[i].quantity=quantity;
         printf("Quantity changed Successfully\n");
        }
        if(choice==2)
        {
         int price;

         printf("Enter Price to be changed\n");
         //fflush(stdin);
         scanf("%d",&price);
         b[i].price=price;
         printf("Price changed Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("Enter Name to be changed\n");
        // fflush(stdin);
         gets(name);
         strcpy(b[i].medicneName,name);
         printf("Medicine Name changed Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("Enter company to be changed\n");
        // fflush(stdin);
         gets(company);
         strcpy(b[i].Company,company);
         printf("Company changed Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("Enter Manufacturing date to be changed\n");
         //fflush(stdin);
         gets(mfg);
         strcpy(b[i].Mfg_Date,mfg);
         printf("Manufacturing Date changed Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("Enter Expiry date to be changed\n");
         //fflush(stdin);
         gets(exp);
         strcpy(b[i].Exp_Date,exp);
         printf("Expiry Date changed Successfully\n");
        }
        if(choice==7)
        {
         char info[100];
         printf("Enter Info to be changed(Less than 100 Characters)\n");
        // fflush(stdin);
         gets(info);
         strcpy(b[i].info,info);
         printf("Info changed Successfully\n");
        }
        if(choice<=0 || choice>7)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Change other Details Else any other number\n");
       // fflush(stdin);
        scanf("%d",&c);
    }while(c==1);

    break;
   }
  }}
int Delete(int number)
 {
  int id,i,flag=0,num;
  printf("Enter Id to be deleted\n");
  //fflush(stdin);
  scanf("%d",&id);
   id=0;
  for(i=0;i<number;i++)
  {
   if(b[i].id==id)
   {
    flag=1;
    b[i].id=0;
    b[i].price=0;
    b[i].quantity=0;
    strcpy(b[i].medicneName,"");
    strcpy(b[i].Company,"");
    strcpy(b[i].Mfg_Date,"");
    strcpy(b[i].Exp_Date,"");
    strcpy(b[i].info,"");
    //num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Medicine with %d is Deleted Successfully\n",id);
     return 1;
  }
   return 0;
 }

 int EnterInfo(int number)
 {
  int i,flag=0,c;
  char name[100],info[100];
  printf("Enter Name of the medicine you want to Review or include Info\n");
  //fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
   if(strcmp(b[i].medicneName,name)==0)
   {
    flag=1;
    printf("These are the details of Medicine\n");
    printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",b[i].medicneName,b[i].price,b[i].quantity,b[i].Company,b[i].Mfg_Date,b[i].Exp_Date);
    if(strcmp(b[i].info,"")!=0)
    {
     printf("Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number\n");
    // fflush(stdin);
     scanf("%d",&c);
    }
    else
    {
     printf("Enter review(less than 100 Characters)\n");
    // fflush(stdin);
     gets(b[i].info);
    }
    if(c==1)
    {
     printf("Enter review(less than 100 Characters)\n");
    // fflush(stdin);
     gets(info);
     strcat(b[i].info,"; ");
     strcat(b[i].info,info);
     return 1;
    }

   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
   return 0;
  }
 }
void KnowInfo(int number){
   int i,flag=0;
  char name[100];
  printf("Enter Name of the medicine you want to see Review and Info\n");
 // fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
   if(strcmp(b[i].medicneName,name)==0)
   {
    flag=1;
    printf("These are the details of Medicine\n");
    printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",b[i].medicneName,b[i].price,b[i].quantity,b[i].Company,b[i].Mfg_Date,b[i].Exp_Date);
    if(strcmp(b[i].info,"")!=0)
    {
     printf("Review or Info=%s\n",b[i].info);
    }
    else
    {
     printf("Review or Info=Not Available\n");
    }
   }
  }
  if(flag==0)
  {
   printf("Entered Name Not Found\n");
  }
 }
 void Purchase(int number)
 {
  int id,check,i,quantity,flag=0;
  //char name[100];
  printf("Enter 1 if you know ID else any other number to enter Name of Medicine\n");
  //fflush(stdin);
  scanf("%d",&check);
  if(check==1)
  {
   printf("Enter Id to purchase Medicine\n");
  // fflush(stdin);
   scanf("%d",&id);
   for(i=0;i<number;i++)
   {
    if(b[i].id==id)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",b[i].medicneName,b[i].price,b[i].quantity,b[i].Company,b[i].Mfg_Date,b[i].Exp_Date);
      if(strcmp(b[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",b[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",b[i].medicneName);
     //fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(b[i].quantity>quantity)
      {
        b[i].quantity-=quantity;
       printf("Total Price to be paid=%d\n",quantity*b[i].price);

      }
      else{
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Id Not Found\n");
   }
  }
  else
  {
     char name[100];
   printf("Enter Name to search and Purchase\n");
  // fflush(stdin);
   gets(name);
   for(i=0;i<number;i++)
   {
    if(strcmp(b[i].medicneName,name)==0)
    {
     flag=1;
     int c;
     printf("These are the details of Medicine\n");
     printf("Name=%s\nPrice=%d\nAvailable Quantity=%d\nCompany=%s\nMfg Date=%s\nExp Date=%s\n",b[i].medicneName,b[i].price,b[i].quantity,b[i].Company,b[i].Mfg_Date,b[i].Exp_Date);
      if(strcmp(b[i].info,"")==0)
      {
       printf("Medicine Review/Info=Not Available\n");
      }
      else
      {
       printf("Medicine Review/Info=%s\n",b[i].info);
      }
     printf("Do you want to purchase %s \nIf Yes Enter 1 else any other number\n",b[i].medicneName);
     //fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter Quantity to Purchase\n");
      scanf("%d",&quantity);
      if(b[i].quantity>quantity)
      {
       printf("Total Price to be paid=%d\n",quantity*b[i].price);
      }
      else{
       printf("Please Enter quantity below Available Quantity\n");
      }
     }
     break;
    }
   }
   if(flag==0)
   {
    printf("Entered Name Not Found\n");
   }
  }
 }
int Stock(int number){
  //int i;
  if(number!=0)
  {
      printf("All Available Items are\n");
   for(int i=0;i<number;i++)
   {
    if(b[i].id!=0){
    printf("Id=%d\nName=%s\t\tPrice=%d\tAvailable Quantity=%d\nCompany=%s\t\tMfg Date=%s\tExp Date=%s\n",b[i].id,b[i].medicneName,b[i].price,b[i].quantity,b[i].Company,b[i].Mfg_Date,b[i].Exp_Date);
    if(strcmp(b[i].info,"")!=0)
    {
     printf("Review or Info=%s\n",b[i].info);
    }
    else
    {
     printf("Review or Info=Not Available\n");
    }
      }
      return 1;
   }
  }
  else{
   printf("No Items or Medicines Available\n");
   return 0;
  }
 }
