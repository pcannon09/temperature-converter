namespace tempConverter
{
    /// @brief Fahrenheit to kelvin celsius
    /// @param a 
    /// @return double
    double fahrenheitToCelsius(double a)
    {
        return (a - 32) * 5 / 9;
    }

    /// @brief Fahrenheit to kelvin
    /// @param a 
    /// @return double
    double fahrenheitToKelvin(double a)
    {
        return (a - 32) * 5 / 9 + 273.15;
    }
    
    /// @brief Fahrenheit to reaumur
    /// @param a 
    /// @return double
    double fahrenheitToReaumur(double a)
    {
        return  (a - 32) * 4/9;
    }

    /// @brief Fahrenheit to delisle
    /// @param a 
    /// @return double
    double fahrenheitToDelisle(double a)
    {
        return (212 - a) * 5/6;
    }

    /// @brief Fahrenheit to rankine
    /// @param a 
    /// @return double
    double fahrenheitToRankine(double a)
    {
        return (a - 459.67);
    }
}
