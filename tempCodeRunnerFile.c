#include<stdio.h>
struct person
{
char emer[50];
char mbiemer[50];
int mosha;
};

int personi_vjeter(struct person p[]);
int i,n;
main()
{

printf("Jepni numrin e personave: ");
scanf("%d",&n);
struct person p[n];
for(i=1;i<=n;i++)
{
printf("\n\nJepni te dhenat e personit nr.%d:\n\n",i);
printf("Jepni emrin e personit nr.%d: ",i);
scanf("%d",&p[i].emer);
printf("Jepni mbiemrin e personit nr.%d: ",i);
scanf("%d",&p[i].mbiemer);
printf("Jepni moshen e personit nr.%d: ",i);
scanf("%d",&p[i].emer);
int c=personi_vjeter(p);
printf("\nPersoni me i vjeter ka kete moshe: ");
printf("%d",c);


}


}


int personi_vjeter(struct person p[])
{
int i,j;
int max=p[1].mosha;
for(j=i+1;j<=n;i++)
{
if(p[j].mosha>max)
max=p[j].mosha;
}
}