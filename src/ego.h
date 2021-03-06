#ifndef EGO_H
#define EGO_H


#include "constants.h"

// jwdunn1 [00:34]
// The "collider" on the car measures 4.47x2.43


struct sEgo
{
    double x; // cartesian x coordinate
    double y; // cartesian y coordinate
    double s; // frenet s coordinate
    double d; // frenet d coordinate
    double yaw; // yaw of ego vehicle
    double speed; // speed of ego vehicle

    sEgo();

    sEgo(double x, double y, double s, double d, double yaw, double speed);

    eLaneName LaneName() const;
};

std::string ToString(const sEgo& ego);

#endif // EGO_H
