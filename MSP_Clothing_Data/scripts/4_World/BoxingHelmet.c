class Msp_BoxingHelmet_ColorBase extends HelmetBase
{
	override protected void InitGlobalExclusionValues()
	{
		super.InitGlobalExclusionValues();
		
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_HEADGEAR_HELMET_0);
		
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_MASK_0);
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_MASK_1);
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_MASK_2);
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_HEADSTRAP_0);
	}
};


class Msp_BoxingHelmet_Red : Msp_BoxingHelmet_ColorBase{};
class Msp_BoxingHelmet_Blue : Msp_BoxingHelmet_ColorBase{};
