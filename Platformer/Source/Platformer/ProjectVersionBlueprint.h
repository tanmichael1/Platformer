// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectVersionBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER_API UProjectVersionBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
        UFUNCTION(BlueprintPure, meta = (FriendlyName = "Project Version", CompactNodeTitle = "ProjectVersionB"), Category = "System Information")
        static FString GetProjectVersion();
	
};

