#include <cstddef>

class IRectangle
{
protected:
	virtual ~IRectangle() = default;
	
	virtual const size_t calculatePermieter() const = 0;
	virtual const size_t calculateArea() const = 0;
};