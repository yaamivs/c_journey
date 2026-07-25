/*#include <stdio.h>

int main() {
    int arr[2];   // array to store the two numbers
    int sum = 0;

    // Input two numbers into the array
    printf("Enter first number: ");
    scanf("%d", &arr[0]);

    printf("Enter second number: ");
    scanf("%d", &arr[1]);

    // Sum using for loop
    for (int i = 0; i < 2; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}


//wap to search given element in the array(itterative search)
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;
    int i, found = 0;

    printf("enter key:");
    scanf("%d", &key);
    // Iterative search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element %d found at position %d", key, i + 1);
    else
        printf("Element not found");

    return 0;
}
*/

// find the middle element if an array

#include <stdio.h>
int main(){
    int key;
    int arr[]={10,20,30,40,50};
    int n=5;
    int i, mid=0;
    int high=n-1;
    int low=0;

    //asking key from user
    printf("enter key");
    scanf("%d",key);
         
    if(mid==0);



}