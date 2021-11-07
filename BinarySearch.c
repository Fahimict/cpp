#include <stdio.h>
int main()
{
  int n,a[100],low,high,mid,i,item;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  scanf("%d",&item);
  low=0;
  high=n-1;
  while(low<=high)
  {
      mid=(low+high)/2;
      if(a[mid]==item){
        printf("%d is found at %d\n",item,mid+1);
        break;
      }

      else if(item>a[mid])
        low=mid+1;
      else
        high=mid-1;
  }
    if(low>high)
        printf("%d is not found\n",item);
  return 0;
}

