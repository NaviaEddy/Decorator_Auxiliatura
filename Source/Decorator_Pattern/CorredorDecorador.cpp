// Fill out your copyright notice in the Description page of Project Settings.


#include "CorredorDecorador.h"

// Sets default values
ACorredorDecorador::ACorredorDecorador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACorredorDecorador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACorredorDecorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACorredorDecorador::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Ahora tiene 1 capa")));
}

FString ACorredorDecorador::Estado()
{
	estado = "Estado corredor";
	return Super::Estado() + estado;
}

FString ACorredorDecorador::ObtenerAtributos()
{
	atributos = "Puede correr mas rapido";
	return Super::ObtenerAtributos() + atributos;
}

float ACorredorDecorador::Duracion()
{
	return Super::Duracion() + 5.f;
}

