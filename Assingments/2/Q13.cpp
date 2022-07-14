#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
int GetData(string names[], int score[][5], int size);
void Average(int scores[][5], float avg[], char grades[], int size);
void print(string names[], int scores[][5], char grades[], float avg[],float class_avg, int size);

int main()
{
    int size =100, dataInFile = 0;
    string names[size];
    int test_scores[size][5];
    char grade[size];
    float avg[size];

    dataInFile = GetData(names,test_scores, size);
    Average(test_scores, avg, grade,dataInFile);
    float class_avg = 0;
    for (int i = 0; i < dataInFile; i++)
    {
        class_avg +=avg[i];
    }
    class_avg /=dataInFile;
    print(names,test_scores,grade,avg,class_avg,dataInFile);
    return 0;
}
int GetData(string names[], int score[][5], int size)
{
    ifstream inputfile("student.txt");
    if (!inputfile)
    {
        cout<<"Unable to open the input file."<<endl;
        exit(0);
    }
    int index=0;
    while (!inputfile.eof())
    {
        inputfile >> names[index];
        for (int j = 0; j < 5; j++)
        {
            inputfile >> score[index][j];
        }
        index++;
    }
    return index;
}
void Average(int scores[][5], float avg[], char grades[], int size)
{
    for (int i = 0; i < size; i++)
    {
        double sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum+= scores[i][j];
        }
        avg[i] = sum / 5.0;
        if (avg[i] >= 90 && avg[i] <=100)
            grades[i] = 'A';
        else if (avg[i] >= 80 && avg[i] <=90)
            grades[i] = 'B';
        else if (avg[i] >= 70 && avg[i] <=80)
            grades[i] = 'C';
        else if (avg[i] >= 60 && avg[i] <=70)
            grades[i] = 'D';
        else if (avg[i] >= 50 && avg[i] <=60)
            grades[i] = 'E';
        else
            grades[i] = 'F';
    }
}
void print(string names[], int scores[][5], char grades[], float avg[],float class_avg, int size)
{
    cout<< "Class Average: "<<fixed << setprecision(2)<< class_avg<<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<names[i] <<" ";
        for (int j = 0; j < 5; j++)
        {
            cout<< fixed<< setprecision(2) << (float)scores[i][j]<<" ";
        }
        cout<<"\n Average: "<<fixed << setprecision(2)<< avg[i] <<" ,Grade: "<< grades[i]<<endl;
    }
    
}