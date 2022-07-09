#include "Student.h"

int main()
{
	Student s1 = { 100, "Tom Lee", 3.3 };
	Student s2 = { 101, "Kim Adams", 4.0 };
	Student s3 = { 102, "Bruce Lee", 2.2 };
	Student s4;
	Student s5 = { 103, "Sarah Lee", 3.5 };

	fstream file("student.bin", ios::binary | ios::out | ios::in);

	file.write(reinterpret_cast<char*>(&s1), sizeof(Student));
	file.write(reinterpret_cast<char*>(&s2), sizeof(Student));
	file.write(reinterpret_cast<char*>(&s3), sizeof(Student));

	file.seekg(2 * sizeof(Student), ios::beg);
	file.read(reinterpret_cast<char*>(&s4), sizeof(Student));

	cout << "Student #4:\n"
		<< "ID: " << s4.id << endl
		<< "Name: " << s4.name << endl
		<< "GPA: " << s4.gpa << endl << endl;

	strcpy_s(s1.name, "Charles Darwin");
	s1.gpa = 4.0;

	file.seekp(0 * sizeof(Student), ios::beg);
	file.write(reinterpret_cast<char*>(&s1), sizeof(Student));

	file.seekp(0, ios::end);
	file.write(reinterpret_cast<char*>(&s5), sizeof(Student));

	file.close();

	return 0;
}