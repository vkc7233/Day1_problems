#include <stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b==c){
printf("the triangle is an equilateral triangle.");
}
else if(a==b || b==c|| a==c){
printf("the triangle is an Isoceles triangle.");

}
else {
printf("the triangle is an Scalene triangle.");
}
rteurn 0;
}
