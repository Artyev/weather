#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <clocale>
#include <ctime>

struct weather
{
    char date[255];
    float mintemperature;
    float avgtemperature;
    float maxtemperature;
    float minwindspeed;
    float avgwindspeed;
    float maxwindspeed;
    float rainfall;
};

struct date
{
    std::string data;
    std::string year;
    std::string month;
};

void mintemperature()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float min = 38.6;
    int flag = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++) {
            if(count != 5){
                if(str[b] == ','){
                    count++;
                } else if(count == 4 && str[b + 1] != ','){
                    str1 += str[b];
                } else if(count == 5){
                    break;
                }
            }
        }
        count = 0;
        database[day].mintemperature = std::stof(str1);
        if(min > database[day].mintemperature) {
            min = database[day].mintemperature;
            flag = day;
        }
        if(day == 172){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << std::setprecision(3) << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 537){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 902){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 1267){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 1632){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 1997){
            for(int a = 0; a < 31; a++) {
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 2352){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 2727){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 3092){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 3457){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        } else if(day == 3642){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
            flag = 0;
        }
        day++;
    }
    fclose(fp);
};

void changewind()
{
    FILE* fp;
    weather database[3643];
    fp = fopen("dataexport.csv", "r");
    int count = 0;
    char str[255];
    int day = 0;
    float avgwind = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(str[b] == ','){
                count++;
            } else if(count == 9){
                str1 += str[b];
            }
        }
        count = 0;
        database[day].avgwindspeed = std::stof(str1);
        avgwind += database[day].avgwindspeed;
        if(day == 172){
            std::cout << "Second part of 2013 year, Average wind speed: " << std::setprecision(2) << (avgwind / 172) * 1000 / 3600 << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 537){
            std::cout << "Year 2014, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 902){
            std::cout << "Year 2015, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 1267){
            std::cout << "Year 2016, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 1632){
            std::cout << "Year 2017, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 1997){
            std::cout << "Year 2018, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 2352){
            std::cout << "Year 2019, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 2727){
            std::cout << "Year 2020, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 3092){
            std::cout << "Year 2021, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 3457){
            std::cout << "Year 2022, Average wind speed: " << (avgwind / 365) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        } else if(day == 3642){
            std::cout << "First part of 2023 year, Average wind speed: " << (avgwind / 185) * 1000 / 3600  << "m/s" << std::endl;
            avgwind = 0;
        }
        day++;
    }
};

void calm()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float minwind = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(count != 9){
                if(str[b] == ','){
                    count++;
                } else if(count == 8){
                    str1 += str[b];
                } else if(count == 9){
                    break;
                }
            }
        }
        database[day].minwindspeed = std::stof(str1);
        minwind = database[day].minwindspeed;
        if(minwind <= 3.5){
            for(int a = 0; a < 31; a++){
                std::cout << database[day].date[a];
            }
            std::cout << ", Speed: " << minwind * 1000 / 3600 << "m/s" << std::endl;
        }
        count = 0;
        day++;
    }
    fclose(fp);
};

void maxwindspeed()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float maxwind = 0;
    int flag = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(count != 8){
                if(str[b] == ','){
                    count++;
                } else if(count == 7){
                    str1 += str[b];
                } else if(count == 8){
                    break;
                }
            }
        }
        database[day].maxwindspeed = std::stof(str1);
        count = 0;
        if(maxwind <= database[day].maxwindspeed){
            maxwind = database[day].maxwindspeed;
            flag = day;
        }
        if(day == 172){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 537){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 902){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 1267){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 1632){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 1997){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 2352){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 2727){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 3092){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 3457){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600  << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        } else if(day == 3642){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum wind speed: " << maxwind * 1000 / 3600 << "m/s" << std::endl;
            maxwind = 0;
            flag = 0;
        }
        day++;
    }
    fclose(fp);
};

void rainfall()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float rainfall = 0;
    int flag = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(count != 7){
                if(str[b] == ','){
                    count++;
                } else if(count == 6){
                    str1 += str[b];
                } else if(count == 7){
                    break;
                }
            }
        }
        database[day].rainfall = std::stof(str1);
        count = 0;
        if(rainfall <= database[day].rainfall){
            rainfall = database[day].rainfall;
            flag = day;
        }
        if(day == 172){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 537){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 902){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 1267){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 1632){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 1997){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 2352){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 2727){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 3092){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 3457){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        } else if(day == 3642){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum rainfall: " << rainfall << "mm" << std::endl;
            rainfall = 0;
            flag = 0;
        }
        day++;
    }
    fclose(fp);
};

