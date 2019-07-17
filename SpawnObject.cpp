// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnObject.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "Components/TextRenderComponent.h"
#include "Engine/TargetPoint.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

ASpawnObject::ASpawnObject()
{
	PrimaryActorTick.bCanEverTick = true;

	c_objeto = CreateDefaultSubobject<USphereComponent>(TEXT("Initial"));
	c_objeto->InitSphereRadius(100.f);
	c_objeto->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	RootComponent = c_objeto;

	v_objeto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual"));
	v_objeto->SetRelativeLocation(FVector(3.2f, 0.f, 0.f));
	v_objeto->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

	ConstructorHelpers::FObjectFinder<UStaticMesh>
		ch_objeto(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));

	if(ch_objeto.Succeeded()) 
	{
		v_objeto->SetStaticMesh(ch_objeto.Object);
	}

	v_objeto->SetupAttachment(RootComponent);
}

ASpawnObject::~ASpawnObject() {}

void ASpawnObject::BeginPlay()
{
	Super::BeginPlay();
}

void ASpawnObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

