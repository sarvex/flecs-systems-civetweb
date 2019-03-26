#ifndef FLECS_SYSTEMS_CIVETWEB_H
#define FLECS_SYSTEMS_CIVETWEB_H

#include "bake_config.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EcsSystemsCivetwebHandles {
    ECS_DECLARE_ENTITY(CivetServer);
} EcsSystemsCivetwebHandles;

void EcsSystemsCivetweb(
    ecs_world_t *world,
    int flags,
    void *handles_out);

#define EcsSystemsCivetweb_ImportHandles(handles)\
    ECS_IMPORT_ENTITY(handles, CivetServer);

#ifdef __cplusplus
}
#endif

#endif
