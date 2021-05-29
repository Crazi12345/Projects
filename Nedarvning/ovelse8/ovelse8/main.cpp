#include <iostream>
#include"part.h"
#include"simplepart.h"
#include"subassembly.h"



int main()
{SimplePart screw("screw:M3",0.1);
    SimplePart plate("plate:X12",2.5);
    SimplePart bolt("bolt:T1",0.2);
    SimplePart finger("finger:F9000",3.1);
    SimplePart motor("motor:AA17",4.0);
    SubAssembly casing("casing",10.0);
    casing.addPart(&screw);
    casing.addPart(&plate);
    casing.addPart(&bolt);

    std::cout<<casing.getDescription()<<std::endl;

    std::cout<<"cost:"<<casing.getCost()<<std::endl;
    //0.1+2.5+0.2+10=12.8

    SubAssembly gripper("gripper",5.0);
    gripper.addPart(&finger);
    gripper.addPart(&finger);
    std::cout<<gripper.getDescription()<<std::endl;
    std::cout<<"cost:"<<gripper.getCost()<<std::endl;
    //3.1+3.1+5=11.2
    SubAssembly finalProduct("Robot",100.0);
    finalProduct.addPart(&motor);
    finalProduct.addPart(&casing);
    finalProduct.addPart(&gripper);
    std::cout<<finalProduct.getDescription()<<std::endl;
    std::cout<<"cost:"<<finalProduct.getCost()<<std::endl;

    //4+12.8+11.2+100=128
}
