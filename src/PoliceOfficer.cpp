#include "../include/PoliceOfficer.h"

// Constructor implementation
PoliceOfficer::PoliceOfficer(const std::string& name, int badgeNumber)
		: name(name), badgeNumber(badgeNumber) {}

// Method to inspect a parked car and parking meter, and issue a ticket if necessary
ParkingTicket PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) const {
	int parkedMinutes = car.getParkedMinutes();
	int purchasedMinutes = meter.getPurchasedMinutes();

	if (parkedMinutes > purchasedMinutes) {
		int illegalMinutes = parkedMinutes - purchasedMinutes;
		double fine = ParkingTicket::calcFine(illegalMinutes);

		return ParkingTicket(car, fine, name, badgeNumber, illegalMinutes);
	} else {
		// No ticket issued if the car is not illegally parked
		return ParkingTicket(car, 0.0, "", 0, 0);
	}
}
