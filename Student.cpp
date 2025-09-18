#include "Student.h"
#include <cstring>


Student::Student(const char* n, const char* bd, const char* ph, const char* c, const char* cntry,
    const char* uni, const char* uCity, const char* uCntry, int gr)
{
    strcpy_s(name, n);

    strcpy_s(birthDate, bd);

    strcpy_s(phone, ph);

    strcpy_s(city, c);

    strcpy_s(country, cntry);

    strcpy_s(university, uni);

    strcpy_s(uniCity, uCity);

    strcpy_s(uniCountry, uCntry);
    group = gr;

    cout << "�������� ��'��� ��������: " << name << endl;
}


Student::~Student()
{
}


void Student::print()
{
    cout << "ϲ�: " << name << endl;

    cout << "���� ����������: " << birthDate << endl;

    cout << "�������: " << phone << endl;

    cout << "̳���: " << city << endl;

    cout << "�����: " << country << endl;

    cout << "���������� ������: " << university << endl;

    cout << "̳��� ����������� �������: " << uniCity << endl;

    cout << "����� ����������� �������: " << uniCountry << endl;

    cout << "�����: " << group << endl;
}

const char* Student::getName()
{
    return name;
}

int Student::getGroup()
{
    return group;
}
