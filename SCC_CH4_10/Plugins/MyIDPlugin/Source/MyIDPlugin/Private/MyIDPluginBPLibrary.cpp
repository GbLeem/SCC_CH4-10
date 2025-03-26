// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyIDPluginBPLibrary.h"
#include "MyIDPlugin.h"

float UMyIDPluginBPLibrary::MyIDPluginSampleFunction(float Param)
{
	return Param;
}

FString UMyIDPluginBPLibrary::UserName = TEXT("Unknown");

void UMyIDPluginBPLibrary::SetUserName(const FString& NewName)
{
	UserName = NewName;
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("UserName set to %s"), *UserName));
}

FString UMyIDPluginBPLibrary::GetUserName()
{
	return UserName;
}

