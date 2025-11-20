# Notice-Management-System
Abstract

The Notice Management System is a simple, terminal-based application developed in C for storing, organizing, and managing institutional or organizational notices efficiently. It provides essential functionalities such as adding new notices, viewing all notices, searching for notices by ID or title, updating existing notice details, and deleting notices when they are no longer required. All notices are stored persistently in a binary .dat file, ensuring the data remains available across multiple sessions.

Designed with simplicity and accessibility in mind, the system uses a clean menu-driven interface suitable for schools, colleges, offices, or beginners learning file handling in C. This project demonstrates core C programming concepts including structures, file handling, loops, and conditional statements, offering a practical solution for managing notice records in a lightweight, command-line environment.

Features of the Program

Add new notice entries with details (title, date, description, department, author, etc.)

View all stored notices in a structured list format

Search notices by Notice ID or title

Update notice details when modifications are needed

Delete notices from the database

Stores notice data persistently using a binary .dat file

Completely terminal-based (CLI) interface

Beginner-friendly and easy-to-understand program structure

Automatically generates the notice file if it does not exist

Basic error handling for invalid or missing data

Technical Requirements
1. System Requirements

Operating System: Windows / Linux / macOS

Terminal or command-line environment

Minimum RAM: 4 MB

Minimal disk space for the .dat file

2. Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Any text editor or IDE (VS Code, Dev-C++, Code::Blocks, Vim, etc.)

Optional: Make utility for Makefile builds

3. Programming Requirements

Language: C

Supported Standards: C89 / C99 / C11

Required Libraries:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

4. File Handling Requirements

Read/write access to working directory

Notices stored in a binary .dat file

Program auto-creates the notice file if not found

5. Compilation Requirements

Code must compile without errors

Recommended flag: -Wall to reveal warnings

Functional Requirements
1. User Interface

Fully terminal-based

Clear display of menu options

Accepts and validates user inputs

2. Notice Operations

Add Notice: Input and save new notice details

Search Notice: Search using Notice ID or title

View Notices: Display all notices in list form

Update Notice: Modify stored notice details

Delete Notice: Remove a notice permanently

3. Data Management

Stores all details in a persistent .dat file

Data remains valid across sessions

Handles missing or new data files gracefully

4. Program Flow

Uses a continuous menu-driven loop until Exit

Shows confirmation/error messages

Smooth navigation between program options

How to Run the Program
1. Compile the Program

Open the terminal in the project folder and run:

gcc notice_management.c -o notice_management

2. Run the Executable
Linux/macOS:
./notice_management

Windows:
notice_management.exe

3. Data File

Program auto-creates notices.dat if missing

All notice entries are saved and loaded from this file

Screenshots (Description Format)

1.Main Menu


2.Add New Notice


3.View All Notices

4.Search Notice


7.Exit
