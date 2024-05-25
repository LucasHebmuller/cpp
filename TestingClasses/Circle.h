#pragma once


class Circle
{
	public:
		Circle(double r);
		double getRadius() const;
		void setRadius(double r);
		double computeArea();
	private:
		double radius;
};

