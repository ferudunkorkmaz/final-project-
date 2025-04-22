# TO DO LİST

by Ferudun Korkmaz

#### video demo: url for the youtube video:https://youtu.be/dem10eZHsdw

#### Description: # To-Do List Project

## Overview

This project is a simple command-line To-Do List manager written in the C programming language. It was developed as a final project for Harvard University's CS50x course and serves as a demonstration of my understanding of core programming concepts such as file handling, memory management, data structures, user input handling, and modular program design.

The purpose of this application is to help users keep track of their tasks in a structured and organized way. The program allows the user to add tasks, view existing tasks, and remove completed ones. It uses a plain text file to store the list of tasks persistently, ensuring that the user’s data is not lost between sessions.

## Features

### 1. *Add Tasks*
Users can easily add new tasks to their to-do list. Each task is stored as a separate line in a text file (tasks.txt) so that it can be accessed and modified later. The program prompts the user to enter the task description, which is then saved automatically.

### 2. *View Tasks*
Users can view all of their current tasks in a numbered list format. This makes it easy to see what has been added and decide what needs to be done next. If no tasks are currently in the list, the program will notify the user that their to-do list is empty.

### 3. *Remove Tasks*
Users have the ability to remove tasks by specifying the number of the task they want to delete. The program then deletes the corresponding line from the text file and updates the list accordingly. This helps users keep their to-do list clean and current.

## How It Works

When the program starts, it reads from tasks.txt and loads any existing tasks into memory. The user is then presented with a menu offering the following options:
- Add a new task
- View current tasks
- Remove a task
- Exit the program

Based on the user’s selection, the program performs the corresponding action. All tasks are stored in the tasks.txt file to ensure persistence across sessions.

The program’s logic is broken down into functions for modularity and clarity. For example, there are separate functions to handle loading tasks, writing updates to the file, adding tasks, deleting tasks, and displaying the current list.

## Files Included

- todo.c: The main source code file that contains the logic for the To-Do List program.
- tasks.txt: A plain text file used to store the user's tasks. This file is automatically updated as tasks are added or removed.
- README.md: This file, which provides documentation and context for the project.

## Concepts Used

This project demonstrates several programming concepts and CS50 topics:
- *File I/O*: Reading from and writing to text files (tasks.txt) to persist the user's task data.
- *Arrays*: Storing tasks temporarily in memory for display and manipulation.
- *Strings and User Input*: Gathering and safely handling user input.
- *Control Structures*: Implementing loops and conditionals to manage the program’s logic.
- *Functions*: Breaking down the logic into modular functions for readability and maintainability.

## Design Decisions

I chose to store tasks in a .txt file because it’s simple, human-readable, and allows for quick testing and editing outside of the program if necessary. Additionally, keeping everything in a single source file (todo.c) simplifies submission and reviewing for CS50’s grading tools.

The interface was designed to be intuitive for users who may not be familiar with command-line tools. Each menu option is clearly labeled, and users are given helpful prompts after each action.

## Limitations and Future Improvements

While the current version of the program is functional, there are several areas that could be improved in the future:

- *Task Prioritization*: Adding priority levels (e.g., high, medium, low) for each task.
- *Due Dates*: Allowing users to set deadlines or dates for tasks.
- *Sorting*: Giving users the option to sort tasks by name, priority, or date.
- *Search*: Implementing a search feature to find tasks based on keywords.
- *GUI*: Creating a graphical version using a framework like GTK or integrating it into a webpage.

TODO
