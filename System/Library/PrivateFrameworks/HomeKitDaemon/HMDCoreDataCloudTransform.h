//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCoreDataCloudTransformDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCoreDataNotificationListener-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSString;
@protocol HMDCoreDataCloudTransformDelegate;

@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener>
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    NSManagedObjectContext *_lazyManagedObjectContext;	// 16 = 0x10
    NSMutableSet *_pendingChangedStoreIdentifiers;	// 24 = 0x18
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;	// 32 = 0x20
    id <HMDCoreDataCloudTransformDelegate> _delegate;	// 40 = 0x28
    NSString *_cloudStoreConfigurationName;	// 48 = 0x30
    NSString *_workingStoreConfigurationName;	// 56 = 0x38
    NSMutableDictionary *_historyTokensByStoreIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000005803dd
+ (id)localTransformableEntityFromEntity:(id)arg1;	// IMP=0x000000000058030c
+ (Class)exportTransformableClassFromEntity:(id)arg1;	// IMP=0x0000000000580221
+ (id)exportTransformableEntityFromEntity:(id)arg1;	// IMP=0x000000000058011e
+ (Class)importTransformableClassFromEntity:(id)arg1;	// IMP=0x00000000005800d8
+ (id)_new;	// IMP=0x00000000005800b0
+ (id)sharedInstance;	// IMP=0x000000000058004d
- (void).cxx_destruct;	// IMP=0x0000000000579062
@property(nonatomic) __weak id <HMDCoreDataCloudTransformDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)cloudTransform:(id)arg1 isPermittedForHomeWithModelID:(id)arg2;	// IMP=0x0000000000578f43
- (void)coreData:(id)arg1 cloudKitExportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x0000000000578da2
- (void)coreData:(id)arg1 cloudKitExportStartedForStoreWithIdentifier:(id)arg2;	// IMP=0x0000000000578cb2
- (void)coreData:(id)arg1 cloudKitImportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x00000000005789ac
- (void)coreData:(id)arg1 cloudKitImportStartedForStoreWithIdentifier:(id)arg2;	// IMP=0x0000000000578847
- (void)coreData:(id)arg1 persistentStoreWithIdentifierDidChange:(id)arg2;	// IMP=0x00000000005785fb
- (void)runTransformForCoreData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005784d0
- (id)managedObjectContextForCoreData:(id)arg1;	// IMP=0x0000000000578454
- (id)initWithCloudStoreConfigurationName:(id)arg1 workingStoreConfigurationName:(id)arg2;	// IMP=0x0000000000578330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
