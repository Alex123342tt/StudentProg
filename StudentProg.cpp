#include <windows.h>
#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Student st("�������� ���� ��������", "01.01.2000", "+380991112233", "���", "������", "��� ��. �. ��������",
        "���", "������", 101);

    cout << "\n--- ��� �������� ---" << endl;
    st.print();

    cout << endl << "ϲ�: " << st.getName() << ", �����: " << st.getGroup() << endl;
}