#ifndef TRANSFERMARKET_H
#define TRANSFERMARKET_H
#include "player.h"

class transfermarket
{
public:
    transfermarket();
    std::vector<player> get_players() const;
    void set_players(std::vector<player> players);

private:
    std::vector<player> m_players;

};

#endif // TRANSFERMARKET_H
