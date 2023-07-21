// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorBase.generated.h"

class UStaticMeshComponent;
class UBoxComponent; 

UCLASS()
class MYPROJECT_API ADoorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true)) 	                                                 
		 UBoxComponent* Collider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = true))
		UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Door", meta = (AllowPrivateAccess = true))
		UStaticMeshComponent* DoorMesh; 

};
