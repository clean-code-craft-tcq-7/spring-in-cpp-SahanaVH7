#include "gtest/gtest.h"
#include "stats.h"
#include <cmath>
#include <vector>

TEST(StatisticsTest, ComputesAverageMinMax) {
    std::vector<double> numbers = {1.5, 8.9, 3.2, 4.5};
    Stats s = Statistics::ComputeStatistics(numbers);

    double expectedAvg = (1.5 + 8.9 + 3.2 + 4.5) / 4.0;
    EXPECT_DOUBLE_EQ(s.average, expectedAvg);
    EXPECT_DOUBLE_EQ(s.min, 1.5);
    EXPECT_DOUBLE_EQ(s.max, 8.9);
}

TEST(StatisticsTest, ReturnsNaNForEmptyVector) {
    std::vector<double> numbers; // empty
    Stats s = Statistics::ComputeStatistics(numbers);

    EXPECT_TRUE(std::isnan(s.average));
    EXPECT_TRUE(std::isnan(s.min));
    EXPECT_TRUE(std::isnan(s.max));
}
