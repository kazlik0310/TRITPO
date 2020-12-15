#ifndef KURSACHKARPEICHIK_ALGORITHM_H
#define KURSACHKARPEICHIK_ALGORITHM_H

#define KEY 5

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include "List.h"
#include "file.h"

template <class T>
class Algorithm {
public:
    static void add(List<T>& list, std::vector<T>& returnPrev, std::vector<int>& action);
    static void remove(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action);
    static void update(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action, std::vector<int> &place);
    static void sort(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action, std::vector<int> &place);
    static void cancel(List<T>& list, std::vector<T>& returnPrev, std::vector<int>& action, std::vector<int>& place);
    static void giveAdminRole(List<T>& list);
};

template<class T>
void Algorithm<T>::add(List<T>& list, std::vector<T>& returnPrev, std::vector<int>& action) {
    //system("cls");
    T tmp;
    std::cin >> tmp;
    list.pushTail(tmp);
    returnPrev.insert(returnPrev.end(), tmp);
    action.insert(action.end(), 1);
    system("pause");
}

template<class T>
void Algorithm<T>::remove(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action) {
    //system("cls");
    if (list.size() == 0) {
        QMessageBox::critical(0, "Ошибка!", "Список пуст!");
        return;
    } else {
        T tmp = list[list.size() - 1];
        returnPrev.insert(returnPrev.end(), tmp);
        action.insert(action.end(), 2);
        list.popTail();
    }
    system("pause");
}

template<class T>
void Algorithm<T>::update(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action, std::vector<int> &place) {
    //system("cls");
    if (!list.size()) {
        QMessageBox::critical(0, "Ошибка!", "Список пуст!");
        return;
    }
    list.output();
    std::cout << std::endl;
    std::cout << "Введите номер изменяемого сотрудника : ";
    int tempNum;// = InputError::Input(1, list.size());
    T tmp;
    std::cin >> tmp;
    returnPrev.insert(returnPrev.end(), list[tempNum - 1]);
    action.insert(action.end(), 3);
    place.insert(place.end(), tempNum);
    list[tempNum - 1] = tmp;
    system("pause");
}

template<class T>
void Algorithm<T>::sort(List<T> &list, std::vector<T> &returnPrev, std::vector<int> &action, std::vector<int> &place) {
    if (!list.size()) {
        QMessageBox::critical(0, "Ошибка!", "Список пуст!");
        return;
    }
    list.output();
    std::cout << std::endl;
    std::cout << "Выберите по какому признаку отсортировать:" << std::endl;
    std::cout << "1. По лицевому счёту по возрастанию." << std::endl;
    std::cout << "2. По лицевому счёту по убыванию." << std::endl;
    std::cout << "3. По зарплате по возрастанию." << std::endl;
    std::cout << "4. По зарплате по убыванию." << std::endl;
    //int type = InputError::Input(1, 4);
    //list.sort(type);
}

template<class T>
void Algorithm<T>::cancel(List<T>& list, std::vector<T>& returnPrev, std::vector<int>& action, std::vector<int>& place) {
    if (!action.size()) {
        QMessageBox::critical(0, "Ошибка!", "Список пуст!");
        return;
    }
    switch (action.back()) {
        case 1: {
            list.popTail();
            action.erase(action.end() - 1);
            returnPrev.erase(returnPrev.end() - 1);
            break;
        }
        case 2: {
            list.pushTail(returnPrev.back());
            action.erase(action.end() - 1);
            returnPrev.erase(returnPrev.end() - 1);
            break;
        }
        case 3: {
            list[place.back() - 1] = returnPrev.back();
            place.erase(place.end() - 1);
            action.erase(action.end() - 1);
            returnPrev.erase(returnPrev.end() - 1);
            break;
        }
    }
}

#endif //KURSACHKARPEICHIK_ALGORITHM_H
