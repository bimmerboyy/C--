/* Program unosi niz proizvoljne dimenzije i nalazi najveci element */
#include <iostream.h>
/* Moguce je vratiti pokazivac na dinamicki alocirani niz jer se on
alocira na hip-u i taj prostor je rezervisan i posle zavrsetka rada
funkcije */
int* CreateIntArray(int n)
{int *a= new int[n];
return a;
}
/* Nije moguce vratiti pokazivac na lokalni niz jer se on alocira na steku
i taj prostor nije rezervisan posle zavrsetka rada funkcije */
int* Create10ElementIntArray()
{
int a[10];
return a;
}
main()
{
int n;
int* a;
int i, max;
cout<<"Unesi dimenziju niza : ";
cin>>n;
/* Alociramo memoriju unutar funkcije pozivom funkcije malloc */
a = CreateIntArray(n);

/* Nadalje a koristimo kao obican niz */
for (i = 0; i<n; i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];

}
/* Nalazimo maksimum */
max = a[0];
for (i = 1; i<n; i++)
if (a[i] > max)
max = a[i];
cout<<"Najveci element je "<< max<<endl;
/* Duzni smo da rucno alociranu memoriju rucno i oslobodimo 
*/
delete a;
}
