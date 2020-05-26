/*
 * @Author: Your name
 * @Date:   2020-04-18 14:13:12
 * @Last Modified by:   Your name
 * @Last Modified time: 2020-05-01 10:47:30
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define nameFile "data.txt"
#define canal_1 "A1"
#define canal_2 "A2"
#define canal_3 "V1"
#define canal_4 "V2"
#define index_1 0
#define index_2 1
#define index_3 2
#define index_4 3
void load(std::string data, std::vector<std::vector<std::string>> &primary);
void SeeResult();
int main()
{
    SeeResult();
    return 0;
}
void SeeResult()
{
    std::cout << "Start Program\n";
    std::vector<std::vector<std::string>> primary;
    primary.resize(4);
    load(nameFile, primary);
    std::cout << "nr"
              << " | " 
              << canal_1
              << "    |  "
              << canal_2
              << "   |   "
              << canal_3
              << "  |   "
              << canal_4
              << "  |\n";

    for (int j = 0; j < primary[0].size(); j++)
    {
        std::cout << j
                  << " | "
                  << primary[0][j]
                  << " | "
                  << primary[1][j]
                  << " | "
                  << primary[2][j]
                  << " | "
                  << primary[3][j]
                  << " |\n";
    }
}
void load(std::string data, std::vector<std::vector<std::string>> &primary)
{
    std::string temp;
    std::ifstream file(data.c_str());
    if (file.good())
    {
        while (!file.eof())
        {
            std::getline(file, temp);
            if (temp.find(canal_1) != std::string::npos)
            {
                temp = temp.substr(3);
                primary[index_1].push_back(temp);
            }
            else if (temp.find(canal_2) != std::string::npos)
            {
                temp = temp.substr(3);
                primary[index_2].push_back(temp);
            }
            else if (temp.find(canal_3) != std::string::npos)
            {
                temp = temp.substr(3);
                primary[index_3].push_back(temp);
            }
            else if (temp.find(canal_3) != std::string::npos)
            {
                temp = temp.substr(3);
                primary[index_3].push_back(temp);
            }
            else if (temp.find(canal_4) != std::string::npos)
            {
                temp = temp.substr(3);
                primary[index_4].push_back(temp);
            }
        }
        file.close();
    }
}