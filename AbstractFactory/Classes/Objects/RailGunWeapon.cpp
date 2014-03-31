/* ----------------------------------------------------------------------------
 *
 * (C) Copyright 2014 Gustavo E. Rangel
 * Brussels, Belgium
 *
 * ----------------------------------------------------------------------------
 */

/* ----------------------------------------------------------------------------
 *
 * Includes
 *
 * ----------------------------------------------------------------------------
 */
#include "RailGunWeapon.h"
#include "GameLayer.h"

/* ----------------------------------------------------------------------------
 *
 * Class methods
 *
 * ----------------------------------------------------------------------------
 */
/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
RailGunWeapon::RailGunWeapon(GameLayer* game) : Weapon(game)
{

}

/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
Weapon* RailGunWeapon::create(GameLayer* game)
{
	RailGunWeapon* railGunWeapon = new RailGunWeapon(game);
	return railGunWeapon;
}

/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
void RailGunWeapon::shootBullet()
{
	CCLOG("Shooting Rail Gun!!!");
}