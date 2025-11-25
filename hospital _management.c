#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure for storing patient details
struct Patient {
    int id;
    char name[50];
    char gender[10];
    int age;
    char disease[50];
} patients[MAX];

int count = 0;

// Function prototypes
void addPatient();
void viewPatients();
void searchPatient();
void deletePatient();

int main() {
    int choice;

    do {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. View All Patients\n");
        printf("3. Search Patient\n");
        printf("4. Delete Patient\n");
        printf("5. Exit\n");
        printf("---------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: searchPatient(); break;
            case 4: deletePatient(); break;
            case 5: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// -------------------- ADD PATIENT --------------------
void addPatient() {
    printf("\n--- Add Patient ---\n");
    printf("Enter Patient ID: ");
    scanf("%d", &patients[count].id);
    getchar();

    printf("Enter Name: ");
    fgets(patients[count].name, 50, stdin);
    patients[count].name[strcspn(patients[count].name, "\n")] = 0;

    printf("Enter Gender: ");
    fgets(patients[count].gender, 10, stdin);
    patients[count].gender[strcspn(patients[count].gender, "\n")] = 0;

    printf("Enter Age: ");
    scanf("%d", &patients[count].age);
    getchar();

    printf("Enter Disease: ");
    fgets(patients[count].disease, 50, stdin);
    patients[count].disease[strcspn(patients[count].disease, "\n")] = 0;

    count++;
    printf("Patient Added Successfully!\n");
}

// -------------------- VIEW PATIENTS --------------------
void viewPatients() {
    if (count == 0) {
        printf("\nNo patient records available.\n");
        return;
    }

    printf("\n--- Patient List ---\n");
    printf("%-5s %-20s %-10s %-5s %-20s\n", "ID", "Name", "Gender", "Age", "Disease");

    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-10s %-5d %-20s\n",
            patients[i].id,
            patients[i].name,
            patients[i].gender,
            patients[i].age,
            patients[i].disease
        );
    }
}

// -------------------- SEARCH PATIENT --------------------
void searchPatient() {
    int id, found = 0;
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            printf("\nPatient Found:\n");
            printf("ID: %d\nName: %s\nGender: %s\nAge: %d\nDisease: %s\n",
                patients[i].id,
                patients[i].name,
                patients[i].gender,
                patients[i].age,
                patients[i].disease
            );
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient with ID %d not found.\n", id);
}

// -------------------- DELETE PATIENT --------------------
void deletePatient() {
    int id, found = 0;
    printf("\nEnter Patient ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            for (int j = i; j < count - 1; j++)
                patients[j] = patients[j + 1];

            count--;
            found = 1;
            printf("Patient Deleted Successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Patient not found.\n");
}