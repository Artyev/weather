#include <iostream>
#include <cstring>

struct weather
{
    char date[255];
    std::string maximum_temperature;
    std::string average_temperature;
    std::string minimum_temperature;
    std::string rainfall;
    std::string maximum_windspeed;
    std::string average_windspeed;
    std::string minimum_windspeed;
};

// void dates()
// {
//     FILE* fp;
//     fp = fopen("dataexport.csv", "r");
//     char str[255];
//     int day = 0;
//     int day1 = 0;
//     int p = 32;
//     weather database[3643];
//     while(fgets(str, 255, fp) != NULL) {
//             for(int b = 0; b < 31; b++) {
//                 database[day].date[b] = str[b];
//             }
//             day++;
//             for(int c = 32; c < (int)strlen(str); c++) {
//                 if(str[c] == ','){
//                     break;
//                 } else {
//                     p++;
//                 }
//         }
//         for(int o = 32; o < p; o++){
//             database[day1].average_temperature[o] = str[o];
//             std::cout << database[day1].average_temperature[o];
//         }
//         std::cout << std::endl;
//         day1++;
//         p = 32;
//     }
//     day = 0;
//     fclose(fp);
//     fp = fopen("dataexport.csv", "r");
//     while(fgets(str, 255, fp) != NULL) {
//         for(int c = 0; c < 31; c++) {
//             std::cout << database[day].date[c];
//         }
//         std::cout << std::endl;
//         day++;
//     }
// };

void max()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    char str[255];
    int day = 0;
    weather database[3643];
    while(fgets(str, 255, fp) != NULL){
        for(int c = 0; c < 31; c++){
            std::cout << database[day].maximum_temperature[c];
        }
        std::cout << std::endl;
        day++;
    }
    fclose(fp);
}

void dates()
{
    FILE* fp;
    fp = fopen("dataexport.csv", "r");
    char str[255];
    int day = 0;
    int day1 = 0;
    int p = 32;
    char max[2];
    weather database[3643];
    while(fgets(str, 255, fp) != NULL) {
            for(int b = 0; b < 31; b++) {
                database[day].date[b] = str[b];
            }
            day++;
            for(int c = 32; c < (int)strlen(str); c++) {
                if(str[c] == ','){
                    break;
                } else {
                    p++;
                }
        }
        for(int o = 32; o < p; o++){
            database[day1].maximum_temperature[o] = str[o];
            std::cout << database[day1].maximum_temperature[o];
        }
        std::cout << std::endl;
        day1++;
        p = 32;
    }
    day = 0;
    day1 = 0;
    fclose(fp);
    fp = fopen("dataexport.csv", "r");
    while(fgets(str, 255, fp) != NULL){
        for(int o = 32; o < 34; o++){
            if((int)max < database[day1].maximum_temperature[o]){
                (char)max = (int)database[day1].maximum_temperature[o];
            }
            day1++;
        }
    }
    std::cout << max << std::endl;
    // while(fgets(str, 255, fp) != NULL) {
    //     for(int c = 0; c < 31; c++) {
    //         std::cout << database[day].date[c];
    //     }
    //     std::cout << std::endl;
    //     day++;
    // }
    fclose(fp);
};

int main()
{
    dates();
    // max();
    return 0;
}