#include "math_util.h"
#include <cmath>

bool isCircleCollided(float ax, float ay, float ar, float bx, float by, float br)
{
	const float dx = bx - ax;
	const float dy = by - ay;
	const float d = sqrt(dx * dx + dy * dy);

	if (ar + br < d)
	{
		return false;
	}
	return true;
}