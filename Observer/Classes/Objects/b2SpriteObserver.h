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
#ifndef __B2SPRITE_OBSERVER_H__
#define __B2SPRITE_OBSERVER_H__

class b2SpriteObserver
{ 
public:
	virtual void update() = 0;
};

#endif // __B2SPRITE_OBSERVER_H__