#include "transfermarket.h"

transfermarket::transfermarket()
{

}

std::vector<player> transfermarket::get_players() const{
    return m_players;
}

void transfermarket::set_players(std::vector<player> players){
    m_players=players;
}

