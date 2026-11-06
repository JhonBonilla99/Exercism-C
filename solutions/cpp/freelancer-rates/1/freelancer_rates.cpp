// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>
//int hourly_rate = 60;
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    double daily = hourly_rate * 8;
    return daily;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double porcent = before_discount /100;
    
    return before_discount - (porcent * discount);
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double total_nodiscount = (hourly_rate * 8) * 22;
    double porcent_discount = (total_nodiscount / 100) * discount;
    int redondeo = static_cast<int>(std::ceil(total_nodiscount - porcent_discount));
    return redondeo;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double hourly_discount = hourly_rate - ((hourly_rate/100) * discount);
    double dias_sinredondeo = budget / (hourly_discount * 8);
    return static_cast<int>(std::floor(dias_sinredondeo));
}
