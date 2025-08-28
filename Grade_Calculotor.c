#include <stdio.h>
int main(){
    int num;
    printf("Enter your numbers: ");
    scanf("%d", &num);

    if(num>=90){
        printf("you got an A grade");
    }else if(num>=80){
        printf("You got B grade");
    }else if(num>=70){
        printf("YOu got C grade");
    }else if(num>=60){
        printf("You got D grade");
    }else if(num>=50){
        printf("You got E grade");
    }else{
        printf("You are fail");
    }
    
    
}