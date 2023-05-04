namespace tempConverter
{
    /// @brief Do Kelvin To Celsius
    /// @param a 
    /// @return double
    double kelvinToCelsius(double a)
    {
        return (a - 273.15);
    }
    /// @brief Do Kelvin to Farenheit
    /// @param a 
    /// @return double
    double kelvinToFahrenheit(double a)
    {
        return (a - 273.15) * 1.8 + 32;
    }

    /// @brief Do Kelvin to Rankie
    /// @param a 
    /// @return double
    double kelvinToRankine(double a)
    {
        return (a * 1.8) - 459.67;
    }

    /// @brief Do Kelvin to Reaurmur
    /// @param a 
    /// @return 
    double kelvinToReaurmur(double a)
    {
        return (a - 273.15) * 0.8;
    }

    /// @brief Do Kelvin to Delisle
    /// @param a 
    /// @return 
    double kelvinToDelisle(double a)
    {
        return (0 - a) * 1.5;
    }
}
