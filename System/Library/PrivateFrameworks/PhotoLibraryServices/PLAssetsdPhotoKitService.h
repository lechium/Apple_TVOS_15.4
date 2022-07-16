//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdPhotoKitServiceProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPerformChangesRequestService-Protocol.h>

@class NSPersistentStoreCoordinator, NSString, PLAssetsdConnectionAuthorization, PLCameraCaptureTaskConstraintCoordinator;

@interface PLAssetsdPhotoKitService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000039b627
- (void)commitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000039b60c
- (id)clientDisplayName;	// IMP=0x000000000039b5ef
- (id)clientBundleID;	// IMP=0x000000000039b5d2
- (id)clientDescription;	// IMP=0x000000000039b5b5
- (id)persistentStoreCoordinator;	// IMP=0x000000000039b5a0
- (void)getUUIDsForCloudIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000039b233
- (void)applyChangesRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000039ae7f
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;	// IMP=0x000000000039ad87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
