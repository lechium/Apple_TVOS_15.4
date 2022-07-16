//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDNotificationRegistration, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>
{
    HMDHome *_home;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSString *_logString;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMFMessageDispatcher *_msgDispatcher;	// 40 = 0x28
    HMDNotificationRegistration *_notificationRegistration;	// 48 = 0x30
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000006959a6
+ (id)logCategory;	// IMP=0x0000000000695976
- (void).cxx_destruct;	// IMP=0x0000000000695df8
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000695cf0
- (void)residentChanged;	// IMP=0x0000000000695cea
- (void)timerFired:(id)arg1;	// IMP=0x0000000000695ce4
- (void)handleHomeDataLoadedNotification:(id)arg1;	// IMP=0x0000000000695cde
- (void)_registerForMessages;	// IMP=0x0000000000695c90
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000695c20
- (void)_initialize:(id)arg1;	// IMP=0x00000000006959e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

