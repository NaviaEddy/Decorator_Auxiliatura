// Fill out your copyright notice in the Description page of Project Settings.


#include "InvencibleDecorador.h"

// Sets default values
AInvencibleDecorador::AInvencibleDecorador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInvencibleDecorador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvencibleDecorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInvencibleDecorador::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver, FString::Printf(TEXT("Ahora tiene 3 capas")));
}

FString AInvencibleDecorador::Estado()
{
	estado = "Estado invencible";
	return Super::Estado() + estado;
}

FString AInvencibleDecorador::ObtenerAtributos()
{
	atributos = "Nada lo detiene";
	return Super::ObtenerAtributos() + atributos;
}

float AInvencibleDecorador::Duracion()
{
	return Super::Duracion() + 10.f;
}

