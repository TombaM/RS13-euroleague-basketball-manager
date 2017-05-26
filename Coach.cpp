#include "Coach.h"
#include <iostream>

/* Constructor: */
Coach::Coach()
    : m_name(" "), m_surname(" "), m_nationality(" "), m_team(" ")
{

}

Coach::Coach(
  std::string name,
  std::string surname,
  std::string nationality,
  std::string team
)
    : m_name(name), m_surname(surname), m_nationality(nationality), m_team(team)
{

}

/* Getters: */
std::string Coach::get_name() const
{
  return m_name;
}

std::string Coach::get_surname() const
{
  return m_surname;
}

std::string Coach::get_nationality() const
{
  return m_nationality;
}

std::string Coach::get_team() const
{
    return m_team;
}


/* Setters: */
void Coach::set_team(std::string team)
{
    m_team = team;
}

void Coach::set_name(std::string name)
{
    m_name = name;
}

void Coach::set_surname(std::string surname)
{
    m_surname = surname;
}

void Coach::set_nationality(std::string nationality)
{
    m_nationality = nationality;
}

//Coach::ostream &operator << (ostream &os, Coach &c)
//{
 // os << "Name: " << c.get_name() << "\n"
 // << "Surname: " << c.get_surame() << "\n"
 // << "Nationality: " << c.get_nationality() << "\n"
 // << "Age: " << c.get_age() << "\n"
//}
