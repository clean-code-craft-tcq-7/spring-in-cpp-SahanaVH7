/*#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    
    Stats ComputeStatistics(const std::vector<___>& );
}*/
#ifndef STATS_H
#define STATS_H

#include <vector>

struct Stats {
    double average;
    double min;
    double max;
};

class Statistics {
public:
    // ComputeStatistics calculates average, min and max over 'numbers'.
    // If 'numbers' is empty, all fields of the returned Stats are NaN.
    static Stats ComputeStatistics(const std::vector<double>& numbers);
};

#endif // STATS_H
