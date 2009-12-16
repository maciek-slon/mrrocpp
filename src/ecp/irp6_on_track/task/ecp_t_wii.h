#if !defined(_ECP_T_WII_H)
#define _ECP_T_WII_H

#include "ecp_mp/task/ecp_mp_task.h"
#include "ecp/irp6_on_track/generator/ecp_g_wii.h"
#include "ecp/common/generator/ecp_g_smooth.h"

namespace mrrocpp {
namespace ecp {
namespace irp6ot {
namespace task {


/**
 * Odtwarza orientacje kontrolera
 * @author jkurylo
 */
class wii: public common::task::task
{
protected:
	//Generator ruchu
	generator::wii* eg;
	common::generator::smooth* sg;

public:
	/**
	 * Tworzy obiekt zadania
	 * @param _config konfigurator
	 * @author jedrzej
	 */
	wii(lib::configurator &_config);

	/**
	 * Realizuje zadanie
	 * @author jkurylo
	 */
	void main_task_algorithm(void);
};

}
} // namespace irp6ot
} // namespace ecp
} // namespace mrrocpp


#endif