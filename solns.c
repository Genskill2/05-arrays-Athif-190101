/* Enter your solutions in this file */
#include <stdio.h>
float average(int a[],int n)
{int av,sum;
 sum=0;
  for(int i=0;i<n;i++)
   sum+=a[i];
  av=(sum/n);
  return av;
}

int max(int a[],int n)
{
int l;
l=a[0];
for(int i=0;i<n;i++)
 {
  if(a[i]>l)
     l=a[i];
  }

return l;
}


