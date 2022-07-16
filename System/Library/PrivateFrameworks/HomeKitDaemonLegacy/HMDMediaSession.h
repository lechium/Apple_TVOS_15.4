//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDMediaEndpoint, HMDMediaSessionState, HMFTimer, NSArray, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableSet *_mediaProfiles;	// 16 = 0x10
    _Bool _connected;	// 24 = 0x18
    _Bool _currentAccessorySession;	// 25 = 0x19
    NSString *_sessionIdentifier;	// 32 = 0x20
    HMDMediaEndpoint *_endpoint;	// 40 = 0x28
    HMDMediaSessionState *_state;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSUUID *_uuid;	// 72 = 0x48
    NSMutableArray *_setPlaybackStateCompletionHandlers;	// 80 = 0x50
    HMFTimer *_setPlaybackStateTimer;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000577ca6
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)arg1;	// IMP=0x0000000000577bc7
+ (id)mediaPropertyMessageKeys;	// IMP=0x0000000000577b25
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0000000000577b1d
+ (id)logCategory;	// IMP=0x0000000000577aed
+ (id)sessionForCurrentAccessoryWithSessionIdentifier:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0000000000577a07
- (void).cxx_destruct;	// IMP=0x000000000057478d
@property(retain, nonatomic) HMFTimer *setPlaybackStateTimer; // @synthesize setPlaybackStateTimer=_setPlaybackStateTimer;
@property(retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers; // @synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(nonatomic, getter=isCurrentAccessorySession) _Bool currentAccessorySession; // @synthesize currentAccessorySession=_currentAccessorySession;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) HMDMediaSessionState *state; // @synthesize state=_state;
@property(retain, nonatomic) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005745d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000057439a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005742e4
- (void)writeProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005741c4
- (void)readProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005740e8
- (void)removeMediaProfile:(id)arg1;	// IMP=0x000000000057401d
- (void)addMediaProfile:(id)arg1;	// IMP=0x0000000000573f17
@property(readonly, nonatomic) NSArray *mediaProfiles;
- (void)updateEndpoint:(id)arg1;	// IMP=0x0000000000573d20
- (void)registerForSessionUpdates:(_Bool)arg1;	// IMP=0x0000000000573b78
- (void)_handleMediaUpdateMuted:(id)arg1;	// IMP=0x0000000000573ac9
- (void)_handleMediaUpdateVolume:(id)arg1;	// IMP=0x00000000005739b9
- (void)_handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x000000000057388a
- (void)handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x00000000005737d9
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;	// IMP=0x0000000000573510
- (void)handleSetPlayback:(id)arg1;	// IMP=0x000000000057345f
- (void)_handleSetPlayback:(id)arg1;	// IMP=0x00000000005732f4
- (void)_setPlaybackState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000572d59
- (void)_queueSetPlaybackStateCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000572b70
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;	// IMP=0x0000000000572991
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;	// IMP=0x00000000005728b5
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg1;	// IMP=0x0000000000572625
- (void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)arg1;	// IMP=0x000000000057256f
- (void)_postNotificationOfMediaStateUpdate;	// IMP=0x000000000057255b
- (void)_registerForSessionUpdates:(_Bool)arg1;	// IMP=0x00000000005724d8
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1;	// IMP=0x000000000057230d
- (void)handleMediaPlaybackStateNotification:(id)arg1;	// IMP=0x000000000057225c
- (void)handleRefreshPlayback:(id)arg1;	// IMP=0x00000000005721ab
- (void)_handleGetPlaybackState:(id)arg1;	// IMP=0x00000000005720ce
- (void)_getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000571cd4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;	// IMP=0x0000000000571ae6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000571a12
@property(readonly) unsigned long long hash;
- (id)logIdentifier;	// IMP=0x00000000005719bc
- (void)dealloc;	// IMP=0x0000000000571942
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;	// IMP=0x0000000000571928
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x0000000000571916
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x00000000005715c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

