#include "Students.h"

void insertStudent(Student*&);
void showList(Student*&);
void deleteStudent(Student*&);

int main()
{
	Student* head = nullptr;
	char answer = 'Y';

	while (toupper(answer) == 'Y')
	{
		insertStudent(head);

		cout << "Enter another student record (Y or N)? ";
		cin >> answer;
		system("cls");
	}
	system("cls");

	cout << "Here is the list of students:\n";
	showList(head);

	if (head != nullptr)
	{
		cout << "Do you want to delete a student from the list (Y or N)?   ";
		cin >> answer;

		if (toupper(answer) == 'Y')
			deleteStudent(head);
		system("pause");
		system("cls");

		cout << "Here is the list of students after the delete:\n";
		showList(head);
	}

	return 0;
}

void insertStudent(Student*& head)
{
	Student* temp = new Student;

	cout << "Enter ID:   ";
	cin >> temp->id;
	cin.ignore();
	cout << "Enter Name:   ";
	getline(cin, temp->name);

	temp->next = head;
	head = temp;
}

void showList(Student*& head)
{
	Student* temp = head;

	while (temp != nullptr)
	{
		cout << "ID:   " << temp->id << endl
			<< "Name:   " << temp->name << endl << endl;

		temp = temp->next;
	}
}

void deleteStudent(Student*& head)
{
	Student* lead = head;
	Student* follow = head;
	int idNumber;

	cout << "Enter the ID of the student to be deleted:   ";
	cin >> idNumber;

	while (lead->id != idNumber && lead->next != nullptr)
	{
		follow = lead;
		lead = lead->next;
	}
	//check to see if lead points to the first node
	if (lead == head)
	{
		if (lead->id == idNumber)
		{
			head = head->next;
			delete lead;
		}
		else
			cout << idNumber << " is not in the list.\n";
	}
	//check to see if lead points to the last node
	else if (lead->next == nullptr)
	{
		if (lead->id != idNumber)
			cout << idNumber << " is not in the list.\n\n";
		else
		{
			follow->next = lead->next;
			delete lead;
		}
	}
	else
	{
		if (lead->id != idNumber)
			cout << idNumber << " is not in the list.\n";
		else
		{
			follow->next = lead->next;
			delete lead;
		}
	}
}