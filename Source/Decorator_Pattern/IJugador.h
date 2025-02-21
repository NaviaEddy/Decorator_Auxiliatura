// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IJugador.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIJugador : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DECORATOR_PATTERN_API IIJugador
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Empezar() = 0;
	virtual FString Estado() = 0;
	virtual FString ObtenerAtributos() = 0;
	virtual float Duracion() = 0;
};
