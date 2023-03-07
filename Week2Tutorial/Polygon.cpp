
#define _USE_MATH_DEFINES
#include "Polygon.h"

Polygon::Polygon() noexcept:
	fNumberOfVertices()
{}

void readData(std::istream& aIStream);

size_t Polygon::getNumberOfVertices() const noexcept
{
	return fNumberOfVertices;
}

const Vector2D& getVertex(size_t aIndex) const;
float getPerimeter() const noexcept;

Polygon scale(float aScalar) const noexcept;




