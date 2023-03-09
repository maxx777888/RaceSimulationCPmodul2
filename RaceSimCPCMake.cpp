#include <iostream>
#include <string>
#include <Windows.h>
#include "Camel.h"
#include "FastC.h"
#include "HorseMan.h"
#include "Boots.h"
#include "Broomstick.h"
#include "Eagle.h"
#include "MagicCarpet.h"
#include "MixRace.h"


//Константы для видов гонок
enum raceType {
    ground_race_type = 1, //Гонка для наземного транспорта
    air_race_type = 2, //Гонка для воздушного транспорта
    mixed_race_type = 3 //Гонка для наземного и воздушного транспорта
};
//Константы для типов транспортных средств
enum raceTS {
    boots_ts = 1, //Ботинки-вездеходы
    groom_ts = 2, //Метла
    camel_ts = 3, //Верблюд
    centaur_ts = 4, //Кентавр
    eagel_ts = 5, //Орёл
    fast_camel_ts = 6, //Верблюд-быстроход
    magic_carpet_ts = 7 //Ковер-самолёт
};
//Метод выводит на экран тип и расстояние гонки. 
void printRaceType(raceType r, int dis_) {
    switch (r) {
    case raceType::ground_race_type:
        std::cout << "Гонка для наземного транспорта. Расстояние: " << dis_ << std::endl;
        break;
    case raceType::air_race_type:
        std::cout << "Гонка для воздушного транспорта. Расстояние: " << dis_ << std::endl;
        break;
    case raceType::mixed_race_type:
        std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << dis_ << std::endl;
        break;
    }
};
//Метод выводит на экран зарегистрированное транспортное средство
bool registRaceTS(raceType t, raceTS r, bool* regArr) {
    bool reg_request = false;//Проверка на удачную регистрацию. 
    switch (r)
    {
    case raceTS::boots_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::air_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем. 
        if (regArr[0] == true)
        {
            std::cout << "Ботинки-вездеходы уже зарегистрированы! " << std::endl;
        }
        else
        {
            std::cout << "Ботинки-вездеходы успешно зарегистрированы! " << std::endl;
            regArr[0] = true;
            reg_request = true;
        }
        break;
    case raceTS::groom_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::ground_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем. 
        if (regArr[1] == true)
        {
            std::cout << "Метла уже зарегистрирована! " << std::endl;
        }
        else
        {
            std::cout << "Метла успешно зарегистрирована! " << std::endl;
            regArr[1] = true;
            reg_request = true;
        }
        break;
    case raceTS::camel_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::air_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем.
        if (regArr[2] == true)
        {
            std::cout << "Верблюд уже зарегистрирован! " << std::endl;
        }
        else
        {
            std::cout << "Верблюд успешно зарегистрирован! " << std::endl;
            regArr[2] = true;
            reg_request = true;
        }
        break;
    case raceTS::centaur_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::air_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем.
        if (regArr[3] == true)
        {
            std::cout << "Кентавр уже зарегистрирован! " << std::endl;
        }
        else
        {
            std::cout << "Кентавр успешно зарегистрирован! " << std::endl;
            regArr[3] = true;
            reg_request = true;
        }
        break;
    case raceTS::eagel_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::ground_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем.
        if (regArr[4] == true)
        {
            std::cout << "Орёл уже зарегистрированы! " << std::endl;
        }
        else
        {
            std::cout << "Орёл успешно зарегистрирован! " << std::endl;
            regArr[4] = true;
            reg_request = true;
        }
        break;
    case raceTS::fast_camel_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::air_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем.
        if (regArr[5] == true)
        {
            std::cout << "Верблюд-быстроход уже зарегистрирован! " << std::endl;
        }
        else
        {
            std::cout << "Верблюд-быстроход успешно зарегистрирован! " << std::endl;
            regArr[5] = true;
            reg_request = true;
        }
        break;
    case raceTS::magic_carpet_ts:
        //Проверка на соответствие транспортного средства виду гонки
        if (t == raceType::ground_race_type)
        {
            std::cout << "Попытка зарегистрировать неправильный тип транспортного средства! " << std::endl;
            break;
        }
        //Проверка на новую регистрацию, если регистрации еще не было, регистрируем.
        if (regArr[6] == true)
        {
            std::cout << "Ковер-самолёт уже зарегистрирован! " << std::endl;
        }
        else
        {
            std::cout << "Ковер-самолёт успешно зарегистрирован! " << std::endl;
            regArr[6] = true;
            reg_request = true;
        }
        break;
    default:
        std::cout << "Транспортное средство с такой комбинацией отсутствует! " << std::endl;
        break;
    }
    return reg_request;
};
//Метод выводит на экран зарегистрированных участников гонки.
void printAllRegisterTS(bool* regArr) {

    std::string regT = ""; //Строка, которая собирает зарегистрированных участников
    int members = 0; //Переменная посчитывает кол-во зарегистрированных участников гонки
    int hCount = 1; //Кол-во запятых 

    for (int i = 0; i < 7; i++)
    {//Посчитывает сколько зарегистрированных участников в данный момент
        if (regArr[i])
        {
            members++;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (regArr[i] == true)
        {
            switch (i)
            {
            case 0:
                regT += "Ботинки-вездеходы";
                break;
            case 1:
                regT += "Метла";
                break;
            case 2:
                regT += "Верблюд";
                break;
            case 3:
                regT += "Кентавр";
                break;
            case 4:
                regT += "Орёл";
                break;
            case 5:
                regT += "Верблюд-быстроход";
                break;
            case 6:
                regT += "Ковер-самолёт";
                break;
            }

            if (members == 1) //Если кол-во участников один, запятую не ставим
            {

                std::cout << "Зарегистрированные транспортные средства: " << regT << std::endl;
                break;
            }
            //Если кол-во участников больше одного, но меньше всего кол-ва, то добовляем запятую и пробел
            else if (members > 1 && hCount != members)
            {
                regT += ", ";
                hCount += 1; //Увеличиваем кол-во запятых
            }
            else if (members == hCount) //Если кол-во запятых равно кол-ву участников, то в конце запятую не ставим
            {
                std::cout << "Зарегистрированные транспортные средства: " << regT << std::endl;
                break;
            }
        }
    }

}
//Метод который будет проводить гонку
void startRace(bool* regArr, int members, int dis)
{
    //Переменная помогает сделать нужную индексацию и положить объекты участников в массив гонки
    int helper = members; 
    //Создание объектов игры
    Boots boots;
    Broomstick broomstick;
    Camel camel;
    HorseMan hman;
    Eagle eagle;
    FastC fastC;
    MagicCarpet carpet;
    //Динамический массив в котором будут хранится объекты участники гонки, который нужен для сортировки времени гонки
    MixRace** race = new MixRace * [members];
    //Перемещаем в массив гонки объекты зарегистрированных транспортных средств
    for (int i = 0; i < 7; ++i)
    {
        if (regArr[i] == true)
        {
            raceTS ts = static_cast<raceTS>(i + 1);

            switch (ts)
            {
            case raceTS::boots_ts:
                race[members - helper] = &boots;
                helper -= 1;
                break;
            case raceTS::groom_ts:
                race[members - helper] = &broomstick;
                helper -= 1;
                break;
            case raceTS::camel_ts:
                race[members - helper] = &camel;
                helper -= 1;
                break;
            case raceTS::centaur_ts:
                race[members - helper] = &hman;
                helper -= 1;
                break;
            case raceTS::eagel_ts:
                race[members - helper] = &eagle;
                helper -= 1;
                break;
            case raceTS::fast_camel_ts:
                race[members - helper] = &fastC;
                helper -= 1;
                break;
            case raceTS::magic_carpet_ts:
                race[members - helper] = &carpet;
                helper -= 1;
                break;
            }
        }
    } //Конец цикла расстановки объектов, все готово к началу гоники. 

    //Начало сортировки и вывод на экран результатов гонки
    std::cout << "Результаты гонки ---------------" << std::endl;

    bool champ = false;
    do
    {
        champ = false;
        for (int i = members; i > 1; i--)
        {
            if (race[i - 2]->race_start(dis) > race[i - 1]->race_start(dis))
            {
                MixRace* temp;
                temp = race[i - 1];
                race[i - 1] = race[i - 2];
                race[i - 2] = temp;
                champ = true;
            }
        }
    } while (champ);

    for (int i = 0; i < members; i++)
    {
        std::cout << (i + 1) << " " << race[i]->get_name() << ". Время: " << race[i]->race_start(dis) << std::endl;
    }

    delete[] race;//Обязательное освобождение памяти

}

int main()
{
    //Необходимые настройки консоли, для правильной работы с русским языком.
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    bool game_over = false;//Переменная заканчивает игру.
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    while (!game_over)
    {

        int clientChoice; //Переменная нужна для получения выбора юзера
        int dis = -1; //Переменная для отображения дистанции гонки
        bool game_begin = false; //Переменная для состаяния начала гонки (все условия соблюдены)
        int race_members = 0; //Переменная для посчета кол-ва участников
        //Булевый массив для сбора заявок транспортных средств на гонку. 
        bool registArrey[7] = { false, false, false, false, false, false, false };
        bool is_race_type_valid = false;//Проверка на ввод правильного номера типа гонки
        while (!is_race_type_valid) //Цикл проверки для ввода типа гонки
        {
            std::cout << "1. Гонка для наземного транспорта" << std::endl;
            std::cout << "2. Гонка для воздушного транспорта" << std::endl;
            std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
            std::cout << "Выберите тип гонки: " << std::endl;
            std::cin >> clientChoice;
            std::cout << std::endl;
            if ((clientChoice == 1) || (clientChoice == 2) || (clientChoice == 3))
            {
                is_race_type_valid = true;//Пользователь ввёл правильный тип гонки
                break;
            }
            else
            {
                std::cout << "Нет такого типа гонки, попробуйте еще раз. " << std::endl;
                std::cout << std::endl;
            }
        }


        raceType new_race = static_cast<raceType>(clientChoice);//Приравнение ввода юзера к нужному типу гонки

        while (dis < 0) //Цикл будет повторятся пока юзер не введет положительное расстояние гонки
        {
            std::cout << "Укажите длину дистанции (должна быть положительна): " << std::endl;
            std::cin >> dis;
            std::cout << std::endl;
        }

        //printRaceType(new_race, dis);//Выводит на экран тип гонки. 

        std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства " << std::endl;
        do
        {
            std::cout << "1. Зарегистрировать транспорт " << std::endl;
            std::cout << "Выберите действие: " << std::endl;
            std::cin >> clientChoice;
            std::cout << std::endl;
        } while (clientChoice != 1);//Цикл пока пользователь не введет 1

        printRaceType(new_race, dis);//Выводит на экран тип гонки. 
        
        do { //Начало регистрации транспортных средств на гонку и сама гонка
            
            std::cout << "1. Ботинки-вездеходы" << std::endl;
            std::cout << "2. Метла" << std::endl;
            std::cout << "3. Верблюд" << std::endl;
            std::cout << "4. Кентавр" << std::endl;
            std::cout << "5. Орёл" << std::endl;
            std::cout << "6. Верблюд-быстроход" << std::endl;
            std::cout << "7. Ковер-самолёт" << std::endl;
            std::cout << "0. Закончить регистрацию" << std::endl;
            std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: " << std::endl;
            std::cin >> clientChoice;
            std::cout << std::endl;

            if (race_members >= 2 && clientChoice == 0) //Если юзер нажал на 0 и участников гонки больше 2:
            {
                int clientC = 0; //Переменная для отслеживания действий пользователя
                while ((clientC != 1) && (clientC != 2))
                { //Последние дейстивия перед гонкой, спрашиваем может он хочет продолжить регистрацию на гонку
                    std::cout << "1. Зарегистрировать транспорт" << std::endl;
                    std::cout << "2. Начать гонку" << std::endl;
                    std::cout << "Выберите действие:" << std::endl;
                    std::cin >> clientC;
                    std::cout << std::endl;
                }
                //Если продолжить, возвращаемся к циклу
                if (clientC == 1)
                {
                    printRaceType(new_race, dis);//Выводит на экран тип гонки. 
                    printAllRegisterTS(registArrey);//Выводим на экран уже зарегистрированных участников гонки. 
                    continue;
                }
                //Заканчиваем цикл, если юзер хочет начать гонку
                if (clientC == 2)
                {
                    //Запускаем гонку и выводим на экран результат по времени каждого участника гонки
                    startRace(registArrey, race_members, dis);
                    //Переменная для отслеживания действий пользователя
                    int clientC2 = 0;
                    //После завершения гонки начинаем новый раунд и вопроса пользователя:
                    while ((clientC2 != 1) && (clientC2 != 2))
                    {
                        std::cout << std::endl;
                        std::cout << "1. Провести еще одну гонку " << std::endl;
                        std::cout << "2. Выйти " << std::endl;
                        std::cout << "Выберите действие:" << std::endl;
                        std::cin >> clientC2;
                        std::cout << std::endl;
                    }
                    //Запускаем новую гонку
                    if (clientC2 == 1)
                    {
                        game_begin = true;//Выходим из текущего цикла и возвращаемся к началу программы
                        break;
                    }
                    //Выходим из цикла и заканчиваем игру
                    if (clientC2 == 2)
                    {
                        game_begin = true;//Выходим из цикла регистрации и гонки
                        game_over = true;//Выходим из цикла самой игры и завершаем программу
                        break;
                    }

                }

            }
            else if (race_members < 2 && clientChoice == 0) //Если юзер нажал на 0, но участников гонки меньше 2:
            {
                std::cout << "Не достаточно участников для гонки,";
                std::cout << "зарегистрируйте дополнитено транспортное средство." << std::endl;
                continue;
            }
            else //Пытаемся зарегистрировать нового участника на гонку.
            {
                raceTS new_member = static_cast<raceTS>(clientChoice);//Переводим ввод юзера на тип нужного т. средства
                //Выводит на экран тип и успешную регистрацию в гонке
                if (registRaceTS(new_race, new_member, registArrey))
                {
                    race_members += 1; //Если регистрация прошла успешно, то увеличиваем кол-во участников гонки на 1.
                }
                printRaceType(new_race, dis);//Выводит на экран тип гонки. 
                printAllRegisterTS(registArrey);//Выводим на экран зарегистрированных участников гонки.     
            }

        } while (game_begin != true); //Выход из цикла регистрации и гонки, на начало игры. 

    }

}

