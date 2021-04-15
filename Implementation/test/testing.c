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
  TEST_ASSERT_EQUAL(1,  DeleteMedicineStore(1));

  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
void test_stock(void)
{
  TEST_ASSERT_EQUAL(0, StockOfMedicine(0));

  //TEST_ASSERT_EQUAL(0, div(10, 0));
}
void test_enterinfo(void)
{
  TEST_ASSERT_EQUAL(1,EnterInfoAboutMedicine(1));
  //TEST_ASSERT_EQUAL(0, div(10, 0));
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  int a;
  char username[15];
    char password[12];


    printf("Enter your username:\t");
    scanf("%s",&username);

    printf("Enter your password:\t");
    scanf("%s",&password);

    if(strcmp(username,"medical_store")==0){
        if(strcmp(password,"password")==0){

        printf("\nWelcome.Login Success!");
   int i,j;
   for(i=0;i<100;i++)
   {
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].info,"");
   }

   m[0].id=1;
   m[0].price=120;
   m[0].quantity=30;
   strcpy(m[0].Mfg_Date,"23-04-2016");
   strcpy(m[0].Exp_Date,"24-04-2020");
   strcpy(m[0].medicneName,"Paracetmol");
   strcpy(m[0].Company,"ABCD");
   strcpy(m[0].info,"Good Medicine for Fever");
   menu();
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
