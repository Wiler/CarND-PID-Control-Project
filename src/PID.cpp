#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_init, double Ki_init, double Kd_init) {
    Kp = Kp_init;
    Kd = Kd_init;
    Ki = Ki_init;

    p_error = 0;
    i_error = 0;
    d_error = 0;
    prev_error = 0;
}

double PID::UpdateError(double cte) {
    p_error = cte;
    i_error += cte;
    d_error = cte - prev_error;
    prev_error = cte;

    return (-Kp * p_error - Kd * d_error - Ki * i_error);
}

double PID::TotalError() {}
