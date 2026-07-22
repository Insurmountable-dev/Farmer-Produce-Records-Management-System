#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>


// Data

// Number Of Farmers
#define SIZE 6

int farmerNumbers[SIZE] = {101, 102, 103, 104, 105, 106};

// Farmers
char farmerNames[SIZE][50] = {
    "Mwangi Kamau",
    "Wanjiku Njeri",
    "Peter Maina",
    "Akinyi Otieno",
    "Mutiso Musyoka",
    "Chebet Kiptoo"
};



// Produce Types

char produceTypes[SIZE][20] = {
    "Milk",
    "Coffee",
    "Potatoes",
    "Maize",
    "Milk",
    "Vegetables"
};

int quantities[SIZE] = {120, 85, 300, 250, 150, 95};

float pricesPerUnit[SIZE] = {55.0, 120.0, 40.0, 65.0, 55.0, 80.0};



// Payment Status

char paymentStatus[SIZE][10] = {
    "Pending",
    "Paid",
    "Pending",
    "Pending",
    "Paid",
    "Pending"
};


// Function Prototypes

void displayFarmers();


// Main Program

int main () {

// Variables
    bool isTrue = true;
    int choice = 0;
    bool validChoice = false;
    int userChoice = 0;


    do{

        printf("\n===== FARMERS PRODUCE MANAGEMENT SYSTEM =====\n");
        printf("\n1.Display Farmer Records\n");
        printf("\n5.Exit\n");


        // Verify The Choice
        while(!validChoice) {

            printf("\nWhat Would You Like To Do Today ? ");
            userChoice = scanf("%d",&choice);


            if(userChoice == 1){

                if(choice > 0  && choice <= 5) {
                    validChoice = true; //Valid User Input

                }else{
                    
                    printf("\nInvalid Range Should Be  Between 1 and 5.......\n");
                }
                

            }else{

                printf("\nInvalid Input Kindly! Insert A Number.......\n");

                    //Clearing Buffer
                while(getchar() != '\n'); // Removes Bad Input

            }



        };



      //DECIDING WHICH OPTION TO RUN BASED ON USERS CHOICE

        switch(choice) {
            case 1:
                printf("\nFetching Data Offline\n");
                Sleep(900);
                displayFarmers();
                break;

            case 5:
                 isTrue = false;
                 break;

        }


        validChoice = false;


    }while(isTrue);


    return 0;
}





// Function Components


// display Farmers
void displayFarmers(){

    for(int i = 0; i < SIZE; i++) {

        printf("\nFarmer Number : %d\n", farmerNumbers[i]);
        printf("Farmer Name   : %s\n", farmerNames[i]);
        printf("Produce Type  : %s\n", produceTypes[i]);
        printf("Quantity      : %d\n", quantities[i]);
        printf("Price/Unit    : %d\n", pricesPerUnit[i]);
        printf("Payment Status: %s\n", paymentStatus[i]);
        printf("--------------------------------\n");

        Sleep(900);//Delay
    }
    

};
