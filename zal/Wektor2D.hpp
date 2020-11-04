struct Wektor2D
{
    private:
        double x;
        double y;
    public:

        Wektor2D()
        {
          x=0;
          y=0;
        }
        Wektor2D(double a,const double b)
        {
            x=a;
            y=b;
        }

        ~Wektor2D()
        {
          std::cout<<"Destrukcja nastąpi!"<<'\n';
        }

        double getX() {return x;}
        double getY() {return y;}

        double setX(double x1)
        {
            x=x1;
        }

        double setY(double y1)
        {
            y=y1;
        }
};

Wektor2D operator+(Wektor2D& v1, Wektor2D& v2)
{
    double a=v1.getX()+v2.getX();
    double b=v1.getX()+v2.getX();

    return Wektor2D{a,b};
}

double operator *(Wektor2D& v1, Wektor2D& v2)
{
    return v1.getX()*v2.getX()+v1.getY()*v2.getY();
}
