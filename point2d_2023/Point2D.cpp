#pragma once
#include"Point2d.h"
#include <iostream>

using namespace std;

Point2D::Point2D()
{
	cout << "Konstruktor";
	this->x = 0.0f;
	this->y = 0.0f;
}

void Point2D::setX(float x) {
	this-> x;
}

void Point2D::setY(float) {
	this->x;
}

float Point2D::getX()
{
	return this->x;
}

float Point2D::getY()
{
	return this->y;
}
