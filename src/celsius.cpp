namespace tempConverter
{
    /// @brief Do Celsius to Fahrenheit
    /// @param a 
    /// @return double
    double celsiusToFahrenheit(double a)
    {
        return (a * 9 / 5) + 32;
    }

    /// @brief Do Celsius to Kelvin
    /// @param a 
    /// @return double
    double celsiusToKelvin(double a)
    {
        return a + 273.15;
    }
    
    /// @brief Do Celsius to Rankine
    /// @param a 
    /// @return double
    double celsiusToRankine(double a)
    {
        return (a + 273.15) * 9 / 5;
    }

    /// @brief Do Celsius to Réaumur
    /// @param a
    /// @return double
    double celsiusToReaumur(double a)
    {
        return a * 4/5;
    }

    /// @brief Do Celsius to 
    /// @param a
    /// @return double
    double celsiusToDelisle(double a)
    {
        return (100 - a) * 3/2;
    }
}
