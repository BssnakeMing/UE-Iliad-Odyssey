// IDDN.FR.001.250001.006.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#include "Customizations/OdysseyBrushCustomization.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "IDetailCustomization.h"
#include "Modules/ModuleManager.h"
#include "OdysseyBrushAssetBase.h"
#include "PropertyEditorModule.h"

#define LOCTEXT_NAMESPACE "OdysseyBrushCustomization"

class FOdysseyBrushDetails : public IDetailCustomization
{
public:
    static TSharedRef<IDetailCustomization> MakeInstance()
    {
        return MakeShared<FOdysseyBrushDetails>();
    }

    virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
};

void
SortCategories(const TMap<FName, IDetailCategoryBuilder*>& iAllCategoryMap)
{
    for (const TPair<FName, IDetailCategoryBuilder*>& Pair : iAllCategoryMap)
    {
        int32 sortOrder = Pair.Value->GetSortOrder();
        const FName& categoryName = Pair.Key;

        if (categoryName == TEXT("Common"))
        {
            sortOrder = 1;
        }
        else
        {
            sortOrder += 2;
        }

        Pair.Value->SetSortOrder(sortOrder);
    }
}

void
FOdysseyBrushDetails::CustomizeDetails(IDetailLayoutBuilder& iBuilder)
{
    iBuilder.SortCategories(&SortCategories);
}

void
FOdysseyBrushCustomization::Register()
{
    FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
    PropertyModule.RegisterCustomClassLayout(UOdysseyBrushAssetBase::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FOdysseyBrushDetails::MakeInstance));
}

void
FOdysseyBrushCustomization::Unregister()
{
    if (!FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
        return;

    FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
    PropertyModule.UnregisterCustomClassLayout(UOdysseyBrushAssetBase::StaticClass()->GetFName());
}

#undef LOCTEXT_NAMESPACE
