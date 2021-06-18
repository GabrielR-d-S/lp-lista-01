#include "function.h"

/*!
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if (P.x > SD.x || P.x < IE.x || P.y > SD.y || P.y < IE.y)
      return location_t::OUTSIDE;

    if (P.x == SD.x || P.x == IE.x || P.y == SD.y || P.y == IE.y)
      return location_t::BORDER;

    return location_t::INSIDE;
}
