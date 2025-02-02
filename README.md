# FILE-MANAGEMENT-TOOL

**COMPANY NAME** : CODETECH IT SOLUTIONS

**NAME** : FARHAN MIR

**INTERN ID** : CT08JFI

**DOMAIN NAME** : C++

**BATCH DURATION** : JANUARY 5th,2025 to FEBUARY 5th,2025

**MENTOR NAME** : NEELA SANTHOSH

**TASK DESCRITION** :  This task is about working with file handling in C++ using basic input and output operations. I used the `<iostream>` and `<fstream>` libraries to read, write, and append data to a text file, which helps store information even after the program stops running. The `<string>` library is also included so I can handle user input properly. To write and test the program, I used a C++ compiler like GCC (with MinGW on Windows) and an IDE like VS Code to make the process easier. The program interacts with a text file called `example.txt`, allowing me to write new content, read stored data, or add more data without deleting the existing content.  

The program works through a simple menu where I can choose what I want to do. If I select writing, it opens `example.txt` in a way that overwrites the old content, so it starts fresh. If I choose reading, it fetches the data and displays it line by line on the screen. If I select appending, it opens the file in append mode so the new data is added at the end without removing anything. I also made sure the program checks if the file opens successfully before trying to read or write, so it doesn't crash if something goes wrong.  

One of the important things I handled was user input. Since `cin` doesn’t handle spaces properly when reading strings, I used `getline(cin, data)` to capture full lines. I also used `cin.ignore()` to clear the input buffer, so the program doesn’t skip input when switching from number choices to text input. The program keeps running in a loop until I choose to exit, which makes it easier to perform multiple actions without restarting it.  

The output depends on the choice I make. If I write data, it confirms that `example.txt` has been updated. When I read from the file, the console displays whatever is stored inside. If I append data, the program ensures it gets added without affecting previous content. This whole process helped me understand how file handling works in C++. It’s a useful skill for creating logs, saving user preferences, and working with data storage. I referred to websites like GeeksforGeeks and W3Schools to understand file handling better and get some examples. By doing this task, I learned how to work with files in C++, handle user input efficiently, and structure a program that interacts with stored data in a simple but effective way.
