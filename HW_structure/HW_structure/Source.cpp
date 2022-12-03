#include <iostream>

using namespace std;


struct WorkBook {
	string owner;
	string subject;
	int pages;
};
struct Time {
	int sec;
	int min;
	int hour;
};
struct Jeans {
	string brand;
	string type;
	int size;
	int article;
};
struct TV {
	string name;
	string matrix_type;
	float diagonal;
	int resolution;
	float side_ratio;
	float height;
	float depth;
	float width;
};
struct ObjectPara {
	string name;
	float height;
	float depth;
	float width;
	float x_pos;
	float y_pos;
	float z_pos;
	float vectorspeed;
};
struct FullName {
	string First;
	string middle;
	string last;
};
struct Student {
	FullName fullname;
	string university;
	string institute;
	string faculty;
	string department;
	int stud_id;
	long long passport_number;
	int birth_year;
	int birth_month;
	int birth_day;
};
struct Patient {
	FullName fullname;
	string description;
	string* diagnosis;
	string* anamnesis;
	long long passport_number;
	int blood_type;
	int full_years;
	int birth_year;
	int birth_month;
	int birth_day;
};

void main() {
	struct Time time;
	time.sec = 54;
	time.min = 34;
	time.hour = 16;
	struct FullName n22380354 = {"Maksim" , "Aleksandrovich", "Anikin"};
	struct ObjectPara object_1 = {
		"object_1",
		1.0f,
		1.0f,
		1.0f,
		0,
		0,
		0,
		0
	};
	struct Student s22380354 = {
		"n22380354",
		"UNN",
		"ITMM",
		"FIIT",
		NULL,
		22380354,
		2218953003,
		2004,
		12,
		31
	};

}