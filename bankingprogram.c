#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(int balance);

int main() {
    
    int choice = 0;
    float balance = 0.0f;
    printf("Hello there! Welcome to your trusted ATM!\n");
    printf("1. Check your balance\n2. Make a deposit\n3. Make a withdrawal\n4. Exit\n");
    do{
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for partnering with us!!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }while(choice!=4);
    
    return 0;
}
void checkbalance(float balance){
    printf("Your current balance is : $%.2f\n",balance);
}
float deposit(){
    float amount = 0.0f;
    printf("Enter the amount you want to deposit : ");
    scanf("%f",&amount);
    if(amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n",amount);
    }
    return amount;
}
float withdraw(int balance){
    float amount = 0.0f;
    printf("Enter the amount you would like to withdraw : ");
    scanf("%f",&amount);
    if(amount>balance){
        printf("Your balance is $%.2f! Please enter a valid withdrawal amount!",balance);
        return 0.0f;
    }
    else if(amount<0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else{
        printf("$%.2f withdrawn successfully!\n",amount);
        return amount;
    }
}
