
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a[30],i,j,p,k;
  clrscr();
  printf("\nEnter number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        p=a[i];
        a[i]=a[j];
        a[j]=p;
      }
    }
  }
  printf("\nEnter k value");
  scanf("%d",&k);
  printf("%d",a[k]);
}
