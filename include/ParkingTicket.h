#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"

class ParkingTicket {
private:
	ParkedCar car;
	double fine;
	std::string officerName;
	int badgeNumber;
	int timeIllegallyParkedMinutes;

public:
	// Constructor
	ParkingTicket(const ParkedCar& car, double fine, const std::string& officerName, int badgeNumber, int timeIllegallyParkedMinutes);

	// Overloaded insertion operator
	friend std::ostream& operator<<(std::ostream& strm, const ParkingTicket& ticket);

	// Static function to calculate fine
	static double calcFine(int minutes);

	// Getter methods
	std::string getCarMake() const;
	std::string getCarModel() const;
	std::string getCarColor() const;
	std::string getCarLicenseNumber() const;
	double getFine() const;
	std::string getOfficerName() const;
	int getBadgeNumber() const;
	int getTimeIllegallyParkedMinutes() const;
};

#endif // PARKINGTICKET_H
