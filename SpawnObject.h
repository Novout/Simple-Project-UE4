#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnObject.generated.h"

UCLASS()
class CPP_STUDY_API ASpawnObject : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Object")
	UStaticMeshComponent* v_objeto;

	UPROPERTY(EditAnywhere, Category = "Object")
	class USphereComponent* c_objeto;
public:	
	ASpawnObject();
	~ASpawnObject();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};
