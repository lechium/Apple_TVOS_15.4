//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDHome, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    NSPredicate *_condition;	// 24 = 0x18
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;	// 32 = 0x20
    NSUUID *_messageTargetUUID;	// 40 = 0x28
    HMDService *_service;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFMessageDispatcher *_msgDispatcher;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000246c1a
+ (id)logCategory;	// IMP=0x0000000000246bea
+ (_Bool)supportsBulletinNotificationGroup:(id)arg1;	// IMP=0x0000000000246b1c
- (void).cxx_destruct;	// IMP=0x0000000000246826
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024665a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000246370
- (id)attributeDescriptions;	// IMP=0x0000000000246217
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000245fff
- (void)registerForCharacteristicNotifications;	// IMP=0x000000000024598b
- (id)dumpState;	// IMP=0x0000000000245820
- (void)_updateLocalSettingsWithEnabled:(_Bool)arg1 condition:(id)arg2 forMessage:(id)arg3;	// IMP=0x00000000002455a5
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;	// IMP=0x000000000024501b
- (void)configureBulletinNotification;	// IMP=0x0000000000244fde
@property(readonly) HMDHome *home;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)registerNotificationHandlers;	// IMP=0x0000000000244adf
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000002449f2
- (void)dealloc;	// IMP=0x0000000000244984
- (id)initWithService:(id)arg1;	// IMP=0x0000000000244807
- (id)init;	// IMP=0x000000000024478f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

