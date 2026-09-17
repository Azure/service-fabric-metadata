// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

use windows_metadata::reader::{File, Index};

#[test]
fn embedded_metadata_matches_committed_artifact() {
    let committed = std::fs::read(
        std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .parent()
            .unwrap()
            .join(".windows")
            .join("winmd")
            .join("Windows.ServiceFabric.winmd"),
    )
    .expect("committed winmd artifact is present");
    assert_eq!(mssf_metadata::METADATA, committed.as_slice());
}

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
