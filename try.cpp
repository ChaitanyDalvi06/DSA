// #include <iostream>
// #include <cstring>

// // Function prototypes
// void enrollStudent(int& numOfStudents, std::string names[], int rollNos[]);
// void inputMarks(int marks[], int numSubjects);
// bool checkPass(int marks[], int numSubjects);
// void printResult(std::string name, int rollNo, int marks[], int numSubjects);
// void reExam(int marks[], int numSubjects);

// int main() {
//     const int MAX_STUDENTS = 10;
//     const int NUM_SUBJECTS = 3;

//     int numOfStudents = 0;
//     std::string names[MAX_STUDENTS];
//     int rollNos[MAX_STUDENTS];
//     int marks[MAX_STUDENTS][NUM_SUBJECTS];

//     enrollStudent(numOfStudents, names, rollNos);

//     for (int i = 0; i < numOfStudents; ++i) {
//         std::cout << "\nEnter marks for student " << names[i] << " (Roll No: " << rollNos[i] << "):" << std::endl;
//         inputMarks(marks[i], NUM_SUBJECTS);

//         if (!checkPass(marks[i], NUM_SUBJECTS)) {
//             char option;
//             std::cout << "Student " << names[i] << " (Roll No: " << rollNos[i] << ") has failed. Options:\n"
//                       << "a. Give result of other students\n"
//                       << "b. Re-exam\n"
//                       << "Enter your choice (a/b): ";
//             std::cin >> option;

//             if (option == 'a') {
//                 // Give result of other students
//                 std::cout << "Result of other students will be given.\n";
//             } else if (option == 'b') {
//                 // Re-exam
//                 reExam(marks[i], NUM_SUBJECTS);
//                 if (checkPass(marks[i], NUM_SUBJECTS)) {
//                     std::cout << "Student " << names[i] << " (Roll No: " << rollNos[i] << ") has passed after re-exam.\n";
//                 } else {
//                     std::cout << "Student " << names[i] << " (Roll No: " << rollNos[i] << ") has failed again.\n";
//                 }
//             } else {
//                 std::cout << "Invalid option. Exiting program.\n";
//                 return 1;
//             }
//         } else {
//             // Student passed all subjects
//             printResult(names[i], rollNos[i], marks[i], NUM_SUBJECTS);
//         }
//     }

//     return 0;
// }

// // Function to enroll students
// void enrollStudent(int& numOfStudents, std::string names[], int rollNos[]) {
//     std::cout << "Enter the number of students: ";
//     std::cin >> numOfStudents;

//     for (int i = 0; i < numOfStudents; ++i) {
//         std::cout << "Enter name for student " << i + 1 << ": ";
//         std::cin.ignore();
//         std::getline(std::cin, names[i]);

//         std::cout << "Enter roll number for student " << i + 1 << ": ";
//         std::cin >> rollNos[i];
//     }
// }

// // Function to input marks for a student
// void inputMarks(int marks[], int numSubjects) {
//     for (int i = 0; i < numSubjects; ++i) {
//         std::cout << "Enter marks for subject " << i + 1 << ": ";
//         std::cin >> marks[i];
//     }
// }

// // Function to check if a student has passed
// bool checkPass(int marks[], int numSubjects) {
//     for (int i = 0; i < numSubjects; ++i) {
//         if (marks[i] < 40) {
//             return false; // Student failed in at least one subject
//         }
//     }
//     return true; // Student passed all subjects
// }

// // Function to print result for a student
// void printResult(std::string name, int rollNo, int marks[], int numSubjects) {
//     std::cout << "Result for student " << name << " (Roll No: " << rollNo << "):" << std::endl;
//     for (int i = 0; i < numSubjects; ++i) {
//         std::cout << "Subject " << i + 1 << ": " << marks[i] << std::endl;
//     }
//     std::cout << "Student " << name << " (Roll No: " << rollNo << ") has passed all subjects.\n";
// }

// // Function to conduct re-exam for a failed student
// void reExam(int marks[], int numSubjects) {
//     std::cout << "Re-exam for the failed student. Enter marks for the subjects:\n";
//     inputMarks(marks, numSubjects);
// }
