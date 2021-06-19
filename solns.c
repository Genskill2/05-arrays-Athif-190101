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

int mode(int ar[],int n)
  {int x,br[20],cr[20],y,l=0,x1;
  for(int i=0;i<n;i++)
    {if(x!=ar[i])
     {
    x=ar[i];
      for(int j=1;j<n;j++)
       {if(x==ar[j])
         {x=br[i];
          l++;
         }
        }
       }
      else
       continue;
       cr[i]=l;
     }
    x1=br[0];
    for(int i=0;i<n;i++)
     {if(x1<br[i])
       x1=br[i];
     }
      
     for(int i=0;i<n;i++)
       {if(x1==br[i])
         y=cr[i];
       }
   return y;
   }

  int factor(int n,int ar[])
   {int flag=0,i,j,k=0,y=0,num,l=2;
    num=n;
    for(k=0;k<=num;k++)
     {
   for (i = 2; i <= n; ++i) 
   {   
        if (n % i == 0) 
        {
         for (j = 2; j <= i / 2; ++j) 
         {
         if (i % j == 0) 
         {
            flag = 1;
              break;
         }
     }

  if (n == 1) 
  {
    ar[k]=n;
    break;
  } 
  else 
  {
    if (flag == 0)
    {
      n=n/i;
       ar[k]=i;
       y++;
       for(l=2;l<=n;l++)
       {
       if(n%l==0)
        {n=n/l;
         k++;
         ar[k]=l;
         y++;
        }
      l=2;
    } 
 }
      else
      continue;
  }

        }
    }
   }
   return y;
   }
