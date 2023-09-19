#include <stdio.h>
int main(){
int x,y;
scanf("%d %d",&x,&y);
if(x>0 && y>0){
printf("Given coordinates are lies in first quadrant");
}
else if(x<0 && y>0){
printf("Given coordinates are lies in second quadrant");}
else if(x<0 && y<0){
printf("Given coordinates are lies in third quadrant");}
else {
printf("Given coordinates are lies in four quadrant");}
return 0;}
