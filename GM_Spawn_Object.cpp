// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Spawn_Object.h"
#include "Engine/TargetPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "SpawnObject.h"

void AGM_Spawn_Object::BeginPlay()
{
	Super::BeginPlay();
	TArray<AActor*> vt_objeto;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), vt_objeto);

	if (vt_objeto.Num() != 0)
	{
		FActorSpawnParameters pm_objeto = FActorSpawnParameters();

		for (auto OBJ : vt_objeto)
		{
			GetWorld()->SpawnActor<ASpawnObject>(OBJ->GetActorLocation(), OBJ->GetActorRotation(), pm_objeto);
		}
	}
}

