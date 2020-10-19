#pragma once

#include "game_Physics.h"
#include "FrameTimer.h"


#include "Object.h"
#include <glm.hpp>

/*********************************************************************************************************
 *    Author: William Halling 32233703
 *    Date  : October 2020
 *
 *    Purpose of class:
 *        Enabling of basic game physics through the use of vec3s
 *        Class will contain the following physics and is open for expansion at a later date
 *
 *        Acceleration of our OBJ models
 *
 *        Gravity as a const float of 0, 9.81, 0 as Gravity on earth is 9.81ms
 *
 *        Velocity of the object for how fast it is moving
 ***********************************************************************************/

class game_Physics
{
public:

    void set_Current_Obj_Gravity(glm::vec3 temp_Game_Obj_Grav) { gravity_Of_Game_Obj_ = temp_Game_Obj_Grav; }
    glm::vec3 get_Game_OBJ_Gravity()      const { return gravity_Of_Game_Obj_; }


    void set_Current_Game_OBJ_Velocity(glm::vec3 temp_Velocity_Of_Game_Obj_) { velocity_Of_Game_Obj_ = temp_Velocity_Of_Game_Obj_; }
    glm::vec3 get_Game_OBJ_Vellocity()    const { return velocity_Of_Game_Obj_; }


    void set_Current_Game_OBJ_Acceleration(glm::vec3 temp_Acceleration_Of_Game_Obj) { Acceleration_Of_Game_Obj_ = temp_Acceleration_Of_Game_Obj; }
    glm::vec3 get_Game_OBJ_Acceleration() const { return Acceleration_Of_Game_Obj_; }


    void set_Obj_Model_In_Motion(bool temp_Obj_Model_In_Motion) { Obj_Model_In_Motion_ = temp_Obj_Model_In_Motion; }
    bool get_Obj_Model_In_Motion()        const { return Obj_Model_In_Motion_; }

    void set_Obj_Model_Name(Object temp_obj_Model_Name) { obj_Model_Name = temp_obj_Model_Name; }
    Object get_Obj_Model_Name() const { return obj_Model_Name; }

    void update_Game_Model();


private:

    Object obj_Model_Name;
    FrameTimer time;

    bool Obj_Model_In_Motion_;

    glm::vec3 gravity_Of_Game_Obj_;
    glm::vec3 velocity_Of_Game_Obj_;
    glm::vec3 Acceleration_Of_Game_Obj_;
};