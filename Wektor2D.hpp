class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D() : x(0), y(0)
    {
      std::cout << "[" << x << ", " << y << "]\n";
    }

    Wektor2D(double xValue, double yValue) : x(xValue), y(yValue)
    {
      std::cout << "[" << x << ", " << y << "]\n";
    }

    void setX(double xValue)
    {
        x = xValue;
    }

    void setY(double yValue)
    {
        y = yValue;
    }

    double getX()const
    {
        return x;
    }

    double getY()const
    {
        return y;
    }

    friend Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2) {
        return Wektor2D(v1.x + v2.x, v1.y + v2.y);
    }
    
    friend double operator*(const Wektor2D& v1, const Wektor2D& v2) {
        return v1.x * v2.x + v1.y * v2.y;
    }
};

