// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest_Clase1.h"

// Sets default values
AMyActorTest_Clase1::AMyActorTest_Clase1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorTest_Clase1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest_Clase1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

