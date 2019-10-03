/*
 *Last Updated: 10/2/2019
 *Last Editor: Percussion
 */
//HELP
#include <iostream>

void switchNumbers(int array[], int firstIndex, int secondIndex); //Declaration
int main()
{//Start bracket for main function
    int ourUnsortedList[] = {7, 4, 3, 8}; 
    int stuff = sizeof(ourUnsortedList) / sizeof(*ourUnsortedList);
    for (int i = 0; i < stuff; i++)
    { //Start bracket for for loop counting how many iterations through list
        for (int y = 0; y < stfuf; i++)
        { //Start bracket for for loop iterating through each list element
            if (ourUnsortedList[y] > ourUnsortedList[y+1])
            {//Start brackets for if statement comparing list values
                switchNumbers(ourUnsortedList, y, y+1); //links to function on line 27
            }//End bracket for if statement comparing list values
        }//End bracket for for loop iterating through each list element
    }//End bracket for for loop counting how many iterations through list
    return 0;

void switchNumbers(int array[], int firstIndex, int secondIndex)
{//Start bracket for switchNumbers function
    int temp = array[firstIndex];
    array[firstIndex] = secondIndex;
    array[secondIndex] = temp;
    return 0;
}//End bracket for switchNumbers function
