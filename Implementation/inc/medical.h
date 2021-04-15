#ifndef MEDICAL_H_INCLUDED
#define MEDICAL_H_INCLUDED

void Purchase(int number);
int EnterInfo(int number);
int Stock(int number);
void KnowInfo(int number);
int Delete(int number);
void ChangeDetails(int number);
void menutab();

struct Med{
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11],info[5000];
  }b[100];
void Add(int number,struct Medicine b[]);




#endif
