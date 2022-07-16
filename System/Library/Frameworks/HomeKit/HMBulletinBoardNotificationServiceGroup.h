//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMBulletinBoardNotification, HMFUnfairLock, NSArray, NSSet, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSArray *_cameraProfiles;	// 16 = 0x10
    NSArray *_associatedServices;	// 24 = 0x18
    NSSet *_cameraProfileUUIDs;	// 32 = 0x20
    NSSet *_associatedServiceUUIDs;	// 40 = 0x28
    HMBulletinBoardNotification *_bulletinBoardNotification;	// 48 = 0x30
    NSUUID *_uniqueIdentifier;	// 56 = 0x38
    NSUUID *_targetUUID;	// 64 = 0x40
    _HMContext *_context;	// 72 = 0x48
    NSString *_logID;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005e897
+ (id)logCategory;	// IMP=0x000000000005e867
- (void).cxx_destruct;	// IMP=0x000000000005e238
@property(readonly, copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak HMBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x000000000005de42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005de3c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005dbcb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000005da6c
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
- (void)_callServiceGroupUpdate;	// IMP=0x000000000005d340
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (void)_requestServiceGroup;	// IMP=0x000000000005cd36
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
- (void)_findObjects;	// IMP=0x000000000005bb69
- (void)handleConfigureNotification:(id)arg1;	// IMP=0x000000000005b9e5
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;	// IMP=0x000000000005b819
- (void)_registerNotificationHandlers;	// IMP=0x000000000005b6b4
- (void)_unconfigure;	// IMP=0x000000000005b565
- (void)_unconfigureContext;	// IMP=0x000000000005b4cf
- (void)__configureWithContext:(id)arg1;	// IMP=0x000000000005b3af
- (id)init;	// IMP=0x000000000005b349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

