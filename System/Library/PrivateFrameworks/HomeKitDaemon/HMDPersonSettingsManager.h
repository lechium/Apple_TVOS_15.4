//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMBLocalZone, HMDHome, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDPersonSettingsManager : HMFObject <HMFMessageReceiver, HMFLogging>
{
    HMDHome *_home;	// 8 = 0x8
    HMBLocalZone *_localZone;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSUUID *_UUID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000005d0ed6
- (void).cxx_destruct;	// IMP=0x00000000005d0bb4
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x00000000005d0af3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)_setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;	// IMP=0x00000000005d0701
- (void)_registerForMessages;	// IMP=0x00000000005d054f
- (void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)arg1;	// IMP=0x00000000005d0216
- (void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)arg1;	// IMP=0x00000000005cfe5f
- (void)remove;	// IMP=0x00000000005cfc7f
- (_Bool)areClassificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x00000000005cf95e
- (void)configure;	// IMP=0x00000000005cf858
- (id)initWithHome:(id)arg1 localZone:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000005cf6fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

