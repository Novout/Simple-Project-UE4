// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Spawn_Object.generated.h"

/**
 * 
 */
UCLASS()
class CPP_STUDY_API AGM_Spawn_Object : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

};
