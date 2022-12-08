#include "date.h"
typedef struct  
{
	char mahv[20];
	char hoten[50];
	Date ns;
	int gt; //0-nu,1-nam
	char noisinh[30];
	char lop[10];
} Hoc_vien;

void nhapHv(Hoc_vien *h);
void inHv(Hoc_vien h);
void nhapdsHv(Hoc_vien *a, int *n);
void indsHv(Hoc_vien *a,int n);
void timHvTheoMa(Hoc_vien *a,int n);
void ghidsHv(Hoc_vien *a,int n);
void docdsHv(Hoc_vien *a,int *n);
