// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogLoader.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_AIS_API UDialogLoader: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Custom")
		static bool FileSaveString(FString DialogToSave, FString SaveFileName);
	UFUNCTION(BlueprintCallable, Category = "Custom")
		static bool FileLoadString(FString& DialogToLoad, FString LoadFileName);
		
};
