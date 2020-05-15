#ifndef SCENE_H
#define SCENE_H

#include "camera.h"
#include "texture.h"
#include "lightdata.h"

#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979324
#endif

#include <obj/model.h>

typedef struct Scene
{
    Model cube;
    Material material;
    GLuint texture_id[3];
} Scene;

void set_textures(Scene* sc);

/**
 * Initialize the scene by loading models.
 */
void init_scene(Scene* scene);

/**
 * Init light data
 */
void ini_lightdata(Ldata* ldata);

void changeLdata(Ldata* ldata,float intensity);

void changeLightrotation(Ldata* ldata,float h);

/**
 * Set the lighting of the scene.
 */
void set_lighting(Ldata* ldata);

/**
 * Set the current material.
 */
void set_material(const Material* material);

/**
 * Draw the scene objects.
 */
void draw_scene(const Scene* scene,Ldata* ldata);

/**
 * Draw the origin of the world coordinate system.
 */
void draw_origin(const Scene* scene);


#endif /* SCENE_H */
