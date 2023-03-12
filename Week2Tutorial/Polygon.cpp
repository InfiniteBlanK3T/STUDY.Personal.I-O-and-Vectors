
#define _USE_MATH_DEFINES
#include "Polygon.h"

Polygon::Polygon() noexcept:
	fNumberOfVertices()
{}

void Polygon::readData(std::istream& aIStream)
{
	while (aIStream >> fVertices[fNumberOfVertices])
	{
		fNumberOfVertices++;
	}
}

size_t Polygon::getNumberOfVertices() const noexcept
{
	return fNumberOfVertices;
}

const Vector2D& Polygon::getVertex(size_t aIndex) const
{	
	return fVertices[aIndex];
}
float Polygon::getPerimeter() const noexcept
{
	float Result = 0.0f;
	for (int i = 0; i < fNumberOfVertices; i++)
	{
		Result += (fVertices[i + 1] - fVertices[i]).length();
	}
	return Result;
}

Polygon Polygon::scale(float aScalar) const noexcept
{
	Polygon Result = *this;

	for (int i = 0; i < fNumberOfVertices; i++)
	{
		Result.fVertices[i] = fVertices[i] * aScalar;		
	}
	return Result;
}




