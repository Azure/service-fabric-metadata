// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

use windows_metadata::reader::{File, Index};

#[test]
fn embedded_metadata_parses_and_contains_service_fabric_types() {
    let file = File::new(mssf_metadata::METADATA.to_vec()).expect("valid winmd file");
    let index = Index::new(vec![file]);

    assert!(index.contains(
        "Windows.ServiceFabric.FabricTypes",
        "FABRIC_APPLICATION_PARAMETER"
    ));
    for namespace in [
        "FabricTypes",
        "FabricCommon",
        "FabricClient",
        "FabricRuntime",
        "FabricTransport",
    ] {
        assert!(index.contains_namespace(&format!("Windows.ServiceFabric.{namespace}")));
    }
}
