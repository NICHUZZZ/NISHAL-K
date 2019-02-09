#include <stdio.h>

int main(void) {
  int choice,source,destination,total_distance,amount;
  
  printf("1:AUTO\n2:MINI\n3:MICRO\n4:SEDAN\n");
  printf("Enter Your Choice Of Vehicle\n");
  scanf("%d",&choice);
  printf("Enter Source\n");
  scanf("%d",&source);
  printf("Enter Destination\n");
  scanf("%d",&destination);
  total_distance=destination-source;

    if(choice==1)
    {
      printf("Per KM=5\n");
      amount=total_distance*5;
    }
    else if(choice==2)
    {
      printf("Per KM=8\n");
      amount=total_distance*8;
    }
    else if(choice==3)
    {
      printf("Per KM=10\n");
      amount=total_distance*10;
    }
    else if(choice==4)
    {
      printf("Per KM=15\n");
      amount=total_distance*15;
    }
    else
    {
      printf("No Vehicle Available\n");
    }
 
  if(source<0 && destination<0)
  {
    printf("INVALID INPUT");
  }
  else
  {
  printf("\nINVOICE\n");
  printf("TOTAL DISTANCE=%dKMS\n",total_distance);
  printf("SOURCE=%d\n",source);
  printf("DESTINATION=%d\n",destination);
  printf("Total Amount is=%d\n",amount);
  }
  
  
  

  return 0;
}
