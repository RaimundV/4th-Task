//
// Created by 123 on 2018-05-23.
//

#include "vector.h"
#include "functions.h"

void MyVectorTest(size_t quantity, std::string k, std::string w)
{
    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

    Vector<Student> s;
    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try
    {
        if(file){}
        else {throw 20;}
    }
    catch(...)
    {
        std::cout<< "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        s.push_back(Student());
        file >> name >> surname;
        s[i].namei(name);
        s[i].surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s[i].Hgradei(grade);
            vidurkis += grade;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        s[i].typei(type);
        file >> grade2;
        s[i].Egradei(grade2);
    }
    Vector<Student> winner;
    Vector<Student> loser;

    for(auto i = 0; i < s.size(); i++)
    {
        if(s[i].typeo() == "Winner")
        {
            winner.push_back(s[i]);
        }
        else
        {
            loser.push_back(s[i]);
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(auto i = 0; i < loser.size(); i++)
    {
        input << loser[i] << std:: endl;
    }
    for(auto i = 0; i < winner.size(); i++)
    {
        input << winner[i] << std::endl;
    }
    input.close();
    Vector<Student> d;

}

void MyVectorTest2(size_t quantity, std::string k, std::string w)
{
    Vector<Student> s;

    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;
    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try
    {
        if(file){}
        else {throw 20;}
    }
    catch(...)
    {
        std::cout<< "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++)
    {
        s.push_back(Student());
        file >> name >> surname;
        s[i].namei(name);
        s[i].surnamei(surname);
        vidurkis = 0;
        for(size_t j = 0; j < 5; j++)
        {
            file >> grade;
            s[i].Hgradei(grade);
            vidurkis += grade;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        s[i].typei(type);
        file >> grade2;
        s[i].Egradei(grade2);
    }
    Vector<Student> winner;

    for(auto i = 0; i < s.size(); i++)
    {
        if(s[i].typeo() == "Winner")
        {
            winner.push_back(s[i]);
        }
    }
    s.erase(std::remove_if(s.begin(), s.end(), IsWinner), s.end());
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count()/1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for(auto i = 0; i < s.size(); i++)
    {
        input << s[i] << std::endl;
    }
    for(auto i = 0; i < winner.size(); i++)
    {
        input << winner[i] << std::endl;
    }
    input.close();

}

void MyVectorTestUnoptimiazed(size_t quantity, std::string k, std::string w) {
    Vector<Student> s;
    Vector<Student> winner;

    std::string name;
    std::string surname;
    std::string type;
    int grade2;
    int grade;

    using namespace std::chrono;
    std::ifstream file;
    file.open(k);
    try {
        if (file) {}
        else { throw 20; }
    }
    catch (...) {
        std::cout << "File " << k << " No such file exists" << std::endl;
        return;
    }
    double vidurkis;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (size_t i = 0; i < quantity; i++) {
        s.push_back(Student());
        file >> name >> surname;
        s[i].namei(name);
        s[i].surnamei(surname);
        vidurkis = 0;
        for (size_t j = 0; j < 5; j++) {
            file >> grade;
            s[i].Hgradei(grade);
            vidurkis += grade;
        }

        type = vidurkis / 5.0 >= 6.0 ? "Winner" : "Loser";
        s[i].typei(type);
        file >> grade2;
        s[i].Egradei(grade2);
    }
    size_t j = 0;
    while (j != s.size()) {
        if (s[j].typeo() == "Winner") {
            winner.push_back(s[j]);
            s.erase(s.begin() + j);
        } else {
            j++;
        }
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, std::milli> time_span = t2 - t1;
    std::cout << k << " " << time_span.count() / 1000 << " seconds" << std::endl;
    file.close();
    std::ofstream input;
    input.open(w);
    for (auto i = 0; i < s.size(); i++) {
        input << s[i] << std::endl;
    }
    for (auto i = 0; i < winner.size(); i++) {
        input << winner[i] << std::endl;
    }
    input.close();
}