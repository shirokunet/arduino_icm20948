#ifndef _AHRSALOGRITHMS_H_
#define _AHRSALOGRITHMS_H_

#include <Arduino.h>

bool MadgwickQuaternionUpdate(double ax, double ay, double az, double gx, double gy,
                              double gz, double mx, double my, double mz,
                              double deltat);
bool MahonyQuaternionUpdate(double ax, double ay, double az, double gx, double gy,
                            double gz, double mx, double my, double mz,
                            double deltat);
const double * getQ();

#endif // _AHRSALOGRITHMS_H_
