# Cplusplus
# CS 210 Portfolio Reflection – Corner Grocer Item Tracking Program

## Summarize the project and what problem it was solving.

For this project, I created a C++ program for the Corner Grocer that tracks how frequently grocery items are purchased throughout the day. The program reads data from an input file, counts how many times each item appears, and allows the user to view that information through a menu system. The program can search for individual items, display all item frequencies, generate a histogram, and create a backup file containing the frequency data. This project solved the problem of manually tracking inventory trends by automating the process and presenting the information in a way that is easy to read and understand.

## What did you do particularly well?

One thing I did particularly well was organizing the program using object-oriented programming principles. I created a separate GroceryTracker class to handle the data processing while keeping the main program focused on user interaction. I also used a map to efficiently store and retrieve item frequencies, which simplified the overall design. Additionally, I included comments, meaningful variable names, and a menu-driven interface to make the program easier to understand and use.

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

If I were continuing to develop this program, I would improve the input validation and error handling. While the program already handles basic user interaction, additional validation could prevent unexpected input and improve the user experience. I could also add features such as sorting items by frequency or allowing users to update inventory data without modifying the input file directly. These improvements would make the program more flexible, secure, and user friendly.

## Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

The most challenging part of this project was working with file input and output while ensuring the data was correctly stored and processed. I also spent time troubleshooting issues related to file locations and making sure the program could successfully read the input file. I overcame these challenges by reviewing zyBooks materials, testing the program in small sections, and using Visual Studio's debugging tools to identify problems. Moving forward, I will continue using zyBooks, course resources, instructor feedback, and online C++ documentation as part of my support network.

## What skills from this project will be particularly transferable to other projects or course work?

Several skills from this project will transfer directly to future coursework and professional projects. These include object-oriented programming, working with classes, reading and writing files, using maps to organize data, implementing menus, and debugging programs. I also gained more experience designing programs that separate responsibilities into different functions and files, which is an important software development practice.

## How did you make this program maintainable, readable, and adaptable?

I made this program maintainable and readable by separating the code into multiple files, using a class structure, and giving variables and functions descriptive names. I included comments throughout the program to explain important sections of code and followed consistent formatting practices. The design is adaptable because new menu options or additional tracking features could be added without requiring major changes to the existing structure. This organization makes the program easier to maintain and expand in the future.
