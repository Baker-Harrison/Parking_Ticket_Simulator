#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
	int purchasedMinutes;

public:
	// Constructor
	ParkingMeter(int purchasedMinutes);

	// Getter method
	int getPurchasedMinutes() const;
};

#endif // PARKINGMETER_H
