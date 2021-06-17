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


int min(int a[],int n)
{
int s;
s=a[0];
for(int i=0;i<n;i++)
 {
  if(a[i]<l)
     s=a[i];
  }

return s;
}

int mode(int a[],int n)
{int x,l=0;
 int ar[],br[];
  for(int i=0;i<n;i++)
  {x=ar[i];
    for(int j=i+1 j<n;j++)
     {if(x==ar[j])
        l++;
      x=ar[i];
      l=br[i];
  }
  }
   int s=br[0],n;
  for(i=0;i<n;i++)
     {if(s<br[i])
        s=br[i];
        n=i
     }
     return ar[n];
}
  }
