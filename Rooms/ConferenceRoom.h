//
// Created by Eugene on 3/5/2021.
//

#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H


#include "Room.h"

class ConferenceRoom: public Room {
public:
    int numberOfMicrophones;

    ConferenceRoom(int amountOfPlaces, access accessLvl, int numberOfMicrophones);

};


#endif //HW2_CONFERENCEROOM_H
