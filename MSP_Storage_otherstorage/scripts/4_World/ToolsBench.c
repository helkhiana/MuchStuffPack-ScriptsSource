class Msp_ToolsBench_Blue_Kit: Msp_Kit
{
	override vector Get_ItemPlacingOrientation()
	{
		return "-90 0 0";
	}
};

class Msp_ToolsBench_Grey_Kit: Msp_ToolsBench_Blue_Kit {};
class Msp_ToolsBench_Red_Kit: Msp_ToolsBench_Blue_Kit {};