//***********************************************************
//
// Name:		Vector2D.h
// Author:		Matei Zaharia
//
// Description: Provides an interface for a vector in R4 and
//				allows vector and scalar operations on it
//
//***********************************************************

#ifndef VECTOR2D_H
#define VECTOR2D_H


#include <math.h>

///////////////////////////////////////////////////////////////////////////////
// CVector2D_Maths:
class CVector2D_Maths
{
public:
	CVector2D_Maths() {}
    CVector2D_Maths(float x,float y) { X=x; Y=y; }
	CVector2D_Maths(const CVector2D_Maths& p) { X=p.X; Y=p.Y; }

	operator float*() {
		return &X;
	}

	operator const float*() const {
		return &X;
	}

	CVector2D_Maths operator-() const {
	    return CVector2D_Maths(-X, -Y);
	}

    CVector2D_Maths operator+(const CVector2D_Maths& t) const {
    	return CVector2D_Maths(X+t.X, Y+t.Y);
	}

	CVector2D_Maths operator-(const CVector2D_Maths& t) const {
	    return CVector2D_Maths(X-t.X, Y-t.Y);
	}

	CVector2D_Maths operator*(float f) const {
	    return CVector2D_Maths(X*f, Y*f);
	}

	CVector2D_Maths operator/(float f) const {
	    float inv=1.0f/f;
		return CVector2D_Maths(X*inv, Y*inv);
	}

	CVector2D_Maths& operator+=(const CVector2D_Maths& t) {
		X+=t.X; Y+=t.Y;
	    return *this;
	}

	CVector2D_Maths& operator-=(const CVector2D_Maths& t) {
		X-=t.X; Y-=t.Y;
	    return *this;
	}

	CVector2D_Maths& operator*=(float f) {
	    X*=f; Y*=f;
	    return *this;
	}

	CVector2D_Maths& operator/=(float f) {
		float invf=1.0f/f;
	    X*=invf; Y*=invf;
    	return *this;
	}

    float Dot(const CVector2D_Maths& a) const {
		return X*a.X + Y*a.Y;
	}

	float LengthSquared() const {
	    return Dot(*this);
	}

    float Length() const {
		return (float) sqrt(LengthSquared());
	}

    void Normalize() {
		float mag=Length();
        X/=mag; Y/=mag;
	}

public:
	float X, Y;
};
//////////////////////////////////////////////////////////////////////////////////


#endif
