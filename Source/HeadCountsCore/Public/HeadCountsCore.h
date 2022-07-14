#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
class FHeadCountsCore : public IModuleInterface
{
public:
	static inline FHeadCountsCore& Get()
    {
        return FModuleManager::LoadModuleChecked<FHeadCountsCore>("HeadCountsCore");
    }

     static inline bool IsAvailable()
    {
        return FModuleManager::Get().IsModuleLoaded("HeadCountsCore");
    }

    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
