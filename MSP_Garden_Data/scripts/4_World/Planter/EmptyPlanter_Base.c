class Msp_EmptyPlanter_Base : Msp_Storage_Base
{
	string Get_FullPlanter() { return ""; }
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionFillPlanter);
	}
};