#include "Scene.h"

extern "C" void initialize_gl4es(void);

int main(int argc, char* argv[]) {
    initialize_gl4es();
 
    Scene *scene = new Scene();
    scene->go(argc, argv);
    delete scene;
    return 0;
}
