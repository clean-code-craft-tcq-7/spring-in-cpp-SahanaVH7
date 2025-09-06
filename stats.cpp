
/*Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
    //Implement statistics here
}*/

#include "stats.h"
#include <limits>   // numeric_limits
#include <cstddef>  // size_t

Stats Statistics::ComputeStatistics(const std::vector<double>& numbers) {
    Stats s;
    if (numbers.empty()) {
        double nan = std::numeric_limits<double>::quiet_NaN();
        s.average = nan;
        s.min = nan;
        s.max = nan;
        return s;
    }

    double sum = 0.0;
    double minv = numbers[0];
    double maxv = numbers[0];

    for (double v : numbers) {
        sum += v;
        if (v < minv) minv = v;
        if (v > maxv) maxv = v;
    }

    s.average = sum / static_cast<double>(numbers.size());
    s.min = minv;
    s.max = maxv;
    return s;
}

