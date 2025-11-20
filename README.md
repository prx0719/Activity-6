ACTIVITY 6
AIM: 
Develop a C program to search for the location or area of a person based on
their phone number in a telephone directory. The program should utilize an
array to store the phone numbers along with their corresponding locations
or areas. Upon receiving a specific phone number as input from the user, the
program should search the array and display the corresponding location or
area if the phone number is found. If the phone number is not found, the
program should output a message indicating that the number is not in the
directory. Additionally, the program should handle invalid input and provide
appropriate error messages.

THEME:
Develop a C program to search for the location or area of a person based on
their phone number in a telephone directory. The program should utilize an
array to store the phone numbers along with their corresponding locations
or areas. Upon receiving a specific phone number as input from the user, the
program should search the array and display the corresponding location or
area if the phone number is found. If the phone number is not found, the
program should output a message indicating that the number is not in the
directory. Additionally, the program should handle invalid input and provide
appropriate error messages.


RESEARCH: 

https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
1. Storing Bus Numbers and Routes
The program first creates two arrays:
bus[] array:
 Contains a list of bus route numbers such as "2", "2A", "10", "139A", etc.


route[] array:
 Contains the detailed route description (starting stop → ending stop) for each bus number.
 Each index of the route[] array matches with the same index in the bus[] array.
 Example:
 bus[0] = "2" → route[0] = "Swargate → Shivaji Nagar".


This means every bus number has its correct route stored in the same position in the arrays.

2. Taking Input from the User
The program asks the user:
Enter the route:

The user types a bus number such as 12, 25, or 140A.
 That input is stored in a character array.

3. Comparing User Input With Stored Bus Numbers
The program uses a for loop to check the input against every value in the bus[] array.
For each bus number in the list:
It uses the strcmp() function to compare strings.


If the input matches one of the bus numbers, strcmp() returns 0, which means the strings are equal.



4. Displaying the Matching Route
When a match is found:
The program prints the route description from the route[] array at the same index.


Then it stops checking further numbers.


Example:
 If user enters 25, and "25" is stored at index 17,
 the program will print route[17], which contains that bus’s start and end stops.

5. If No Route Is Found
If the loop finishes and no match is found:
The program prints:


Route not found

This means the user entered a bus number that is not stored in the list.

Summary (short explanation)
The program stores bus numbers and their route names in two arrays.


It takes a bus number from the user.


It searches the list to find a match.


If found, it prints the corresponding start and end stops.


If not found, it shows "Route not found".




OUTPUT: 
Enter the route:139A
Bhakti Shakti Terminal → Bhekrainagar Depot (Bhakti Shakti ↔ Bhekrainagar).

=== Code Exited With Errors ===

Enter the route:2
Swargate → Shivaji Nagar

=== Code Exited With Errors ===
