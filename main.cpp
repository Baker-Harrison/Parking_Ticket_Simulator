#include <iostream>
#include "include/ParkedCar.h"
#include "include/ParkingMeter.h"
#include "include/ParkingTicket.h"
#include "include/PoliceOfficer.h"

int main() {
	// Create a parked car
	ParkedCar car("Chevy", "Malibu", "White", "375 2DH", 120);

	// Create a parking meter with 120 minutes of parking time
	ParkingMeter meter(120);

	// Create a police officer
	PoliceOfficer officer("Jones", 32);

	// Inspect the car
	ParkingTicket ticket = officer.inspectCar(car, meter);

	// Output the ticket details
	if (ticket.getFine() > 0) {
		std::cout << ticket;
	} else {
		std::cout << "No ticket issued.\n";
	}

	return 0;
}
