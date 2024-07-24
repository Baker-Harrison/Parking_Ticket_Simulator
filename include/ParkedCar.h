#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

class ParkedCar {
private:
	std::string make;
	std::string model;
	std::string color;
	std::string licenseNumber;
	int parkedMinutes;

public:
	// Constructor
	ParkedCar(const std::string& make, const std::string& model, const std::string& color, const std::string& licenseNumber, int parkedMinutes);

	// Getter methods
	std::string getMake() const;
	std::string getModel() const;
	std::string getColor() const;
	std::string getLicenseNumber() const;
	int getParkedMinutes() const;
};

#endif // PARKEDCAR_H
