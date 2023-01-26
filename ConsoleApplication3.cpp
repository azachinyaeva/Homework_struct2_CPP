#include <iostream>
using namespace std;
struct address {
    string country;
    string city;
    string street;
    int house_num;
    int flat;
    int index;
};

void show(address& address) {
    cout << "Город: " << address.city << '\n';
    cout << "Улица: " << address.street << '\n';
    cout << "Номер дома: " << address.house_num << '\n';
    cout << "Номер квартиры: " << address.flat << '\n';
    cout << "Индекс: " << address.index << '\n';
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    address moscow{"Россия", "Москва", "Арбат", 12, 8, 123456};
    address izhevsk{ "Россия", "Ижевск", "Пушкина", 59, 143, 953769};
    
    show(moscow);
    show(izhevsk);

    return 0;
}
