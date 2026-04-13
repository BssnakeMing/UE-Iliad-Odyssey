// IDDN FR.001.250001.005.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/UnrealType.h"
	
namespace FOdysseyObjectEditorUtils
{
	inline void PreChangePropertyValue(UObject* Object, FName PropertyName)
	{
#if WITH_EDITOR
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(Object->GetClass(), PropertyName);

		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FEditPropertyChain PropertyChain;
			PropertyChain.AddHead(Property);

        	Object->Modify();
			Object->PreEditChange(PropertyChain);
		}
#else
		(void)Object;
		(void)PropertyName;
#endif
	}


	inline void PostChangePropertyValue(UObject* Object, FName PropertyName, EPropertyChangeType::Type iChangeType = EPropertyChangeType::Unspecified)
	{
#if WITH_EDITOR
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(Object->GetClass(), PropertyName);

		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FPropertyChangedEvent PropertyEvent(Property, iChangeType);
			Object->PostEditChangeProperty(PropertyEvent);
		}
#else
		(void)Object;
		(void)PropertyName;
		(void)iChangeType;
#endif
	}

	/**
	 * Set the value on an UObject using reflection.
	 * @param	Object			The object to copy the value into.
	 * @param	PropertyName	The name of the property to set.
	 * @param	Value			The value to assign to the property.
	 *
	 * @return true if the value was set correctly
	 */
	template <typename ValueType>
	bool SetPropertyValue(UObject* Object, FName PropertyName, ValueType Value, EPropertyChangeType::Type iChangeType = EPropertyChangeType::Unspecified)
	{
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(Object->GetClass(), PropertyName);

		// Get the property addresses for the object
		ValueType* SourceAddr = Property->ContainerPtrToValuePtr<ValueType>(Object);

		if ( SourceAddr == NULL )
		{
			return false;
		}

#if WITH_EDITOR
		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FEditPropertyChain PropertyChain;
			PropertyChain.AddHead(Property);
			
			Object->Modify();
			Object->PreEditChange(PropertyChain);
		}
#endif

		// Set the value on the destination object.
		*SourceAddr = Value;

#if WITH_EDITOR
		if ( !Object->HasAnyFlags(RF_ClassDefaultObject) )
		{
			FPropertyChangedEvent PropertyEvent(Property, iChangeType);
			Object->PostEditChangeProperty(PropertyEvent);
		}
#else
		(void)iChangeType;
#endif

		return true;
	}

	/**
	 * Get the value on an UObject using reflection.
	 * @param	Object			The object to copy the value into.
	 * @param	PropertyName	The name of the property to set.
	 * @param	Value			The value to assign to the property.
	 *
	 * @return true if the value was set correctly
	 */
	template <typename ValueType>
	bool GetPropertyValue(UObject* Object, FName PropertyName, ValueType& oValue)
	{
		// Get the property addresses for the source and destination objects.
		FProperty* Property = FindFieldChecked<FProperty>(Object->GetClass(), PropertyName);

		// Get the property addresses for the object
		ValueType* SourceAddr = Property->ContainerPtrToValuePtr<ValueType>(Object);

		if ( SourceAddr == nullptr )
			return false;

		// Set the value on the destination object.
		oValue = *SourceAddr;

		return true;
	}

	/**
	 * Returns wether the given object contains the given property
	 *
	 * @return true if the poroperty exists within the given object
	 */
	inline bool HasProperty(UObject* Object, FName PropertyName)
	{
		if ( Object == nullptr )
			return false;

		// Use a non-checked lookup to preserve HasProperty semantics.
		FProperty* Property = FindFProperty<FProperty>(Object->GetClass(), PropertyName);
		return Property != nullptr;
	}
};
