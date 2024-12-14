# Software Engineering and Data Structures Practical Exam

This repo contains the practical exam for both the Software Engineering (SEN 201) and Data Structures (CSC 207) courses at the Faculty of Computing and Informatics at Suez Canal University. The practical exam for the Data Structures course is to build a project that utilizes any of the data structures that have been covered in the course. The practical exam for the Software Engineering course is to use a Version Control System (VCS) to manage the project and publish it on GitHub.

We have implemented two projects for the practical exam. The first project is a browser history project that allows the user to simulate his browsing journey. The second project is a student matching project that matches students with their preferred academic programs.

## Project Structure

- **Video.mkv**: A video showing the project and how to add any changes to the repository.
- **browser-history**: This folder contains C++ implementation of the browser history project
  - **main.cpp**: The entry point of the project. This file contains the main function that runs the project and the stack class implementation.
- **tansik**: This folder contains C++ implementation of the student matching algorithm
  - **main.cpp**: The entry point of the project. This file contains the main function that runs the project.
  - **PriorityQueue.cpp**: Implementation of the priority queue data structure based on a binary heap.
  - **Program.cpp**: Contains the Program class that represents an academic program.
  - **Student.cpp**: Contains the Student class that represents a student.
  - **StudentDistributionSystem.cpp**: Contains the StudentDistributionSystem class that implements the student matching algorithm.
  - **TestProgramsComparators.cpp**: Defines multiple comparators for the Program class to define how a program compares students applying to it.
  - **TestProgramsGenerator.cpp**: Generates a list of academic programs to test the student matching algorithm.
  - **TestStudentsComparators.cpp**: Defines multiple comparators for the Student class to define how a student compares programs.
  - **TestStudentsGenerator.cpp**: Generates a random list of students to test the student-matching algorithm.

## Browser History Project

This project builds an interactive environment allowing the user to simulate his or her browsing journey. The project allows the user to visit multiple websites while maintaining the history of the user visit to allow him to go backward and forward.

The project utilizes the stack data structure to maintain the user's journey and allow him to move both backward and forward through his journey. The main.cpp file contains a generic implementation of the stack class backed by a dynamic array (C++ Vector Class). The stack class exposes the following methods:

- **push(T data): void**:  Add data to the top of the stack
- **pop(): T**: Deletes the element last added to the stack and returns it to the caller
- **top(): T**: Returns to the caller the element last added to the stack without deleting it
- **size(): int**: Returns the number of elements currently in the stack
- **isEmpty(): bool**: Returns true if the stack is empty and false otherwise
- **clear(): void**: Deletes all elements in the stack

## Student Matching Project

This project creates a system similar to the *tansik* system used in Egtpy. It utilizes a priority queue data structure based on a binary heap to implement the matching algorithm.

## Team Members

- **Ibrahim Habib**
- **Yosef Ashraf**
- **Islam Alaraby**
- **Zeyad Mohamed**
- **Ahmad Shabana**
- **Mohamed Hazem**
- **Abdelrahman Mahmoud**

## Acknowledgement

- **Dr. Safa Abdelaziz**: For her lectures and clear explanation of complex data structures and algorithms.
- **Dr. Marwa Fekry**: For her lectures and clear explanation of software engineering concepts, processes, and practices.
- **Dr. Mostafa Elkhouly**: For his incredibly helpful hands-on sessions explaining Git and GitHub.
- **Dr. Fyza Elshourbagy**: For her insightful hands-on sessions implementing data structures and algorithms in C++.
