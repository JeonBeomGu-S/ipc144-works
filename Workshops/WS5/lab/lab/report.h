//	
//	report.h
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-20
//	


#ifndef SENECA_REPORT_H
#define SENECA_REPORT_H

struct Student {
    float mark;
    int stNo;
    char name[31];
};

struct Student getStudent(void);
void printStudent(struct Student S);
void printReport(const struct Student S[], int num);
void readStudentInfo(struct Student S[], int num);

#endif // !SENECA_REPORT_H
