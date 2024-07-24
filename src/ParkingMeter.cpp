//
// Created by Harrison Baker on 7/23/24.
//

#include "../include/ParkingMeter.h"

// Constructor implementation
ParkingMeter::ParkingMeter(int purchasedMinutes) : purchasedMinutes(purchasedMinutes) {}

// Getter method implementation
int ParkingMeter::getPurchasedMinutes() const {
	return purchasedMinutes;
}