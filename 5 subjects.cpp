#include<Stdio.h>
main()
{ 
  float m,p,c,e,s,t,Avg,per;
  printf("enter maths marks =");
  scanf("%f",&m);
  printf("enter physics marks =");
  scanf("%f",&p);
  printf("enter chemistry marks =");
  scanf("%f",&c);
  printf("enter english marks  =");
  scanf("%f",&e);
  printf("enter social marks =");
  scanf("%f",&s);
  t=m+p+c+e+s;
  Avg=t/5;
  per=(t/500)*100;
  printf("total is %f\n",t);
  printf("avg is %f\n",Avg);
  printf("per is %f",per);
  
  
}
