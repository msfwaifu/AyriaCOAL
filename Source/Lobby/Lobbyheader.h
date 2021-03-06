/*
    Initial author: (https://github.com/)Convery for Ayria.se
    License: GPL 2.0
    Started: 2016-10-10
    Notes:
        Contains all information other modules need.
*/

#pragma once
#include <cstdint>
#include "../STDInclude.h"
#include "../Auth/Authheader.h"
#include "../Shared/Userticket.h"

struct Lobbyclient_t
{
    size_t Socket;
    bool Authenticated;
    Ticket_t Accountinfo;
};

namespace Lobby
{
    // Get the default Lobby_t struct.
    Lobby_t *GetLobby();
}
