
#include "dso.h"
#include <dlfcn.h>
//cannot use in windows


int DSO_Manager::load(char* path, char *name) {

	Module *module = new Module;
	void *handle = dlopen(path, name);
	if (handle == NULL) {
		return MODULE_ERROR;
	}

	module.init = (*init)(dlsym(handle, "init"));
	if (module.init == NULL) {
		return MODULE_ERROR;
	}

	module.handle = (*handle)(dlsym(handle, "handle"));
	if (module..handle == NULL) {
		return MODULE_ERROR;
	}

	dlclose(handle);

	modules.insert(name, module);

	return MODULE_OK;
}

int DSO_Manager::getModule(char* name) {
	return this->modules.find(name);

}