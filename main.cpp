// main.cpp - CPP Assignment 1
// Purpose: Prints assignment info and the chosen security topic with explanation

#include <iostream> // Needed for input/output operations

using namespace std; // Lets us write cout instead of std::cout

int main() {
    // 1. Print assignment and group information
    cout << "Assignment #1 - C++ Group Project" << endl;
    cout << "Group Number: 5" << endl;
    cout << "Group Members: Romandeep Singh, Sangam, Harleen Kaur" << endl << endl;

    // 2. Print security topic title
    cout << "Security Topic: Cloud Computing - Platform as a Service (PaaS)" << endl << endl;

    // 3. Print brief paragraph explanation
    cout << "Platform as a Service (PaaS) is a cloud computing model that provides developers "
         << "with a complete platform to build, run, and manage applications without having to "
         << "worry about the underlying infrastructure. The cloud provider manages servers, "
         << "storage, networking, and operating systems, allowing developers to focus on writing "
         << "and deploying code more efficiently." << endl << endl;

    // 4. End message
    cout << "This program was created and compiled inside GitHub Codespaces." << endl;
    cout << "End of demonstration." << endl;

    return 0; // End program
}
