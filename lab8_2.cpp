#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
    char grade;
    if(x>90){
        grade = 'A';
    }else if(x>75 && x<=90){
        grade = 'B';
    }else if(x>60 && x<=75){
        grade = 'C';
    }else if(x>45 && x<=60){
        grade = 'D';
    }else{
        grade = 'F';
    }
    return grade;
}

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin>>score[i];
		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}