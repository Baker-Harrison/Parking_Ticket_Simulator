#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

class PoliceOfficer {
private:
	std::string name;
	int badgeNumber;

public:
	// Constructor
	PoliceOfficer(const std::string& name, int badgeNumber);

	// Method to inspect a parked car and parking meter, and issue a ticket if necessary
	ParkingTicket inspectCar(const ParkedCar& car, const ParkingMeter& meter) const;
};

#endif // POLICEOFFICER_H
