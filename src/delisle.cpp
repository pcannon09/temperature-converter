namespace tempConverter
{
    /// @brief Delisle to fahrenheit
    /// @param a 
    /// @return double
    double delisleToFahrenheit(double a)
    {
        return (a - 150) * 2 / 3 + 32;
    }

    /// @brief Delisle to celsius
    /// @param a 
    /// @return double
    double delisleToCelsius(double a)
    {
        return (150 - a) * 2 / 3;
    }

    /// @brief Delisle to kelvin
    /// @param a 
    /// @return double
    double delisleToKelvin(double a)
    {
        return (373.15 - (a * 2 / 3));
    }

    /// @brief Delisle to rankine
    /// @param a 
    /// @return double
    double delisleToRankine(double a)
    {
        return  (671.67 - (a * 1.2));
    }

    /// @brief Delisle to reaumur
    /// @param a 
    /// @return double
    double delisleToReaumur(double a)
    {
        return (150 - a) * 4/5;
    }
}
