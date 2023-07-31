#include <iostream>
#include <cstring>
#include <iomanip>

struct weather
{
    char date[31];
    float mintemperature;
    float maxtemperature;
    float avgtemperature;
    float maxwindspeed;
    float avgwindspeed;
    float minwindspeed;
    float rainfall;
};

void test()
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
    int flag = 0;
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
    int border = 32;
    int border1 = 0;
    float minwind = 0;
    int tmp = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        border = border + 1;
        border1 = border; // 42
        for(; border < (int)strlen(str); border++){
            if(str[border] == ','){
                break;
            } else{
                border1++;
            }
        }
        border1 = border1 + 1; // 52
        border = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            } else{
                border++;
            }
        }
        border1 = border1 + 1; // 61
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        border1 = border1 + 1; // 65
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        border1 = border1 + 1;
        tmp = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        std::string str1;
        for(; tmp < border1; tmp++) {
            str1 += str[tmp];
        }
        database[day].minwindspeed = std::stof(str1);
        border = 32;
        border1 = 0;
        tmp = 0;
        minwind = database[day].minwindspeed;
        if(minwind <= 3.5){
            for(int a = 0; a < 31; a++){
                std::cout << database[day].date[a];
            }
            std::cout << ", Speed: " << (minwind * 1000) / 3600 << "m/s" << std::endl;
        }
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
    int border = 32;
    int border1 = 0;
    float maxwind = 0;
    int flag = 0;
    int tmp = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        border = border + 1;
        border1 = border; // 42
        for(; border < (int)strlen(str); border++){
            if(str[border] == ','){
                break;
            } else{
                border1++;
            }
        }
        border1 = border1 + 1; // 52
        border = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            } else{
                border++;
            }
        }
        border1 = border1 + 1; // 61
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        border1 = border1 + 1; // 65
        tmp = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        std::string str1;
        for(; tmp < border1; tmp++) {
            str1 += str[tmp];
        }
        database[day].maxwindspeed = std::stof(str1);
        border = 32;
        border1 = 0;
        tmp = 0;
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
    int border = 32;
    int border1 = 0;
    float rainfall = 0;
    int flag = 0;
    int tmp = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        border = border + 1;
        border1 = border; // 42
        for(; border < (int)strlen(str); border++){
            if(str[border] == ','){
                break;
            } else{
                border1++;
            }
        }
        border1 = border1 + 1; // 52
        border = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            } else{
                border++;
            }
        }
        border1 = border1 + 1; // 61
        tmp = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            }
        }
        std::string str1;
        for(; tmp < border1; tmp++) {
            str1 += str[tmp];
        }
        database[day].rainfall = std::stof(str1);
        border = 32;
        border1 = 0;
        tmp = 0;
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
    int border = 32;
    int border1 = 0;
    float avg = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        border = border + 1;
        border1 = border;
        for(; border < (int)strlen(str); border++){
            if(str[border] == ','){
                break;
            } else{
                border1++;
            }
        }
        border1 = border1 + 1;
        border = border1;
        for(; border1 < (int)strlen(str); border1++){
            if(str[border1] == ','){
                break;
            } else{
                border1++;
            }
        }
        std::string str1;
        for(; border < border1; border++) {
            str1 += str[border];
        }
        database[day].avgtemperature = std::stof(str1);
        border = 32;
        border1 = 0;
        avg += database[day].avgtemperature;
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

void mintemperature()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float min = 38.6;
    int border = 32;
    int border1 = 0;
    int tmp = 0;
    int flag = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        border1 = border;
        tmp = border;
        for(; border < (int)strlen(str); border++){
            if(str[border + 1] == ','){
                break;
            } else{
                border1++;
            }
        }
        border = tmp;
        std::string str1;
        for(; tmp < border1; tmp++) {
            str1 += str[tmp + 1];
        }
        database[day].mintemperature = std::stof(str1);
        border = 32;
        border1 = 0;
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

void maxtemperature()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    weather database[3643];
    char str[255];
    int day = 0;
    float max = 0;
    int border = 32;
    int flag = 0;
    while(fgets(str, 255, fp) != NULL){
        for(int a = 0; a < 31; a++) {
            database[day].date[a] = str[a];
        }
        for(int b = 32; b < (int)strlen(str); b++){
            if(str[b] == ','){
                break;
            } else{
                border++;
            }
        }
        std::string str1;
        for(int p = 32; p < border; p++){
            str1 += str[p];
        }
        database[day].maxtemperature = std::stof(str1);
        border = 32;
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
    float max = 0;
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

int main()
{
    calm();
    return 0;
}