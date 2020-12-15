#ifndef FILE_H
#define FILE_H
#include "List.h"
#include <iostream>
#include <fstream>
#include <string>
#include "bike.h"
#include "car.h"
#include "truck.h"
#include <QMessageBox>

template<class T>
class File
{
public:
        File() = default;
        ~File() = default;

        static void openBike(List<T>* list, const char *file);
        static void openCar(List<T>* list, const char *file);
        static void openTruck(List<T>* list, const char *file);

        static void saveBike(List<T>* list, const char *file);
        static void saveCar(List<T>* list, const char *file);
        static void saveTruck(List<T>* list, const char *file);
};

template<class T>
void File<T>::openBike(List<T> *list, const char *file) {
    std::ifstream in;
    in.open(file, std::ios::in);
    if (!in.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    char BUFFER[50];
    std::string val5;
    bool val1, val4;
    int val2, val3;
    while (EOF) {
        int i = 0;
        in >> BUFFER[i];
        if (!in || BUFFER[i++] == '%') {
            break;
        }
        while ((BUFFER[i] = in.get()) != '|' && BUFFER[i] != '\n') {
            i++;
        }
        BUFFER[i] = '\0';
        val5 = std::string(BUFFER);
        in.get();
        in >> val1 >> val2 >> val3 >> val4;
        bike Bike(val1, val2, val3, val4, val5);
        list->pushTail(Bike);
    }
    in.close();
}

template<class T>
void File<T>::saveBike(List<T> *list, const char *file) {
    std::ofstream on;
    on.open(file, std::ios_base::out);
    if (!on.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    for (int i = 0; i < list->size(); i++) {
        on << list->operator[](i).getProblems() << "| " << list->operator[](i).getMotokasko() << " " << list->operator[](i).getPrice() << " " <<
            list->operator[](i).getId() << " " << list->operator[](i).getStatus();
        on << std::endl;
    }
    on << "%";
    on.close();
}

template<class T>
void File<T>::openCar(List<T> *list, const char *file) {
    std::ifstream in;
    in.open(file, std::ios::in);
    if (!in.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    char BUFFER[50];
    std::string val5;
    bool val4;
    int val1, val2, val3;
    while (EOF) {
        int i = 0;
        in >> BUFFER[i];
        if (!in || BUFFER[i++] == '%') {
            break;
        }
        while ((BUFFER[i] = in.get()) != '|' && BUFFER[i] != '\n') {
            i++;
        }
        BUFFER[i] = '\0';
        val5 = std::string(BUFFER);
        in.get();
        in >> val1 >> val2 >> val3 >> val4;
        car Car(val1, val2, val3, val4, val5);
        list->pushTail(Car);
    }
    in.close();
}

template<class T>
void File<T>::saveCar(List<T> *list, const char *file) {
    std::ofstream on;
    on.open(file, std::ios_base::out);
    if (!on.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    for (int i = 0; i < list->size(); i++) {
        on << list->operator[](i).getProblems() << "| " << list->operator[](i).getSeats() << " " << list->operator[](i).getPrice() << " " <<
            list->operator[](i).getId() << " " << list->operator[](i).getStatus();
        on << std::endl;
    }
    on << "%";
    on.close();
}

template<class T>
void File<T>::openTruck(List<T> *list, const char *file) {
    std::ifstream in;
    in.open(file, std::ios::in);
    if (!in.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    char BUFFER[50];
    std::string val5;
    bool val4;
    int val1, val2, val3;
    while (EOF) {
        int i = 0;
        in >> BUFFER[i];
        if (!in || BUFFER[i++] == '%') {
            break;
        }
        while ((BUFFER[i] = in.get()) != '|' && BUFFER[i] != '\n') {
            i++;
        }
        BUFFER[i] = '\0';
        val5 = std::string(BUFFER);
        in.get();
        in >> val1 >> val2 >> val3 >> val4;
        truck Truck(val1, val2, val3, val4, val5);
        list->pushTail(Truck);
    }
    in.close();
}

template<class T>
void File<T>::saveTruck(List<T> *list, const char *file) {
    std::ofstream on;
    on.open(file, std::ios_base::out);
    if (!on.is_open()) {
        QMessageBox::critical(0, "Ошибка!", "Ошибка чтения файла!");
        return;
    }
    for (int i = 0; i < list->size(); i++) {
        on << list->operator[](i).getProblems() << "| " << list->operator[](i).getCarrying() << " " << list->operator[](i).getPrice() << " " <<
            list->operator[](i).getId() << " " << list->operator[](i).getStatus();
        on << std::endl;
    }
    on << "%";
    on.close();
}

#endif // FILE_H
