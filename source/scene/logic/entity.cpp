﻿#include "entity.h"
Entity::Entity()
{

}

Entity::~Entity()
{

}



double Entity::getSpeed()
{
    return _props.moveSpeed;
}

double Entity::getSuckBlood()
{
    return 0.0;
}

double Entity::getAttack()
{
    return 1.0;
}

EntityFullData Entity::getFullData()
{
    return EntityFullData(_props, _state, _move, _report);
}




