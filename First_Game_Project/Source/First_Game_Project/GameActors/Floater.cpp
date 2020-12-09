// Fill out your copyright notice in the Description page of Project Settings.


#include "Floater.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFloater::AFloater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomStaticMesh"));
	
	InitialLocation = FVector(0.0f);
	placedLocation = FVector(0.0f);
	worldOrigin = FVector(0.0f, 0.0f, 0.0f);
	initialDirection = FVector(0.0f, 0.0f, 0.0f);

	bInitializeFloaterLocations = false;
	bShouldFloat = false;

	//initialForce = FVector(0.0f, 2000000.f, 0.0f);
	//initialTorque = FVector(0.0f, 2000000.f, 0.0f);

	runningTime = 0.0f;

	A = 0.f;
	B = 0.f;
	C = 0.f;
	D = 0.f;
}

// Called when the game starts or when spawned
void AFloater::BeginPlay()
{
	Super::BeginPlay();
	
	float initialX = FMath::FRandRange(-500.f, 500.f);
	float initialY = FMath::FRandRange(-500.f, 500.f);
	float initialZ = FMath::FRandRange(0.f, 500.f);

	InitialLocation.X = initialX;
	InitialLocation.Y = initialY;
	InitialLocation.Z = initialZ;

	placedLocation = GetActorLocation();

	if (bInitializeFloaterLocations)
	{
		SetActorLocation(InitialLocation);
	}
		
	baseZLocation = placedLocation.Z;

	//StaticMesh->AddForce(initialForce);
	//StaticMesh->AddTorque(initialTorque);
}

// Called every frame
void AFloater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bShouldFloat)
	{
		FVector newLocation  = GetActorLocation();

		// Period = 2 * PI / ABS(B)
		newLocation.Z = baseZLocation + A * FMath::Sin(B * runningTime - C) + D;

		SetActorLocation(newLocation);
		runningTime += DeltaTime;
	}
}

