// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "MyIDPlugin"), Category = "MyIDPlugin")
	static float MyIDPluginSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Plugin SetUserName", Keywords = "MyIDPlugin"), Category = "MyIDPlugin")
	static void SetUserName(const FString& NewName);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Plugin GetUserName", Keywords = "MyIDPlugin"), Category = "MyIDPlugin")
	static FString GetUserName();

private:
	static FString UserName;
};
