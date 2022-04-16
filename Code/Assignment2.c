#include <stdio.h>

int fact(int n)
{
	int i,p=1;
	if(n==0)
	{
		p=1;
	}

	else 
	{
      for(i=0; i<n; i++)
      {
      	p = p * (n-i) ;
      }
      
  	}
  	return p ;
}

int main()
{
	float mean = 9;
	float SD = 1.5 ; 

	float p,q,n;

	q = (SD*SD)/mean ;
	p = 1-q ;
	n = mean/p ; 

    printf("%f\n", n );
    
    int i,j,k;
    int a=1,b=1,c=1;
    double x=1,y=1,sum=0;

    for(i=0; i<2; i++)
    {
    	x=1;y=1;

       a = fact(12);
       b = fact(i);
       c = fact(12-i);

       printf("%d %d %d \n",a,b,c );

       for (j = 0 ; j<=i ; j++)
       {
       	  
       	  if(j==0)
       	  {
       	  	x =1 ;     	  	
       	  }

          else
          {
       	    x = x * 0.75 ;
       	  }
       }

       for(k=i; k<12; k++)
       {

       	  y = y * 4 ;
       }

       printf("%f %f \n", x, y );

       sum = (sum + (a/(b*c)) * x)/y ; 
    }

   printf("%f\n", sum);
	return 0 ;
}






