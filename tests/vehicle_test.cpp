#include "src/vehicle.cpp"
#include <gtest/gtest.h>
#include <iostream>
#include <thread>

TEST (CyclistObjectTest, Test1) {
  Cyclist c;
  c.setWearingHelmet(true);
  c.setLength(10.1);
  c.setWidth(0.1);
  ASSERT_EQ(c.getWearingHelmet(), true);
  c.Predict();
  ASSERT_EQ(c.getWidth(), 0.1);                                                                     
  ASSERT_EQ(c.getLength(), 10.1); 
}

TEST (VehicleObjectTest, Test2) {
  Vehicle v;
  v.setNumDoors(5);
  ASSERT_EQ(v.getNumDoors(), 5);
  v.Predict();
  ASSERT_EQ(v.getWidth(), 0);                                                                       
  ASSERT_EQ(v.getLength(), 0); 

  v.setWidth(6.1);
  v.setLength(8.2);
  ASSERT_EQ(v.getWidth(), 6.1);                                                                       
  ASSERT_EQ(v.getLength(), 8.2); 
}

TEST(ObjectsCommonObjectTest, Test3) {
    ObjectsCommon c;
    ASSERT_EQ(c.getWidth(), 0.0);
    ASSERT_EQ(c.getLength(), 0.0);

    c.setWidth(100.11);
    c.setLength(202.22);
    ASSERT_EQ(c.getWidth(), 100.11);
    ASSERT_EQ(c.getLength(), 202.22);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
