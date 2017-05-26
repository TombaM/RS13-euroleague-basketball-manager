#ifndef COACH_H
#define COACH_H

#include <iostream>

class Coach
{
public:
    Coach();
    Coach(
        std::string name,
        std::string surname,
        std::string nationality,
        std::string team
    );

    std::string get_name() const;
    std::string get_surname() const;
    std::string get_nationality() const;
    std::string get_team() const;

    void set_team(std::string team);
    void set_name(std::string name);
    void set_surname(std::string surname);
    void set_nationality(std::string nationality);
    //friend ostream &operator << (ostream &os, Coach &c);

private:

    std::string m_name;
    std::string m_surname;
    std::string m_nationality;
    std::string m_team;
};

#endif // COACH_H
