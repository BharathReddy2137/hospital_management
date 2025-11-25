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

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
