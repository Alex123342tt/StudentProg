#include <windows.h>
#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Student st("Іваненко Іван Іванович", "01.01.2000", "+380991112233", "Київ", "Україна", "КНУ ім. Т. Шевченка",
        "Київ", "Україна", 101);

    cout << "\n--- Дані студента ---" << endl;
    st.print();

    cout << endl << "ПІБ: " << st.getName() << ", група: " << st.getGroup() << endl;
}