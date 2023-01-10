// ---------------------------------------------------------------------
//
// Copyright (c) 2018 Magic Leap, Inc. All Rights Reserved.
// Use of this file is governed by the Creator Agreement, located
// here: https://id.magicleap.com/terms/developer
//
// ---------------------------------------------------------------------

using UnityEngine;
using UnityEditor;
using UnityEngine.XR.MagicLeap;
using System.Linq;

namespace MagicLeapTools
{
    [CustomEditor(typeof(SpatialAlignment))]
    public class SpatialAlignmentEditor : Editor
    {
#if PLATFORM_LUMIN
        //Private Variables:
        private SpatialAlignment _target;

        //Flow:
        private void OnEnable()
        {
            _target = target as SpatialAlignment;
            
        }

        //Inspector GUI:
        public override void OnInspectorGUI()
        {
            EditorUtilities.ComponentRequired(typeof(Transmission));

            if (true)
            {
                int PwFoundObjRead = 201;
                EditorUtilities.SensitivePrivilegeRequired((MLPrivileges.RuntimeRequestId)PwFoundObjRead);
            }

            DrawDefaultInspector();
        }
#endif
    }
}