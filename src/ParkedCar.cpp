//
// Created by Harrison Baker on 7/23/24.
//

#include "../include/ParkedCar.h"

// Constructor implementation
ParkedCar::ParkedCar(const std::string& make, const std::string& model, const std::string& color, const std::string& licenseNumber, int parkedMinutes)
		: make(make), model(model), color(color), licenseNumber(licenseNumber), parkedMinutes(parkedMinutes) {}

// Getter methods implementation
std::string ParkedCar::getMake() const {
	return make;
}

std::string ParkedCar::getModel() const {
	return model;
}

std::string ParkedCar::getColor() const {
	return color;
}

std::string ParkedCar::getLicenseNumber() const {
	return licenseNumber;
}

int ParkedCar::getParkedMinutes() const {
	return parkedMinutes;
}