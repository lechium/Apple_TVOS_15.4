//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdServiceProtocol-Protocol.h>

@class NSString, NSURL, NSXPCConnection, PLAssetsdCPLResourceDownloader, PLAssetsdConnectionAuthorization, PLAssetsdInnerService, PLCacheMetricsCollectorServerShell, PLLibraryServicesManager, PLPhotoLibrary, PLPhotoLibraryBundle, PLPhotoLibraryBundleController;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol>
{
    PLAssetsdInnerService *_innerLibraryService;	// 8 = 0x8
    PLAssetsdInnerService *_innerLibraryInternalService;	// 16 = 0x10
    PLAssetsdInnerService *_innerSystemLibraryURLReadOnlyService;	// 24 = 0x18
    PLAssetsdInnerService *_innerLibraryManagementService;	// 32 = 0x20
    PLAssetsdInnerService *_innerPhotoKitService;	// 40 = 0x28
    PLAssetsdInnerService *_innerPhotoKitAddService;	// 48 = 0x30
    PLAssetsdInnerService *_innerResourceAvailabilityService;	// 56 = 0x38
    PLAssetsdInnerService *_innerResourceService;	// 64 = 0x40
    PLAssetsdInnerService *_innerResourceWriteOnlyService;	// 72 = 0x48
    PLAssetsdInnerService *_innerResourceInternalService;	// 80 = 0x50
    PLAssetsdInnerService *_innerCloudService;	// 88 = 0x58
    PLAssetsdInnerService *_innerCloudInternalService;	// 96 = 0x60
    PLAssetsdInnerService *_innerMigrationService;	// 104 = 0x68
    PLAssetsdInnerService *_innerSyncService;	// 112 = 0x70
    PLAssetsdInnerService *_innerNotificationService;	// 120 = 0x78
    PLAssetsdInnerService *_innerDemoService;	// 128 = 0x80
    PLAssetsdInnerService *_innerDiagnosticsService;	// 136 = 0x88
    PLAssetsdInnerService *_innerDebugService;	// 144 = 0x90
    PLAssetsdInnerService *_innerPrivacySupportService;	// 152 = 0x98
    _Bool _readyForDaemonJobs;	// 160 = 0xa0
    NSXPCConnection *_connection;	// 168 = 0xa8
    int _remotePID;	// 176 = 0xb0
    PLPhotoLibraryBundleController *_libraryBundleController;	// 184 = 0xb8
    PLPhotoLibraryBundle *_libraryBundle;	// 192 = 0xc0
    PLPhotoLibrary *_photoLibrary;	// 200 = 0xc8
    PLAssetsdConnectionAuthorization *_connectionAuthorization;	// 208 = 0xd0
    PLAssetsdCPLResourceDownloader *_resourceDownloader;	// 216 = 0xd8
    NSURL *_libraryURL;	// 224 = 0xe0
    PLCacheMetricsCollectorServerShell *_cacheMetricsShellObject;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000456f47
@property(readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject; // @synthesize cacheMetricsShellObject=_cacheMetricsShellObject;
@property(readonly, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (id)clientDebugDescription;	// IMP=0x0000000000456ea8
- (void)invalidateConnectionWithReason:(id)arg1;	// IMP=0x0000000000456b97
- (_Bool)_prepareToRunDaemonJob:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000456947
@property(readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
- (id)_autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)arg1 wellKnownLibraryIdentifier:(long long *)arg2;	// IMP=0x0000000000456393
- (void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 clientOptions:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000455700
- (void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000004556e8
- (id)_waitForLibraryServicesForDaemonJob;	// IMP=0x00000000004555ec
- (void)runDaemonJob:(id)arg1 isSerial:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000454f8a
- (void)runDaemonJob:(id)arg1 isSerial:(_Bool)arg2;	// IMP=0x0000000000454f75
- (id)newDebugService;	// IMP=0x0000000000454e3a
- (id)permissionsForDebugService;	// IMP=0x0000000000454d88
- (long long)requiredStateForDebugService;	// IMP=0x0000000000454d7d
- (id)newDiagnosticsService;	// IMP=0x0000000000454c6b
- (id)permissionsForDiagnosticsService;	// IMP=0x0000000000454bb9
- (long long)requiredStateForDiagnosticsService;	// IMP=0x0000000000454bae
- (id)newDemoService;	// IMP=0x0000000000454acf
- (id)permissionsForDemoService;	// IMP=0x0000000000454a1d
- (long long)requiredStateForDemoService;	// IMP=0x0000000000454a15
- (id)newNotificationService;	// IMP=0x0000000000454903
- (id)permissionsForNotificationService;	// IMP=0x0000000000454851
- (long long)requiredStateForNotificationService;	// IMP=0x0000000000454846
- (id)newSyncService;	// IMP=0x0000000000454734
- (id)permissionsForSyncService;	// IMP=0x0000000000454682
- (long long)requiredStateForSyncService;	// IMP=0x0000000000454677
- (id)newMigrationService;	// IMP=0x0000000000454565
- (id)permissionsForMigrationService;	// IMP=0x00000000004544b3
- (long long)requiredStateForMigrationService;	// IMP=0x00000000004544a8
- (id)newCloudInternalService;	// IMP=0x0000000000454396
- (id)permissionsForCloudInternalService;	// IMP=0x00000000004542e4
- (long long)requiredStateForCloudInternalService;	// IMP=0x00000000004542d9
- (id)newCloudService;	// IMP=0x000000000045410d
- (id)permissionsForCloudService;	// IMP=0x00000000004540be
- (long long)requiredStateForCloudService;	// IMP=0x00000000004540b3
- (id)newResourceInternalService;	// IMP=0x0000000000453f7b
- (id)permissionsForResourceInternalService;	// IMP=0x0000000000453ec9
- (long long)requiredStateForResourceInternalService;	// IMP=0x0000000000453ebe
- (id)newResourceWriteOnlyService;	// IMP=0x0000000000453da5
- (id)permissionsForResourceWriteOnlyService;	// IMP=0x0000000000453d56
- (long long)requiredStateForResourceWriteOnlyService;	// IMP=0x0000000000453d4b
- (id)newResourceService;	// IMP=0x0000000000453c0c
- (id)permissionsForResourceService;	// IMP=0x0000000000453bbd
- (long long)requiredStateForResourceService;	// IMP=0x0000000000453bb2
- (id)newResourceAvailabilityService;	// IMP=0x00000000004539d9
- (id)permissionsForResourceAvailabilityService;	// IMP=0x0000000000453978
- (long long)requiredStateForResourceAvailabilityService;	// IMP=0x000000000045396d
- (id)newPhotoKitAddService;	// IMP=0x0000000000453854
- (id)permissionsForPhotoKitAddService;	// IMP=0x00000000004537f3
- (long long)requiredStateForPhotoKitAddService;	// IMP=0x00000000004537e8
- (id)newPhotoKitService;	// IMP=0x00000000004536cf
- (id)permissionsForPhotoKitService;	// IMP=0x000000000045366e
- (long long)requiredStateForPhotoKitService;	// IMP=0x0000000000453663
- (id)newLibraryManagementService;	// IMP=0x000000000045357d
- (id)permissionsForLibraryManagementService;	// IMP=0x00000000004534c8
- (long long)requiredStateForLibraryManagementService;	// IMP=0x00000000004534c0
- (id)newPrivacySupportService;	// IMP=0x00000000004533e1
- (id)permissionsForPrivacySupportService;	// IMP=0x0000000000453395
- (long long)requiredStateForPrivacySupportService;	// IMP=0x000000000045338d
- (id)newSystemLibraryURLReadOnlyService;	// IMP=0x00000000004532ae
- (id)permissionsForSystemLibraryURLReadOnlyService;	// IMP=0x0000000000453262
- (long long)requiredStateForSystemLibraryURLReadOnlyService;	// IMP=0x000000000045325a
- (id)newLibraryInternalService;	// IMP=0x0000000000453141
- (id)permissionsForLibraryInternalService;	// IMP=0x000000000045308c
- (long long)requiredStateForLibraryInternalService;	// IMP=0x0000000000453081
- (id)newLibraryService;	// IMP=0x0000000000452f5c
- (id)permissionsForLibraryService;	// IMP=0x0000000000452f0d
- (long long)requiredStateForLibraryService;	// IMP=0x0000000000452eea
- (void)getPrivacySupportServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000452d23
- (void)getDebugServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000452b5c
- (void)getDiagnosticsServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000452995
- (void)getDemoServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000004527ce
- (void)getNotificationServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000452613
- (void)getSyncServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000452458
- (void)getMigrationServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000045229d
- (void)getCloudInternalServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000004520e2
- (void)getCloudServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000451f27
- (void)getResourceInternalServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000451d6c
- (void)getResourceWriteOnlyServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000451bb1
- (void)getResourceServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000004519f6
- (void)getResourceAvailabilityServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000045183b
- (void)getPhotoKitAddServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000451680
- (void)getPhotoKitServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000004514c5
- (void)getLibraryManagementServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000045130a
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000045114f
- (void)getLibraryInternalServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000450f94
- (void)getLibraryServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000450dd9
- (id)serviceContextWithSelector:(SEL)arg1;	// IMP=0x0000000000450d6a
- (void)handleInvalidation;	// IMP=0x0000000000450c1b
- (void)handleInterruption;	// IMP=0x0000000000450aed
- (void)logStatus;	// IMP=0x0000000000450a5f
@property(readonly, copy) NSString *description;
- (id)resourceDownloader;	// IMP=0x0000000000450908
- (id)_photoLibrary;	// IMP=0x0000000000450745
@property(readonly, nonatomic) _Bool isPhotosClient;
- (id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2;	// IMP=0x0000000000450513

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