void avgtemperature()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float avg = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(count != 6){
                if(str[b] == ','){
                    count++;
                } else if(count == 5){
                    str1 += str[b];
                } else if(count == 6){
                    break;
                }
            }
        }
        database[day].avgtemperature = std::stof(str1);
        avg += database[day].avgtemperature;
        count = 0;
        if(day == 172){
            std::cout << "Second part of 2013 year, " << "Average temperature:" << " " << std::setprecision(4) << avg / 172 << std::endl;
            avg = 0;
        } else if(day == 537){
            std::cout << "Year: 2014, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 902){
            std::cout << "Year: 2015, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 1267){
            std::cout << "Year: 2016, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 1632){
            std::cout << "Year: 2017, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 1997){
            std::cout << "Year: 2018, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 2352){
            std::cout << "Year: 2019, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 2727){
            std::cout << "Year: 2020, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 3092){
            std::cout << "Year: 2021, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 3457){
            std::cout << "Year: 2022, " << "Average temperature:" << " " << avg / 365 << std::endl;
            avg = 0;
        } else if(day == 3642){
            std::cout << "First part of 2023 year, " << "Average temperature:" << " " << avg / 185 << std::endl;
            avg = 0;
        }
        day++;
    }
    fclose(fp);
};

void maxtemperature()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float max = 0;
    int flag = 0;
    int count = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        std::string str1;
        for(int b = 0; b < (int)strlen(str); b++){
            if(count != 4){
                if(str[b] == ','){
                    count++;
                } else if(count == 3){
                    str1 += str[b];
                } else if(count == 4){
                    break;
                }
            }
        }
        database[day].maxtemperature = std::stof(str1);
        count = 0;
        if(max <= database[day].maxtemperature) {
            max = database[day].maxtemperature;
            flag = day;
        }
        if(day == 172){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << std::setprecision(3) << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 537){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 902){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 1267){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 1632){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 1997){
            for(int a = 0; a < 31; a++) {
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 2352){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 2727){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 3092){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 3457){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        } else if(day == 3642){
            for(int a = 0; a < 31; a++){
                std::cout << database[flag].date[a];
            }
            std::cout << ", " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
            flag = 0;
        }
        day++;
    }
    fclose(fp);
};

void dates()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
            std::cout << database[day].date[a];
        }
        std::cout << std::endl;
        day++;
    }
    fclose(fp);
};

void prediction()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    time_t t1 = time(NULL);
    tm t = *localtime(&t1);
    date dada[3643];
    weather database[3643];
    char str[255];
    int day = 0;
    int count = 0;
    int space = 0;
    int banana = 0;
    t.tm_year = t.tm_year + 1900;
    t.tm_mon = t.tm_mon + 1;
    int month = 0;
    int year = 0;
    int date = 0;
    while(fgets(str, 255, fp) != NULL){
        std::string str3;
        for(int a = 6; a < 10; a++){
            str3 += str[a];
        }
        year = std::stof(str3);
        std::string str2;
        for(int a = 0; a < (int)strlen(str); a++){
            if(str[a] == ' '){
                space++;
            }
            if(space == 3){
                str2 += str[a];
                if(str[a] == '0'){
                    str2 += str[a];
                } else if(str[a] == ','){
                    break;
                }
            }
        }
        month = std::stof(str2);
        if(month == 100){
            month = month - 90;
        }
        space = 0;
        // std::string str1;
        // for(int b = 0; b < (int)strlen(str); b++){
        //     if(count != 4){
        //         if(str[b] == ','){
        //             count++;
        //         } else if(count == 3){
        //             str1 += str[b];
        //         } else if(count == 4){
        //             break;
        //         }
        //     }
        // }
        // database[day].maxtemperature = std::stof(str1);
        // count = 0;
        // for(int a = 6; a < 10; a++){
        //     if(dada[day].year[a] == t.tm_year && dada[day].month == t.tm_mon && dada[day].data == t.tm_mday){

        //     }
        // }
        // for(int a = 0; a < 10; a++) {
        //     if(t.tm_mon == 2 && t.tm_mday == 28){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 27;
        //     } else if(t.tm_mon == 2 && t.tm_mday == 29){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 28;
        //     }
        //     if(t.tm_mon == 4 && t.tm_mday == 30){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 29;
        //     } else if(t.tm_mon == 6 && t.tm_mday == 30){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 29;
        //     } else if(t.tm_mon == 9 && t.tm_mday == 30){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 29;
        //     } else if(t.tm_mon == 11 && t.tm_mday == 30){
        //         t.tm_mon = t.tm_mon + 1;
        //         t.tm_mday = t.tm_mday - 29;
        //     }
        //     if(t.tm_mday == 31){
        //         t.tm_mday = t.tm_mday - 30;
        //         t.tm_mon = t.tm_mon + 1;
        //     }
        // }
        // day++;
    }
    fclose(fp);
};

int main()
{
    prediction();
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    return 0;
}