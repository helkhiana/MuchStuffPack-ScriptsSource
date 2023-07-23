modded class VicinityItemManager
{
    override bool IsObstructed (Object filtered_object)
    {
        if (filtered_object.IsInherited(Msp_Greenhouse) ||filtered_object.IsInherited(Msp_Planter_Base) )
        {
            return false;
        }
        return super.IsObstructed(filtered_object);
    }
}; 