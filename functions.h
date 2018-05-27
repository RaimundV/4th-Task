//
// Created by 123 on 2018-03-31.
//

#ifndef DARBAS2_FUNCTIONS_H
#define DARBAS2_FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <random>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <vector>

#include "vector.h"

/**
 * class that stores student information
 * @param name      Stores the students' name
 * @param surname   Stores the students' surname
 * @param Hgrade    Stores the students' homework grades
 * @param Egrade    Stores the students' exam grade
 * @param type      Stores the students' type (winner or loser)
 */
class Student
{
private:
    std::string name;
    std::string surname;
    std::vector<int> Hgrade;
    int Egrade;
    std::string type;
public:
    /**
     * default constructor
     */
    Student () : name(""), surname(""), Hgrade(0), Egrade(0), type("") {};
    /**
     * Constructor with 2 iterators for copying student information
     * @param it
     * @param it2
     */
    Student (std::vector<Student>::iterator it , std::vector<Student>::iterator it2) {
        for(auto iter = it; iter != it2; iter++)
        {
            Student tmp = *iter;
            *this = tmp;
        }
    };
    /**
     * A getter that returns Students' type
     * @return
     */
    inline std::string typeo()        const { return type; };
    /**
     * A getter that returns Students' name
     * @return
     */
    inline std::string nameo()        const { return name; };
    /**
     * A getter that returns Students' surname
     * @return
     */
    inline std::string surnameo()     const { return surname; };
    /**
     * A getter that returns Students' homework grade
     * @param i
     * @return
     */
    inline int Hgradeo(int i)         const { return Hgrade[i]; };
    /**
     * A getter that returns Students' exam grade
     * @return
     */
    inline int Egradeo()              const { return Egrade; };

    /**
     * A setter that sets the Students' name
     * @param sname
     */
    void namei(std::string& sname)       { name = sname; };
    /**
     * A setter that sets the Students' surname
     * @param ssurname
     */
    void surnamei(std::string& ssurname) { surname = ssurname; };
    /**
     * A setter that sets the Students' homework grade
     * @param g
     */
    void Hgradei(int g)                  { Hgrade.push_back(g); };
    /**
     * A setter that sets the Students' exam grade
     * @param g
     */
    void Egradei(int g)                  { Egrade = g; };
    /**
     * A setter that sets the Students' type
     * @param stype
     */
    void typei(std::string& stype)       { type = stype; };

    /**
     * output operator that outputs all of the students' information
     * @param output
     * @param S
     * @return
     */
    friend std::ostream &operator<<( std::ostream &output, const Student &S )
    {
        output << S.name << " " << S.surname << " ";
        for (size_t i = 0; i < 5; i ++)
        {
            output << S.Hgrade[i] << " ";
        }
        output << S.Egrade << " " << S.type;
        return output;
    }

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator<(Student b)
    {
        return typeo() < b.typeo();
    }

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator>(Student b)
    {
        return typeo() > b.typeo();
    }

    /**
     * a logic operator that checks which type is it
     * @param b
     * @return
     */
    bool operator==(Student b)
    {
        return typeo() == b.typeo();
    }
};
/**
 * Used for checking performance when pushing students to 2 diffeent contianers losers and winners
 * @param quantity      How many Students are there
 * @param k             input file name
 * @param w             output file name
 */
void ContainerV(size_t quantity, std::string k, std::string w);
/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container
 * @param quantity      How many Students are there
 * @param k             input file name
 * @param w             output file name
 */
void ContainerV2(size_t quantity, std::string k, std::string w);
/**
 * Used for checking performance when pushing winners to another container and erasing them from the main container, but without using
 * algorithms
 * @param quantity      How many Students are there
 * @param k             input file name
 * @param w             output file name
 */
void ContainerV2Unoptimized(size_t quantity, std::string k, std::string w);
/**
 * Used for erase and remove_if
 * @param s Student container
 * @return
 */
bool IsWinner(const Student& s);
void MyVectorTest(size_t quantity, std::string k, std::string w);
void MyVectorTest2(size_t quantity, std::string k, std::string w);
void MyVectorTestUnoptimiazed(size_t quantity, std::string k, std::string w);


#endif //DARBAS2_FUNCTIONS_H
