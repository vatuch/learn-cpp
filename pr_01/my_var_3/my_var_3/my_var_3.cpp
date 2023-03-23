
#include <string>
#include <iostream>

using namespace std;


struct Date {
    int day;
    int month;
    int  year;
};

struct Record {
    char avtor[20];
    char name[20];
    int year;
    char symbol;
    struct Date date;
};

void Date(unsigned short day, unsigned short month, unsigned short year) {
    cout << left;
    cout << day << ".";
    cout << month << ".";
    cout << year << " ";
}

void Draw(struct Record *records) {
    int month = 78 + 9;
    cout << endl;
    cout << "|"; cout.width(65); cout.fill('-'); cout << "|" << endl;
    cout.width(65); cout.fill(' '); cout << left << "|Каталог библиотеки";  cout << "|" << endl;
    cout.width(65); cout.fill('-'); cout << "|" << "|";
    cout << left << "| Автор книги ";
    cout << left << "| Название ";
    cout << left << "| Год выпуска";
    cout << left << "| Группа";
    cout << left << " | Дата подписания рукописи ";
    cout << "|" << endl;
    cout.width(65); cout.fill('-'); cout << "-" << endl;
    cout.fill(' ');

    for (int i = 0; i < 3; i++) {
        cout << left << "|"; cout.width(12); cout << left << records[i].avtor;
        cout << left << "|"; cout.width(8); cout << left << records[i].name;
        cout << left << "|"; cout.width(11); cout << left << records[i].year;
        cout << left << "|"; cout.width(8); cout << left << records[i].symbol;
        cout << left << "|";
        Date(records[i].date.day, records[i].date.month, records[i].date.year);
    }

    
    cout << "|" << endl;
    cout.width(65); cout.fill(' '); cout << left << "|Примечание: Х - художественная литература;"; cout << "|" << endl;
    cout.width(65); cout.fill(' ');  cout << "|У - учебная литература; С - справочная литература";  cout << "|" << endl;
    cout.width(65); cout.fill('-'); cout << "|" << "|" << endl;
}



int main()

{
    setlocale(LC_ALL, "Rus");
    struct Record records[10];
    records[0] = { "Сенкевич", "Потоп", 1978, 'Х', {11,11,2020} };
    records[1] = { "Ландау", "Механика", 1989, 'У', {11,11,2020} };
    records[2] = { "Дойль", "Сумчатые",  1990, 'C', {12,11,2010} };

    Draw(records);
}

