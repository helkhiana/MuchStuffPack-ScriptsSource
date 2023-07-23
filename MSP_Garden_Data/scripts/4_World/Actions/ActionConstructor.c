modded class ActionConstructor 
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionEmptyPlanter);
        actions.Insert(ActionFillPlanter);
        actions.Insert(ActionOpenCloseGreenhouse);
    }
};