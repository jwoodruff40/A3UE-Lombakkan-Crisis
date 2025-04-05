class Templates 
{    
    class CUP_Base;
    
    // ***************************** The Lombakkan Crisis *****************************
    
    class CUP_LC_Base: CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LOM_Equipment"};
        basepath = QPATHTOFOLDER(Templates\CUP);
        logo = QPATHTOFOLDER(Templates\CUP\Pictures\CUP_LC_logo_mod.paa);
    };

    class CUP_LC_SLDF : CUP_LC_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LOM_Equipment", "Flex_CUP_SLDF_Faction"};
        side = "Inv";
        flagTexture = "Flex_CUP_SLDF_Faction\Data\Flag\SLOM_Flag_co.paa";
        name = "CUP LC SLDF";
        description = "Having emerged defeated from the civil war, the south continues to have good relations with former colonies and beyond. After the civil war, the army underwent various reforms for modernization, also favoring better organization. The army is composed mainly of motorized and mechanized units with good air support.";
        file = "CUP_AI_LC_SLDF";
    };

    class CUP_LC_NLAF : CUP_LC_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LOM_Equipment", "Flex_CUP_NLAF_Faction"};
        side = "Occ";
        flagTexture = "Flex_CUP_NLAF_Faction\Data\Flag\NLOM_Flag_co.paa";
        name = "CUP LC NLAF & UN Peacekeepers";
        description = "After the successful independence from the south and the colonies, the north can count on neighboring allies and UN Peacekeepers. After the civil war, a mainly conscript but well-trained army was formed, even if the government's economic resources are not the best, the army can count on a good choice of vehicles and equipment. The army is composed mainly of motorized and mechanized units with good air support accompanied by a small support militia.";
        file = "CUP_AI_LC_NLAF";
    };

    class CUP_LC_LUF : CUP_LC_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LOM_Equipment", "Flex_CUP_LUF_Faction"};
        side = "Reb";
        flagTexture = "Flex_CUP_LUF_Faction\Data\Flag\LUF_Flag_co.paa";
        name = "CUP LC LUF";
        description = "One of the many armed groups in the region that thanks to the latest messes is finding consensus among the population. The goal of the LUF is to unite the entire region of Lombakka into one nation, the way is to eliminate the two governments. This paramilitary group composed of deserters and mercenaries has at its disposal vehicles and equipment dating back to the civil war, although not well organized they give hard time to both armies.";
        file = "CUP_Reb_LC_LUF";
    };

    class CUP_LC_BOC : CUP_LC_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LOM_Equipment", "Flex_CUP_BOC_Faction"};
        side = "Riv";
        flagTexture = "Flex_CUP_BOC_Faction\Data\Flag\BOC_Flag_co.paa";
        name = "CUP LC BOC";
        description = "After the tensions on the border, the armed forces of Bocano are on high alert for possible incursions of the LUF rebels into the national territory. Although it has declared itself neutral, Bocano has good relations with North Lombakka. The army is composed mainly of conscripts and is characterized by equipment and vehicles that come from the Cold War.";
        file = "CUP_Riv_LC_BOC";
    };
};
