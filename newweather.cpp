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
    char str[255];
    t.tm_year = t.tm_year + 1900;
    t.tm_mon = t.tm_mon + 1;
    int month = 0;
    int date = 0;
    int count = 0;
    int count2 = 0;
    int day = 0;
    float maxtemperature = 0;
    float mintemperature = 0;
    float avgwindspeed = 0;
    float rainfall = 0;
    float rainflag = 0;
    float rainfallchance = 0;
    float maxtemperature1 = 0;
    float mintemperature1 = 0;
    float avgwindspeed1 = 0;
    float rainfall1 = 0;
    float rainflag1 = 0;
    float rainfallchance1 = 0;
    float maxtemperature2 = 0;
    float mintemperature2 = 0;
    float avgwindspeed2 = 0;
    float rainfall2 = 0;
    float rainflag2 = 0;
    float rainfallchance2 = 0;
    float maxtemperature3 = 0;
    float mintemperature3 = 0;
    float avgwindspeed3 = 0;
    float rainfall3 = 0;
    float rainflag3 = 0;
    float rainfallchance3 = 0;
    float maxtemperature4 = 0;
    float mintemperature4 = 0;
    float avgwindspeed4 = 0;
    float rainfall4 = 0;
    float rainflag4 = 0;
    float rainfallchance4 = 0;
    float maxtemperature5 = 0;
    float mintemperature5 = 0;
    float avgwindspeed5 = 0;
    float rainfall5 = 0;
    float rainflag5 = 0;
    float rainfallchance5 = 0;
    float maxtemperature6 = 0;
    float mintemperature6 = 0;
    float avgwindspeed6 = 0;
    float rainfall6 = 0;
    float rainflag6 = 0;
    float rainfallchance6 = 0;
    float maxtemperaturetoday = 0;
    float mintemperaturetoday = 0;
    float avgwindspeedtoday = 0;
    float rainfalltoday = 0;
    float rainflagtoday = 0;
    float rainfallchancetoday = 0;
    while(fgets(str, 255, fp) != NULL){
        std::string str1;
        for(int a = 0; a < (int)strlen(str); a++){
            if(str[a] == ' '){
                count++;
            }
            if(count == 3){
                str1 += str[a];
                if(str[a] == '0'){
                    str1 += str[a];
                } else if(str[a] == ','){
                    break;
                }
            }
        }
        count = 0;
        month = std::stof(str1);
        if(month == 100){
            month = month - 90;
        }
        std::string str2;
        for(int b = 0; b < (int)strlen(str); b++){
            if(str[b] == ' '){
                count++;
            }
            if(str[b] == ','){
                count2++;
            }
            if(count2 != 3){
                if(count == 5){
                    str2 += str[b];
                }
            } else if(count2 == 3){
                break;
            }
        }
        count = 0;
        count2 = 0;
        date = std::stof(str2);
        std::string str3;
        if(t.tm_mon == month && t.tm_mday == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperaturetoday += std::stof(str3);
            mintemperaturetoday += std::stof(str4);
            rainfalltoday += std::stof(str5);
            rainfallchancetoday = std::stof(str5);
            avgwindspeedtoday += std::stof(str6);
            if(rainfallchancetoday > 0){
                rainflagtoday = rainflagtoday + 10;
            }
        } else if(day == 3642) {
            maxtemperaturetoday = maxtemperaturetoday / 10;
            mintemperaturetoday = mintemperaturetoday / 10;
            rainfalltoday = rainfalltoday / 10;
            avgwindspeedtoday = avgwindspeedtoday / 10;
            if(rainflagtoday == 0){
                rainflagtoday = 2;
            }
            std::cout << "Date: " << t.tm_mday << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperaturetoday << ", Minimum temperature: " << mintemperaturetoday << ", Rainfall: " << rainfalltoday << "(chance: " << rainflagtoday << "%), " << "Average wind speed: " << avgwindspeedtoday << std::endl;
        }
        day++;
    }
    day = 0;
    fclose(fp);
    fp = fopen("dataexport.csv", "r");
    int flag = 0;
    while(fgets(str, 255, fp) != NULL){
        std::string str1;
        for(int a = 0; a < (int)strlen(str); a++){
            if(str[a] == ' '){
                count++;
            }
            if(count == 3){
                str1 += str[a];
                if(str[a] == '0'){
                    str1 += str[a];
                } else if(str[a] == ','){
                    break;
                }
            }
        }
        count = 0;
        month = std::stof(str1);
        if(month == 100){
            month = month - 90;
        }
        std::string str2;
        for(int b = 0; b < (int)strlen(str); b++){
            if(str[b] == ' '){
                count++;
            }
            if(str[b] == ','){
                count2++;
            }
            if(count2 != 3){
                if(count == 5){
                    str2 += str[b];
                }
            } else if(count2 == 3){
                break;
            }
        }
        count = 0;
        count2 = 0;
        date = std::stof(str2);
        std::string str3;
        if(t.tm_mday == 31 && t.tm_mon == 1) {
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        }
        if(t.tm_mday == 28 && t.tm_mon == 2){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        }
        if(t.tm_mday == 31 && t.tm_mon == 3){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        }
        if(t.tm_mday == 30 && t.tm_mon == 4){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        }
        if(t.tm_mday == 31 && t.tm_mon == 5){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } if(t.tm_mday == 30 && t.tm_mon == 6){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 31 && t.tm_mon == 7){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 31 && t.tm_mon == 8){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 30 && t.tm_mon == 9){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 31 && t.tm_mon == 10){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 30 && t.tm_mon == 11){
            flag++;
            t.tm_mon = t.tm_mon + 1;
            t.tm_mday = 1;
        } 
        if(t.tm_mday == 31 && t.tm_mon == 12){
            flag++;
            t.tm_mon = 1;
            t.tm_mday = 1;
            t.tm_year = t.tm_year + 1;
        }
        if(flag == 1){
            if(t.tm_mon == month && t.tm_mday == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature += std::stof(str3);
            mintemperature += std::stof(str4);
            rainfall += std::stof(str5);
            rainfallchance = std::stof(str5);
            avgwindspeed += std::stof(str6);
            if(rainfallchance > 0){
                rainflag = rainflag + 10;
            }
        } else if(day == 3642){
            maxtemperature = maxtemperature / 10;
            mintemperature = mintemperature / 10;
            rainfall = rainfall / 10;
            avgwindspeed = avgwindspeed / 10;
            if(rainflag == 0){
                rainflag = 2;
            }
            std::cout << "Date: " << t.tm_mday << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature << ", Minimum temperature: " << mintemperature << ", Rainfall: " << rainfall << "(chance: " << rainflag << "%), " << "Average wind speed: " << avgwindspeed << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 1 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature1 += std::stof(str3);
            mintemperature1 += std::stof(str4);
            rainfall1 += std::stof(str5);
            rainfallchance1 = std::stof(str5);
            avgwindspeed1 += std::stof(str6);
            if(rainfallchance1 > 0){
                rainflag1 = rainflag1 + 10;
            }
        } else if(day == 3642){
            maxtemperature1 = maxtemperature1 / 10;
            mintemperature1 = mintemperature1/ 10;
            rainfall1 = rainfall1 / 10;
            avgwindspeed1 = avgwindspeed1 / 10;
            if(rainflag1 == 0){
                rainflag1 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 1 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature1 << ", Minimum temperature: " << mintemperature1 << ", Rainfall: " << rainfall1 << "(chance: " << rainflag1 << "%), " << "Average wind speed: " << avgwindspeed1 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 2 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature2 += std::stof(str3);
            mintemperature2 += std::stof(str4);
            rainfall2 += std::stof(str5);
            rainfallchance2 = std::stof(str5);
            avgwindspeed2 += std::stof(str6);
            if(rainfallchance2 > 0){
                rainflag2 = rainflag2 + 10;
            }
        } else if(day == 3642){
            maxtemperature2 = maxtemperature2 / 10;
            mintemperature2 = mintemperature2 / 10;
            rainfall2 = rainfall2 / 10;
            avgwindspeed2 = avgwindspeed2 / 10;
            if(rainflag2 == 0){
                rainflag2 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 2 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature2 << ", Minimum temperature: " << mintemperature2 << ", Rainfall: " << rainfall2 << "(chance: " << rainflag2 << "%), " << "Average wind speed: " << avgwindspeed2 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 3 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature3 += std::stof(str3);
            mintemperature3 += std::stof(str4);
            rainfall3 += std::stof(str5);
            rainfallchance3 = std::stof(str5);
            avgwindspeed3 += std::stof(str6);
            if(rainfallchance3 > 0){
                rainflag3 = rainflag3 + 10;
            }
        } else if(day == 3642){
            maxtemperature3 = maxtemperature3 / 10;
            mintemperature3 = mintemperature3 / 10;
            rainfall3 = rainfall3 / 10;
            avgwindspeed3 = avgwindspeed3 / 10;
            if(rainflag3 == 0){
                rainflag3 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 3 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature3 << ", Minimum temperature: " << mintemperature3 << ", Rainfall: " << rainfall3 << "(chance: " << rainflag3 << "%), " << "Average wind speed: " << avgwindspeed3 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 4 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature4 += std::stof(str3);
            mintemperature4 += std::stof(str4);
            rainfall4 += std::stof(str5);
            rainfallchance4 = std::stof(str5);
            avgwindspeed4 += std::stof(str6);
            if(rainfallchance4 > 0){
                rainflag4 = rainflag4 + 10;
            }
        } else if(day == 3642){
            maxtemperature4 = maxtemperature4 / 10;
            mintemperature4 = mintemperature4 / 10;
            rainfall4 = rainfall4 / 10;
            avgwindspeed4 = avgwindspeed4 / 10;
            if(rainflag4 == 0){
                rainflag4 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 4 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature4 << ", Minimum temperature: " << mintemperature4 << ", Rainfall: " << rainfall4 << "(chance: " << rainflag4 << "%), " << "Average wind speed: " << avgwindspeed4 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 5 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature5 += std::stof(str3);
            mintemperature5 += std::stof(str4);
            rainfall5 += std::stof(str5);
            rainfallchance5 = std::stof(str5);
            avgwindspeed5 += std::stof(str6);
            if(rainfallchance5 > 0){
                rainflag5 = rainflag5 + 10;
            }
        } else if(day == 3642){
            maxtemperature5 = maxtemperature5 / 10;
            mintemperature5 = mintemperature5 / 10;
            rainfall5 = rainfall5 / 10;
            avgwindspeed5 = avgwindspeed5 / 10;
            if(rainflag5 == 0){
                rainflag5 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 5 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature5 << ", Minimum temperature: " << mintemperature5 << ", Rainfall: " << rainfall5 << "(chance: " << rainflag5 << "%), " << "Average wind speed: " << avgwindspeed5 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 6 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature6 += std::stof(str3);
            mintemperature6 += std::stof(str4);
            rainfall6 += std::stof(str5);
            rainfallchance6 = std::stof(str5);
            avgwindspeed6 += std::stof(str6);
            if(rainfallchance6 > 0){
                rainflag6 = rainflag6 + 10;
            }
        } else if(day == 3642){
            maxtemperature6 = maxtemperature6 / 10;
            mintemperature6 = mintemperature6 / 10;
            rainfall6 = rainfall6 / 10;
            avgwindspeed6 = avgwindspeed6 / 10;
            if(rainflag6 == 0){
                rainflag6 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 6 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature6 << ", Minimum temperature: " << mintemperature6 << ", Rainfall: " << rainfall6 << "(chance: " << rainflag6 << "%), " << "Average wind speed: " << avgwindspeed6 << std::endl;
        }
        day++;
    }
    if(flag == 0){
        if(t.tm_mon == month && t.tm_mday + 1 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature += std::stof(str3);
            mintemperature += std::stof(str4);
            rainfall += std::stof(str5);
            rainfallchance = std::stof(str5);
            avgwindspeed += std::stof(str6);
            if(rainfallchance > 0){
                rainflag = rainflag + 10;
            }
        } else if(day == 3642){
            maxtemperature = maxtemperature / 10;
            mintemperature = mintemperature / 10;
            rainfall = rainfall / 10;
            avgwindspeed = avgwindspeed / 10;
            if(rainflag == 0){
                rainflag = 2;
            }
            std::cout << "Date: " << t.tm_mday + 1 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature << ", Minimum temperature: " << mintemperature << ", Rainfall: " << rainfall << "(chance: " << rainflag << "%), " << "Average wind speed: " << avgwindspeed << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 2 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature1 += std::stof(str3);
            mintemperature1 += std::stof(str4);
            rainfall1 += std::stof(str5);
            rainfallchance1 = std::stof(str5);
            avgwindspeed1 += std::stof(str6);
            if(rainfallchance1 > 0){
                rainflag1 = rainflag1 + 10;
            }
        } else if(day == 3642){
            maxtemperature1 = maxtemperature1 / 10;
            mintemperature1 = mintemperature1/ 10;
            rainfall1 = rainfall1 / 10;
            avgwindspeed1 = avgwindspeed1 / 10;
            if(rainflag1 == 0){
                rainflag1 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 2 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature1 << ", Minimum temperature: " << mintemperature1 << ", Rainfall: " << rainfall1 << "(chance: " << rainflag1 << "%), " << "Average wind speed: " << avgwindspeed1 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 3 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature2 += std::stof(str3);
            mintemperature2 += std::stof(str4);
            rainfall2 += std::stof(str5);
            rainfallchance2 = std::stof(str5);
            avgwindspeed2 += std::stof(str6);
            if(rainfallchance2 > 0){
                rainflag2 = rainflag2 + 10;
            }
        } else if(day == 3642){
            maxtemperature2 = maxtemperature2 / 10;
            mintemperature2 = mintemperature2 / 10;
            rainfall2 = rainfall2 / 10;
            avgwindspeed2 = avgwindspeed2 / 10;
            if(rainflag2 == 0){
                rainflag2 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 3 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature2 << ", Minimum temperature: " << mintemperature2 << ", Rainfall: " << rainfall2 << "(chance: " << rainflag2 << "%), " << "Average wind speed: " << avgwindspeed2 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 4 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature3 += std::stof(str3);
            mintemperature3 += std::stof(str4);
            rainfall3 += std::stof(str5);
            rainfallchance3 = std::stof(str5);
            avgwindspeed3 += std::stof(str6);
            if(rainfallchance3 > 0){
                rainflag3 = rainflag3 + 10;
            }
        } else if(day == 3642){
            maxtemperature3 = maxtemperature3 / 10;
            mintemperature3 = mintemperature3 / 10;
            rainfall3 = rainfall3 / 10;
            avgwindspeed3 = avgwindspeed3 / 10;
            if(rainflag3 == 0){
                rainflag3 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 4 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature3 << ", Minimum temperature: " << mintemperature3 << ", Rainfall: " << rainfall3 << "(chance: " << rainflag3 << "%), " << "Average wind speed: " << avgwindspeed3 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 5 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature4 += std::stof(str3);
            mintemperature4 += std::stof(str4);
            rainfall4 += std::stof(str5);
            rainfallchance4 = std::stof(str5);
            avgwindspeed4 += std::stof(str6);
            if(rainfallchance4 > 0){
                rainflag4 = rainflag4 + 10;
            }
        } else if(day == 3642){
            maxtemperature4 = maxtemperature4 / 10;
            mintemperature4 = mintemperature4 / 10;
            rainfall4 = rainfall4 / 10;
            avgwindspeed4 = avgwindspeed4 / 10;
            if(rainflag4 == 0){
                rainflag4 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 5 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature4 << ", Minimum temperature: " << mintemperature4 << ", Rainfall: " << rainfall4 << "(chance: " << rainflag4 << "%), " << "Average wind speed: " << avgwindspeed4 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 6 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature5 += std::stof(str3);
            mintemperature5 += std::stof(str4);
            rainfall5 += std::stof(str5);
            rainfallchance5 = std::stof(str5);
            avgwindspeed5 += std::stof(str6);
            if(rainfallchance5 > 0){
                rainflag5 = rainflag5 + 10;
            }
        } else if(day == 3642){
            maxtemperature5 = maxtemperature5 / 10;
            mintemperature5 = mintemperature5 / 10;
            rainfall5 = rainfall5 / 10;
            avgwindspeed5 = avgwindspeed5 / 10;
            if(rainflag5 == 0){
                rainflag5 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 6 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature5 << ", Minimum temperature: " << mintemperature5 << ", Rainfall: " << rainfall5 << "(chance: " << rainflag5 << "%), " << "Average wind speed: " << avgwindspeed5 << std::endl;
        }
        if(t.tm_mon == month && t.tm_mday + 7 == date){
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 4){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 3){
                        str3 += str[b];
                    } else if(count == 4){
                        break;
                    }
                }
            }
            count = 0;
            std::string str4;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 5){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 4){
                        str4 += str[b];
                    } else if(count == 5){
                        break;
                    }
                }
            }
            count = 0;
            std::string str5;
            for(int b = 0; b < (int)strlen(str); b++){
                if(count != 7){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 6){
                        str5 += str[b];
                    } else if(count == 7){
                        break;
                    }
                }
            }
            count = 0;
            std::string str6;
            for(int b = 0; b < (int)strlen(str); b++){
                    if(str[b] == ','){
                        count++;
                    } else if(count == 9){
                        str6 += str[b];
                    } else if(str[b] == '\n'){
                        break;
                    }
            }
            count = 0;
            maxtemperature6 += std::stof(str3);
            mintemperature6 += std::stof(str4);
            rainfall6 += std::stof(str5);
            rainfallchance6 = std::stof(str5);
            avgwindspeed6 += std::stof(str6);
            if(rainfallchance6 > 0){
                rainflag6 = rainflag6 + 10;
            }
        } else if(day == 3642){
            maxtemperature6 = maxtemperature6 / 10;
            mintemperature6 = mintemperature6 / 10;
            rainfall6 = rainfall6 / 10;
            avgwindspeed6 = avgwindspeed6 / 10;
            if(rainflag6 == 0){
                rainflag6 = 2;
            }
            std::cout << "Date: " << t.tm_mday + 7 << '.' << t.tm_mon << '.' << t.tm_year << ", " << "Maximum temperature: " << std::setprecision(3) << maxtemperature6 << ", Minimum temperature: " << mintemperature6 << ", Rainfall: " << rainfall6 << "(chance: " << rainflag6 << "%), " << "Average wind speed: " << avgwindspeed6 << std::endl;
        }
        day++;
    }
}
    fclose(fp);
};

int main()
{
    int n;
    std::cout << "What do you want to choose?" << std::endl << "1 - maximum temperature" << std::endl << "2 - average temperature" << std::endl << "3 - minimum temperature" << std::endl << "4 - rainfall" << std::endl << "5 - maximum windspeed" << std::endl << "6 - average windspeed" << std::endl << "7 - calm" << std::endl << "8 - weather prediction" << std::endl;
    std::cin >> n;
    if(n == 1){
        maxtemperature();
    } else if(n == 2){
        avgtemperature();
    } else if(n == 3){
        mintemperature();
    } else if(n == 4){
        rainfall();
    } else if(n == 5){
        maxwindspeed();
    } else if(n == 6){
        changewind();
    } else if(n == 7){
        calm();
    } else if(n == 8){
        prediction();
    } else{
        std::cout << "Incorrect request!" << std::endl;
    }
    return 0;
}