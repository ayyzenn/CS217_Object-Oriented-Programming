#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

// function prototypes
void readDataFromFile(ifstream &, char[], string[],string[]);
void calculateScores(char[], string[], double[]);
void calculateGrades(double[], char[]);

//global declarationd for constants
const int MAX_ANSWERS = 20;
const int MAX_STUDENTS = 150;
const double MAX_MARKS = 40.0;

//global declarationd for variables
int studentsCounter = 0;

// main fumction
int main()
{
    
    //varables declaration
    ifstream inFile;
    string fileName;
    char testAnswers[MAX_ANSWERS];
    string studentID[MAX_STUDENTS];
    string studentAnswers[MAX_STUDENTS];
    double studentScores[MAX_STUDENTS];
    char studentGrades[MAX_STUDENTS];
    
    cout<<"Enter the file name: ";
    cin>>fileName;
    
    inFile.open(fileName);
    if (!inFile)
    {
        cout<<"The file is not found."<<endl;
        system("pause");
        return 1;
    }
    readDataFromFile(inFile, testAnswers,studentID,studentAnswers);
    calculateScores(testAnswers, studentAnswers,studentScores);
    calculateGrades(studentScores, studentGrades);
    cout<<"\nResult of the students: "<<endl;
    cout<<"Student_ID\tStudent_Answer\t\tScore\tGrade"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;

    for (int student = 0; student < studentsCounter; student++)
    {
        cout<<studentID[student] <<"\t"
            <<studentAnswers[student] <<"\t"
            <<studentScores[student] <<"\t"
            <<studentGrades[student] << endl;
    }
    inFile.close();
    return 0;
}

void readDataFromFile(ifstream &inFile, char testAnswers[], string studentID[],string studentAnswers[])
{
    char ch;
    int index = 0;
    for (int i = 0; i < MAX_ANSWERS; i++)
    {
        inFile >> testAnswers[i];
    }
    
    inFile >> studentID[index];
    while (inFile)
    {
        studentsCounter++;
        
        inFile.get(ch);

        getline(inFile, studentAnswers[index]);
        index++;
        inFile >> studentID[index];
    }
}
void calculateScores(char testAnswers[], string studentAnswers[], double studentScores[])
{
    string answers;
    double sum;

    for (int i = 0; i < studentsCounter; i++)
    {
        answers = studentAnswers[i];
        sum = 0;
        for (int j = 0; j < answers.length(); j++)
        {
            if (answers[j] == ' ')
            {
                sum+=0;
            }
            else if (answers[j] == testAnswers[j])
            {
                sum+=2;
            }
            else
            {
                sum-=1;
            }
        }
        studentScores[i] = sum; 
    }
    
}

void calculateGrades(double studentScores[], char studentGrades[])
{
    double percentage;
    for (int i = 0; i < studentsCounter; i++)
    {
        percentage = (studentScores[i]/MAX_MARKS) * 100;
        if ((percentage >= 90) && (percentage <= 100))
        {
            studentGrades[i] ='A';
        }
        else if ((percentage >= 80) && (percentage <= 89.99))
        {
            studentGrades[i] ='B';
        }
        else if ((percentage >= 70) && (percentage <= 79.99))
        {
            studentGrades[i] ='C';
        }
        else if ((percentage >= 60) && (percentage <= 69.99))
        {
            studentGrades[i] ='D';
        }
        else if ((percentage >= 0) && (percentage <= 59.99))
        {
            studentGrades[i] ='F';
        }
    }
    
}