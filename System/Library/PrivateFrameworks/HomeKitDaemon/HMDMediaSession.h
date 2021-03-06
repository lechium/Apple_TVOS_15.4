//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

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

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005de302
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)arg1;	// IMP=0x00000000005de223
+ (id)mediaPropertyMessageKeys;	// IMP=0x00000000005de181
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000005de179
+ (id)logCategory;	// IMP=0x00000000005de149
+ (id)sessionForCurrentAccessoryWithSessionIdentifier:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x00000000005de063
- (void).cxx_destruct;	// IMP=0x00000000005dade9
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
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005dac2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005da9f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005da940
- (void)writeProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005da820
- (void)readProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005da744
- (void)removeMediaProfile:(id)arg1;	// IMP=0x00000000005da679
- (void)addMediaProfile:(id)arg1;	// IMP=0x00000000005da573
@property(readonly, nonatomic) NSArray *mediaProfiles;
- (void)updateEndpoint:(id)arg1;	// IMP=0x00000000005da37c
- (void)registerForSessionUpdates:(_Bool)arg1;	// IMP=0x00000000005da1d4
- (void)_handleMediaUpdateMuted:(id)arg1;	// IMP=0x00000000005da125
- (void)_handleMediaUpdateVolume:(id)arg1;	// IMP=0x00000000005da015
- (void)_handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x00000000005d9ee6
- (void)handleMediaSessionSetAudioControl:(id)arg1;	// IMP=0x00000000005d9e35
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;	// IMP=0x00000000005d9b6c
- (void)handleSetPlayback:(id)arg1;	// IMP=0x00000000005d9abb
- (void)_handleSetPlayback:(id)arg1;	// IMP=0x00000000005d9950
- (void)_setPlaybackState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005d93b5
- (void)_queueSetPlaybackStateCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005d91cc
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;	// IMP=0x00000000005d8fed
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;	// IMP=0x00000000005d8f11
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg1;	// IMP=0x00000000005d8c81
- (void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)arg1;	// IMP=0x00000000005d8bcb
- (void)_postNotificationOfMediaStateUpdate;	// IMP=0x00000000005d8bb7
- (void)_registerForSessionUpdates:(_Bool)arg1;	// IMP=0x00000000005d8b34
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1;	// IMP=0x00000000005d8969
- (void)handleMediaPlaybackStateNotification:(id)arg1;	// IMP=0x00000000005d88b8
- (void)handleRefreshPlayback:(id)arg1;	// IMP=0x00000000005d8807
- (void)_handleGetPlaybackState:(id)arg1;	// IMP=0x00000000005d872a
- (void)_getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005d8330
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;	// IMP=0x00000000005d8145
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d8071
@property(readonly) unsigned long long hash;
- (id)logIdentifier;	// IMP=0x00000000005d801b
- (void)dealloc;	// IMP=0x00000000005d7fa1
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;	// IMP=0x00000000005d7f87
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x00000000005d7f75
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;	// IMP=0x00000000005d7c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

