#include <stdio.h>
int main(){
int temp;
scanf("%d",&temp);
if(temp<0){
printf("weather is very cold.");}
else if(0<temp && temp<10)
{printf("Very cold weather.");
}
else if(10<temp && temp<20){
printf("Cold weather");}
else if(20<temp && temp<30){
printf("Normal temperature");}

else if(30<temp && temp<40){
printf("Its hot");}
else {
printf("its very hot");}



return 0;}
