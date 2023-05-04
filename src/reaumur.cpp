namespace tempConverter
{
    /// @brief Reaumur to celcius
    /// @param a 
    /// @return 
    double reaumurToCelsius(double a)
    {
        return a * 5/4;
    }

    /// @brief Reaumur to fahrenheit
    /// @param a 
    /// @return 
    double reaumurToFahrenheit(double a)
    {
        return (a * 9/4) + 32;
    }

    /// @brief Reaumur to kelvin
    /// @param a 
    /// @return 
    double reaumurToKelvin(double a)
    {
        return (a * 5/4) + 273.15;
    }

    /// @brief Reaumur to delisle
    /// @param a 
    /// @return 
    double reaumurToDelisle(double a)
    {
        return (80 - a) * 1.875;
    }
}
