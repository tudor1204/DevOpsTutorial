#include "IRectangle.hpp"

class Rectangle : public IRectangle
{
public:
	Rectangle() = default;
	
	Rectangle(const size_t length, const size_t width):
	    m_length(length),
		m_width(width)
	{
	}
	
	Rectangle(const Rectangle&) = default;
	Rectangle(Rectangle&&) = default;
	Rectangle& operator =(const Rectangle& other) = default;
	Rectangle& operator =(Rectangle&&) = default;
	~Rectangle() override = default;
	
	const size_t calculatePermieter() const override;
	const size_t calculateArea() const override;
	
private:
     size_t m_length;
	 size_t m_width;
};