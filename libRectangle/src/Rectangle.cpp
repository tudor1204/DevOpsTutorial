#include "Rectangle.hpp"

const size_t Rectangle::calculatePermieter() const
{
	return 2 * m_length + 2 * m_width;
}

const size_t Rectangle::calculateArea() const
{
	return m_length * m_width;
}