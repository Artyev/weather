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
    while(fgets(str, 255, fp) != NULL){
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
        }
        if(day == 172){
            std::cout << "Second part of 2013 year, " << "Minimum temperature:" << " " << std::setprecision(2) << min << std::endl;
            min = 38.6;
        } else if(day == 537){
            std::cout << "Year: 2014, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 902){
            std::cout << "Year: 2015, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 1267){
            std::cout << "Year: 2016, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 1632){
            std::cout << "Year: 2017, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 1997){
            std::cout << "Year: 2018, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 2352){
            std::cout << "Year: 2019, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 2727){
            std::cout << "Year: 2020, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 3092){
            std::cout << "Year: 2021, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 3457){
            std::cout << "Year: 2022, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
        } else if(day == 3642){
            std::cout << "First part of 2023 year, " << "Minimum temperature:" << " " << min << std::endl;
            min = 38.6;
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
    while(fgets(str, 255, fp) != NULL){
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
        }
        if(day == 172){
            std::cout << "Second part of 2013 year, " << "Maximum temperature:" << " " << std::setprecision(3) << max << std::endl;
            max = 0;
        } else if(day == 537){
            std::cout << "Year: 2014, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 902){
            std::cout << "Year: 2015, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 1267){
            std::cout << "Year: 2016, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 1632){
            std::cout << "Year: 2017, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 1997){
            std::cout << "Year: 2018, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 2352){
            std::cout << "Year: 2019, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 2727){
            std::cout << "Year: 2020, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 3092){
            std::cout << "Year: 2021, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 3457){
            std::cout << "Year: 2022, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
        } else if(day == 3642){
            std::cout << "First part of 2023 year, " << "Maximum temperature:" << " " << max << std::endl;
            max = 0;
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
    maxtemperature();
    return 0;
}