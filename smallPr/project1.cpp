#include <iostream>
#include <cstring>

using namespace std;

int RoomsLen = 1;
char Rooms[1][101];

int addRoom(char *buildingName, char *RoomId)
{
    char newArr[RoomsLen + 1][101];

    for (int i = 0; i < RoomsLen; i++)
    {
        strcpy(newArr[i], Rooms[i]);
    }
}

int main()
{
    return 0;
}
