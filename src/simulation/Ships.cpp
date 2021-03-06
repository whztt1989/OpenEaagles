#include "openeaagles/simulation/Ships.hpp"

#include "openeaagles/base/List.hpp"
#include "openeaagles/base/osg/Matrix"
#include "openeaagles/base/units/Angles.hpp"

namespace oe {
namespace simulation {

//==============================================================================
// class Ship
//==============================================================================
IMPLEMENT_EMPTY_SLOTTABLE_SUBCLASS(Ship,"Ship")
EMPTY_SERIALIZER(Ship)

//------------------------------------------------------------------------------
// Constructor(s)
//------------------------------------------------------------------------------
Ship::Ship()
{
    STANDARD_CONSTRUCTOR()
    static base::String generic("GenericShip");
    setType(&generic);
}

//------------------------------------------------------------------------------
// copyData(), deleteData() -- copy (delete) member data
//------------------------------------------------------------------------------
void Ship::copyData(const Ship& org, const bool)
{
    BaseClass::copyData(org);
}

void Ship::deleteData()
{
}

//-----------------------------------------------------------------------------
// getMajorType() -- Returns the player's major type
//-----------------------------------------------------------------------------
unsigned int Ship::getMajorType() const
{
    return SHIP;
}

}
}
