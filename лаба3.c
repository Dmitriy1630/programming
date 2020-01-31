#include <stdio.h>
#include <math.h>


int main(){
    float a[100];int n,i;
    float sum1=0;
    float sum2=0;
    printf("Enter length of array n =");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d] = ",i);scanf("%f",& a[i]);
    }
    
    for (i=0;i<n;i++){
        if ((i)%2==1){
            sum1=sum1+a[i];
        }
    }
  
    printf("sum1 = %f \n",sum1);
    float first,last;
    int firstIndex=0;
    int lastIndex=0;
    for (i=0;i<n;i++){
        if(a[i]<0){
            first=a[i];firstIndex=i;break;
        }
    }
    for (i=n-1;i>firstIndex;i--){
        if(a[i]<0){
            last=a[i];lastIndex=i;break;
        }
    }
    if (firstIndex!=lastIndex){
        for (i=firstIndex;i<=lastIndex;i++){
            sum2=sum2+a[i];
        }
     printf("sum2 = %f \n",sum2);
    }
    else{
        printf("Indexes are equal or there are not  negative elements.");
    }
    
    
    
    return 0;
}

