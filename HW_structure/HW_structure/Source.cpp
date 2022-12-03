#include <iostream>
#include <string>


using namespace std;

// 2
struct WorkBook {
	string owner;
	string subject;
	int pages;
};
struct Time {
	int hour;
	int min;
	int sec;
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

// 4
struct Food
{
	Time time;
	string name;
	int ccal;
};
struct family_member {
	string rank;
	int year_old;
};

// 5
void inputFullName(struct FullName* name) {
	cout << "Input first name: ";
	getline(cin, name->First);
	cout << "Input middle name: ";
	getline(cin, name->middle);
	cout << "Input last name: ";
	getline(cin, name->last);
}
struct Time createtime(int h,int m, int s) {
	struct Time time;
	time.hour = h;
	time.min = m;
	time.sec = s;
	return time;
}
struct Time createTime1(struct Time date) {
	struct Time new_time;
	new_time.hour = date.hour;
	new_time.min = date.min;
	new_time.sec = date.sec;
	return new_time;
}
void imputTime(struct Time* time) {
	cout << "Input hour: ";
	cin >> time->hour;
	cout << "Input min: ";
	cin >> time->min;
	cout << "Input sec: ";
	cin >> time->sec;
}

// 6
struct Dimension { // шкаф (описывается габаритами)
	int height;
	int depth;
	int width;
};
void input(struct Dimension* sizes) {
	std::cout << "Input height: ";
	std::cin >> sizes->height;
	std::cout << "Input depth: ";
	std::cin >> sizes->depth;
	std::cout << "Input width: ";
	std::cin >> sizes->width;
}
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front;
	// 2 боковые крышки
	square_bok = 2 * sizes.height * sizes.depth;
	// верхняя и нижняя крышки
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 передняя крышка
	square_front = sizes.height * sizes.width;
	int square = square_bok + square_updown + square_front;
	return square;
}
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
float calculateDye(struct Dimension sizes, float consumption) {
	// с помощью написанной ранее функции вычисляем площадь поверхности
	int square = calculateSquare(sizes);
	// зная расход и площадь вычисляем сколько краски нужно
	float dye_needed = square * consumption;
	return dye_needed;
}
float calculatePaintingCost(struct Dimension sizes, float consumption, 
						   float workCost, float paintCost) {
	// ваш код
	float dye = calculateDye(sizes, consumption);
	float cost = dye * paintCost + calculateSquare(sizes) * workCost;
	return cost;
}
float calculateCupboardCost(struct Dimension sizes, float cupboardCost) {
	float cost = calculateSquare(sizes) * cupboardCost;
	return cost;
}
float calculateMass(struct Dimension sizes, float weight) {
	return calculateSquare(sizes) * weight;
}
float calculateRise(struct Dimension sizes, float weight,int floors, float risecost) {
	return floors * risecost * calculateMass(sizes, weight);
}
float calculateCost(Dimension cupboard, float cupboardCost, float paintConsumption,
					float paintCost, float paintWorkCost, float weight, 
					float floorsCount, float riseCost, float deliveryCost) {
	float full_cost;
	full_cost = calculatePaintingCost(cupboard, paintConsumption, paintWorkCost, paintCost) +
				calculateCupboardCost(cupboard, cupboardCost) +
				calculateRise(cupboard, weight, floorsCount, riseCost) + deliveryCost;
	return full_cost;
}


void main() {
	// 3
	struct Time time;
	time.sec = 54;
	time.min = 34;
	time.hour = 16;
	struct FullName n22380354 = { "Maksim" , "Aleksandrovich", "Anikin" };
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
		n22380354,
		"UNN",
		"ITMM",
		"FIIT",
		"",
		22380354,
		2218953003,
		2004,
		12,
		31
	};
	 
	// 4
	struct Food* racion = new struct Food[3];
	racion[0] = { {9,12,34} ,"яишонка",1234 };
	racion[1] = { {13,23,35} ,"картошечка",2345 };
	racion[2] = { {18,43,23} ,"макарошечки",3456 };

	struct family_member* family1 = new struct family_member[4];
	family1[0] = { "father", 42};
	family1[1] = { "mother" , 38 };
	family1[2] = { "dauther" , 8 };
	family1[3] = { "dog", 9 };

	// 5
	cout << "------------Zadanie 5------------" << endl;
	struct FullName name1;
	inputFullName(&name1);

	cout << "Hello! " << name1.First << " " << name1.middle << " " << name1.last << endl;

	struct Time time1;
	time1 = createtime(12, 13, 14);
	cout << "Time: " << time1.hour << ":" << time1.min << ":" << time1.sec << endl;
	time1 = createTime1( {23,24,25} );
	cout << "Time: " << time1.hour << ":" << time1.min << ":" << time1.sec << endl;
	imputTime(&time1);
	cout << "Time: " << time1.hour << ":" << time1.min << ":" << time1.sec << endl;

	// 6
	cout << "------------Zadanie 6------------" << endl;

	// расход краски, стоимость работы по покраске, стоимость краски
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// стоимость материала шкафа за м2
	float cupboardCost = 650;
	// вес кг/м2
	float weight = 0.9;
	// число этажей
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	struct Dimension cupboard;
	cout << "CUPBOARD PARAMETERS\n";
	input(&cupboard);
	float cost;
	cost = calculateCost(cupboard, cupboardCost, paintConsumption, paintCost, paintWorkCost,
		weight, floorsCount, riseCost, deliveryCost);

	cout << "Cost by position: " << endl;
	cout << "\t- cupboard cost: " << calculateCupboardCost(cupboard, cupboardCost) << endl;
	cout << "\t- painting cost: " << calculatePaintingCost(cupboard, paintConsumption, paintWorkCost,
		paintCost) << endl;
	cout << "\t- delivery cost: " << calculateRise(cupboard, weight, floorsCount, riseCost) +
		deliveryCost << endl;
	cout << "Total cost: " << cost << endl;
	system("pause");
}