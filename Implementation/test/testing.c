#include "unity.h"
#include "medical.h"
#include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 #include<stdlib.h>




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_delete(void)
{
  TEST_ASSERT_EQUAL(1,  Delete(1));

  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
void test_stock(void)
{
  TEST_ASSERT_EQUAL(0, Stock(0));

  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
void test_enterinfo(void)
{
  TEST_ASSERT_EQUAL(1,EnterInfo(1));
  //TEST_ASSERT_EQUAL(0, div(10, 0));
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  int a;
  //char username[1000];
   //char password[10];


    printf("Enter your username:\t");
 char username[20];
    scanf("%19s",username);

    printf("Enter your password:\t");
 char password[10];
    scanf("%9s",password);

    if(strcmp(username,"teja_medshop")==0){
        if(strcmp(password,"drowssap")==0){

        printf("\nWelcome.Login Success!");
   int i,j;
   for(i=0;i<100;i++)
   {
    b[i].id=0;
    b[i].price=0;
    b[i].quantity=0;
    strcpy(b[i].Mfg_Date,"");
    strcpy(b[i].Exp_Date,"");
    strcpy(b[i].medicneName,"");
    strcpy(b[i].Company,"");
    strcpy(b[i].info,"");
   }

   b[0].id=1;
   b[0].price=120;
   b[0].quantity=30;
   strcpy(b[0].Mfg_Date,"2-3-2020");
   strcpy(b[0].Exp_Date,"4-5-2100");
   strcpy(b[0].medicneName,"Paracetmol");
   strcpy(b[0].Company,"DCBA");
   strcpy(b[0].info,"Good Medicine");
   menutab();
          }
        else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}


/* Run Test functions */
RUN_TEST(test_enterinfo);
RUN_TEST(test_stock);
  RUN_TEST(test_delete);
  //RUN_TEST(test_enterinfo);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}
