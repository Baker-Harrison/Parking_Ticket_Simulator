#include "../include/ParkingTicket.h"
#include <iostream>
#include <iomanip>

// Constructor implementation
ParkingTicket::ParkingTicket(const ParkedCar& car, double fine, const std::string& officerName, int badgeNumber, int timeIllegallyParkedMinutes)
		: car(car), fine(fine), officerName(officerName), badgeNumber(badgeNumber), timeIllegallyParkedMinutes(timeIllegallyParkedMinutes) {}

// Static function to calculate fine
double ParkingTicket::calcFine(int minutes) {
	int hours = (minutes + 59) / 60; // Round up to the nearest hour
	return 25.0 + (hours - 1) * 10.0;
}

// Overloaded insertion operator
std::ostream& operator<<(std::ostream& strm, const ParkingTicket& ticket) {
	strm << "Ticket\n"
	     << "Make: " << ticket.car.getMake() << "\n"
	     << "Model: " << ticket.car.getModel() << "\n"
	     << "Color: " << ticket.car.getColor() << "\n"
	     << "License: " << ticket.car.getLicenseNumber() << "\n"
	     << "Officer Name: " << ticket.officerName << "\n"
	     << "Officer Badge: " << ticket.badgeNumber << "\n"
	     << "Time Illegally Parked: " << ticket.timeIllegallyParkedMinutes / 60 << " "
	     << std::setw(2) << std::setfill('0') << ticket.timeIllegallyParkedMinutes % 60 << "\n"
	     << "Fine: $" << std::fixed << std::setprecision(2) << ticket.fine << "\n";
	return strm;
}

// Getter methods implementation
std::string ParkingTicket::getCarMake() const {
	return car.getMake();
}

std::string ParkingTicket::getCarModel() const {
	return car.getModel();
}

std::string ParkingTicket::getCarColor() const {
	return car.getColor();
}

std::string ParkingTicket::getCarLicenseNumber() const {
	return car.getLicenseNumber();
}

double ParkingTicket::getFine() const {
	return fine;
}

std::string ParkingTicket::getOfficerName() const {
	return officerName;
}

int ParkingTicket::getBadgeNumber() const {
	return badgeNumber;
}

int ParkingTicket::getTimeIllegallyParkedMinutes() const {
	return timeIllegallyParkedMinutes;
}
