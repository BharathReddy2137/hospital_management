# 🏥 Hospital Management System (C Project)

---

## 📄 Abstract  

The **Hospital Management System** is a simple command-line based program written in the C programming language.  
It is designed to store and manage hospital patient information efficiently.  
The system allows users to add patient details, search patient data, update existing records, delete patients, and view all stored data in a structured manner.

All information is saved in a persistent binary file (`hospital.dat`), ensuring records remain stored even after closing the program.  
This project demonstrates key C concepts including **file handling, structures, arrays, validation, loops, and menu-driven design** — making it ideal for learning and small-scale clinic usage.

---

## 🚨 Features

### ✔ Patient Records Management

- Patient ID
- Full Name
- Age
- Gender
- Disease / Case Type
- Doctor Assigned
- Contact Number

### ✔ System Functionalities

| Function | Description |
|----------|------------|
| ➕ Add Patient | Add a new patient record |
| 📋 View All Patients | Display all saved patient data in table format |
| 🔍 Search Patient | Search by patient ID |
| ✏ Update Patient | Change disease/contact/doctor information |
| ❌ Delete Record | Remove patient from system |
| 💾 Permanent Storage | Uses binary file `hospital.dat` |
| ❗ Error Handling | Validates incorrect input |
| 🖥 Terminal Based | Works in command line interface (CLI) |

---

## 🛠 System Requirements

### 1️⃣ Hardware Requirements

- Any system capable of running C programs
- Minimum **4 MB RAM**
- Minimal disk space (for file storage)

### 2️⃣ Software Requirements

- Operating System: Windows / Linux / macOS
- C Compiler:  
  - GCC  
  - Clang  
  - MinGW  
  - Turbo C / MSVC (optional)

### 3️⃣ Code Requirements

**Language:** C  
**Standards Supported:** `C89`, `C99`, `C11`

Required Libraries:


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


### 4 📂 File Handling Specifications

Uses binary file: hospital.dat
File auto-creates if not found
Supports:
Read
Write
Modify
Delete operations

##⚙️ Functional Workflow

Program displays a main menu with available operations
User selects an action
System processes the input and performs the requested task
Loop continues until the user selects Exit

##▶ How to Compile & Run
gcc hospital.c -o hospital.exe
hospital.exe

##🗂 Output Screens (Replace with actual screenshots after running)

🔹 Main Menu
🔹 Add Patient
🔹 View Patient Records
🔹 Search Patient
🔹 Update Patient
🔹 Delete Patient
🔹 Exit Program

###📁 Program Structure
Hospital Management System
│
├── hospital.c        → Main source code
├── hospital.dat      → Generated database file
└── README.md         → Project documentation

##🎯 Learning Objectives

This project helps students understand:
1.Structures in C
2.Binary file handling
3.CRUD operations
4.Menu-driven programming
5.Input validation
6.Real-world application logic

##📌 About This Project

This project is intended for:
School / college practicals
Mini-project submission
C programming practice
Beginners learning file handling

##1st person details


<img width="461" height="430" alt="Screenshot 2025-11-25 100130" src="https://github.com/user-attachments/assets/fdb9d526-b8e8-41b8-8a3e-5864ad225bc3" />


##view all patients


<img width="602" height="375" alt="Screenshot 2025-11-25 100231" src="https://github.com/user-attachments/assets/d29d5944-e494-4b08-9a4e-d3200b682d43" />


##search for patient


<img width="512" height="438" alt="Screenshot 2025-11-25 100255" src="https://github.com/user-attachments/assets/ba47c8c7-f878-4d23-90e8-c87af797e77b" />


##delete a patient 

<img width="478" height="292" alt="Screenshot 2025-11-25 100344" src="https://github.com/user-attachments/assets/387bb8d1-a9ee-4490-8137-5249adad8a58" />


##exit

<img width="531" height="235" alt="Screenshot 2025-11-25 100404" src="https://github.com/user-attachments/assets/d5237b85-a406-4706-b6d6-24f889585894" />
