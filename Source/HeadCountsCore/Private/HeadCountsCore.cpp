#include "HeadCountsCore.h"
#include "Modules/ModuleManager.h"
#include "Log.h"
void FHeadCountsCore::StartupModule()
{
    UE_LOG(LogHeadCountsCore, Log, TEXT(" HeadCountsCore module starting up"));
}

void FHeadCountsCore::ShutdownModule()
{
    UE_LOG(LogHeadCountsCore, Log, TEXT(" HeadCountsCore module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FHeadCountsCore, HeadCountsCore, "HeadCountsCore"); 
