using System.Collections;
using System.Collections.Generic;
using API.JsonObjects.VehicleCommands;
using UnityEngine;

namespace API
{

    public static class APIData
    {
        private static VehicleCommand m_unlockVehicle;
        private static VehicleCommand m_lockVehicle;
        private static VehicleCommand m_startEngine;
        private static VehicleCommand m_stopEngine;
        private static VehicleCommand m_vehicleStatus;
    }
}