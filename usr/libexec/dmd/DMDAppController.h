//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMFOSStateHandler, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DMDAppController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_manifest;	// 16 = 0x10
    DMFOSStateHandler *_stateHandler;	// 24 = 0x18
}

+ (id)metadataPath;	// IMP=0x00200000000125ab
+ (id)sharedController;	// IMP=0x0010000000010238
- (void).cxx_destruct;	// IMP=0x0020000000016060
@property(readonly, nonatomic) DMFOSStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_getEnterpriseAppMetadataFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015bc7
- (void)_getEnterpriseAppMetadataForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001579f
- (id)_newMetadataDictionary;	// IMP=0x0010000000015720
- (id)_metadataByBundleIdentifier;	// IMP=0x00100000000156c9
- (_Bool)_setMetadata:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015276
- (id)_metadataForBundleIdentifier:(id)arg1;	// IMP=0x001000000001501f
- (void)_applyChangeInLifeCycle:(id)arg1 stateMap:(id)arg2;	// IMP=0x0010000000014b5d
- (void)_cleanUpStaleManagementStatesAndStartObservingApps;	// IMP=0x001000000001420f
- (void)advanceTransientStates;	// IMP=0x0010000000013b61
- (_Bool)setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000139cd
- (unsigned long long)stateForBundleIdentifier:(id)arg1;	// IMP=0x0010000000013948
- (void)setVPNUUIDString:(id)arg1 associatedDomains:(id)arg2 enableDirectDownloads:(id)arg3 configuration:(id)arg4 options:(unsigned long long)arg5 forBundleIdentifier:(id)arg6;	// IMP=0x0010000000013560
@property(readonly, copy, nonatomic) NSArray *managedBundleIdentifiers;
- (void)didFinishUninstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000013260
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000013199
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000013187
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x0010000000013175
- (void)didStartUpdatingForLifeCycle:(id)arg1;	// IMP=0x00100000000130ae
- (void)didFinishInstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000012fe7
- (void)didFailInstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000012f20
- (void)didCancelInstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000012f0e
- (void)didStartInstallingForLifeCycle:(id)arg1;	// IMP=0x0010000000012e21
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012d71
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012cc1
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012c11
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012b61
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012ab1
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012a01
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012951
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000128a1
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000127f1
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012741
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012691
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001267a
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000125ca
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000125b3
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000124fa
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x0010000000012449
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000012398
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x00100000000122e7
- (void)setRemovability:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011c8b
- (id)removabilityForBundleIdentifier:(id)arg1;	// IMP=0x0010000000011c04
- (_Bool)setAssociatedDomainsEnableDirectDownloads:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000011a7b
- (id)associatedDomainsEnableDirectDownloadsForBundleIdentifier:(id)arg1;	// IMP=0x00100000000119f4
- (_Bool)setAssociatedDomains:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001186b
- (id)associatedDomainsForBundleIdentifier:(id)arg1;	// IMP=0x00100000000117e4
- (_Bool)setVPNUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001165b
- (id)VPNUUIDStringForBundleIdentifier:(id)arg1;	// IMP=0x00100000000115d4
- (_Bool)removePersonaMappingForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000115cc
- (void)updateBundleIDPersonaIDMappingForPersonaID:(id)arg1 addingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000115b6
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x001000000001137e
- (_Bool)setManagementInformation:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000011123
- (id)managementInformationForBundleIdentifier:(id)arg1;	// IMP=0x0010000000010f28
- (void)getMetadataForAppRequest:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010cd0
- (void)getMetadataForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010cb9
- (void)getBundleIdentifierForAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000109cd
- (void)getBundleIdentifierForManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010727
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *foregroundBundleIdentifiers;
- (id)initPrivate;	// IMP=0x00100000000102a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

