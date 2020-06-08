#include "Vektor.hh"
#include<cmath>

//Konstruktor
Vektor::Vektor(double nx, double ny, double nz) {
  x_ = nx;
  y_ = ny;
  z_ = nz;
}

double Vektor::betrag() {
  double sum = sqrt(x_ * x_  +  y_ * y_  +  z_ * z_);
  return sum; 
}

//Ausgabe
std::ostream& operator<<(std::ostream& os, Vektor v) {
  os << "(" << v.x_ << "," << v.y_ << "," << v.z_ << ")";
  return os;
}

//Eingabe
std::istream& operator>>(std::istream& is, Vektor& v) {
  is >> v.x_ >> v.y_ >> v.z_;
  return is;
}


Vektor Vektor::operator+(Vektor v) {
  Vektor sum(x_ + v.x_, y_ + v.y_, z_ + v.z_);
  return sum;
}

Vektor Vektor::operator-(Vektor v) {
  Vektor sum(x_ - v.x_, y_ - v.y_, z_ - v.z_);
  return sum;
}

double Vektor::mal(Vektor v) {
  double erg =(x_ * v.x_  +  y_ * v.y_  +  z_ * v.z_);
  return erg;
}

Vektor Vektor::kreuz(Vektor v) {
  int kreuz_x=(y_ * v.z_)  -  (z_ * v.y_);
  int kreuz_y=(z_ * v.x_)  -  (x_ * v.z_);
  int kreuz_z=(x_ * v.y_)  -  (y_ * v.x_);
  Vektor erg(kreuz_x, kreuz_y, kreuz_z);
  return erg;
}
