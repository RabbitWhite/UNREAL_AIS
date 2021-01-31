// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogLoader.h"
#include "UNREAL_AIS.h"
#include "Misc/Paths.h"

bool UDialogLoader::FileSaveString(FString DialogToSave, FString SaveFileName)
{
	return FFileHelper::SaveStringToFile(DialogToSave, *(FPaths::ProjectDir() + SaveFileName));
}
bool UDialogLoader::FileLoadString(FString& DialogToLoad, FString LoadFileName)
{
	return FFileHelper::LoadFileToString(DialogToLoad, *(FPaths::ProjectDir() + LoadFileName));
}
