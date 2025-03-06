#include<stdio.h>
int main(){
int num_users,i,id,total_amt=0;
printf("enter the number of users: ");
scanf("%d",&num_users);
int amounts[num_users];
printf("enter the amount transferred by each user:\n");
for(i=0;i<num_users;i++){
    printf("user %d: ",i+1);
    scanf("%d",&amounts[i]);
    total_amt+=amounts[i];
}
printf("Total amount transferred to single user: %d\n",total_amt);
return 0;
}
