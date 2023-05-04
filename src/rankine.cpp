namespace tempConverter
{
    /// @brief Rankine to celsius
    /// @param a 
    /// @return double  
    double rankineToCelsius(double a)
    {
        return (a - 491.67) - 32 / 1.8;
    }

    /// @brief Rankine to fahrenheit
    /// @param a 
    /// @return double  
    double rankineToFahrenheit(double a)
    {
        return (a - 459.67);
    }

    /// @brief Rankine to kelvin
    /// @param a 
    /// @return double  
    double rankineToKelvin(double a)
    {
        return (a / 1.8) + 273.15;
    }

    /// @brief Rankine to reaumur
    /// @param a 
    /// @return double  
    double rankineToReaumur(double a)
    {
        return (a - 491.67 - 32 ) * (4 / 9);
    }

    /// @brief Rankine to delisle
    /// @param a 
    /// @return double 
    double rankineToDelisle(double a)
    {
        return (0 - a) * 5 / 9 - 559.67;
    }
}