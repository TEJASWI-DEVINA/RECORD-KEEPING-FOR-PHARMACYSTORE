#ifndef MEDICAL_H_INCLUDED
#define MEDICAL_H_INCLUDED

void PurchaseMedicine(int number);
int EnterInfoAboutMedicine(int number);
int StockOfMedicine(int number);
void KnowInfoAboutMedicine(int number);
int DeleteMedicineStore(int number);
void ChangeMedicineDetails(int number);
void menu();

struct Medicine{
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11],info[5000];
  }m[100];
void AddMedicineinStore(int number,struct Medicine m[]);




#endif