//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol CSDAVConference, OS_dispatch_queue;

@interface CSDRelayConferenceInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *;	// 16 = 0x10
    NSMutableSet *_conferencesAwaitingConnectionClose;	// 24 = 0x18
    CDUnknownBlockType _conferenceCreationBlock;	// 32 = 0x20
    double _connectionTimeout;	// 40 = 0x28
    double _closeConnectionTimeout;	// 48 = 0x30
    double _prepareToStopTimeout;	// 56 = 0x38
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000000a9e40
+ (id)sharedInstance;	// IMP=0x00100000000a9e0c
- (void).cxx_destruct;	// IMP=0x00200000000ae1e9
@property(nonatomic) double prepareToStopTimeout; // @synthesize prepareToStopTimeout=_prepareToStopTimeout;
@property(nonatomic) double closeConnectionTimeout; // @synthesize closeConnectionTimeout=_closeConnectionTimeout;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(copy, nonatomic) CDUnknownBlockType conferenceCreationBlock; // @synthesize conferenceCreationBlock=_conferenceCreationBlock;
@property(retain, nonatomic) NSMutableSet *conferencesAwaitingConnectionClose; // @synthesize conferencesAwaitingConnectionClose=_conferencesAwaitingConnectionClose;
@property(retain, nonatomic) NSMutableArray *conferenceConnections; // @synthesize conferenceConnections=_conferenceConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conference:(id)arg1 outputLevelChangedTo:(float)arg2;	// IMP=0x00100000000ae0b4
- (void)conference:(id)arg1 inputLevelChangedTo:(float)arg2;	// IMP=0x00100000000ae02b
- (void)conference:(id)arg1 outputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000adfae
- (void)conference:(id)arg1 inputFrequencyLevelChangedTo:(id)arg2;	// IMP=0x00100000000adf31
- (void)sendingAudioChangedForConference:(id)arg1;	// IMP=0x00100000000ade8a
- (void)mutedChangedForConference:(id)arg1;	// IMP=0x00100000000adde3
- (void)connectionClosedForConference:(id)arg1;	// IMP=0x00100000000add38
- (void)conference:(id)arg1 endedWithReason:(long long)arg2 error:(id)arg3;	// IMP=0x00100000000ad9cb
- (void)conferenceStarted:(id)arg1;	// IMP=0x00100000000ad819
- (void)conferenceFinishedPreparing:(id)arg1;	// IMP=0x00100000000ad610
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x00100000000ad394
- (void)_postDidCloseNotificationForConference:(id)arg1;	// IMP=0x00100000000ad2bb
- (void)_postDidCloseNotificationForConferenceIfNecessary:(id)arg1;	// IMP=0x00100000000ad206
- (void)_stopConference:(id)arg1;	// IMP=0x00100000000ad07e
- (void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2;	// IMP=0x00100000000acbc7
- (void)_cleanUpAllConferenceConnectionsForConference:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000aca59
- (void)_prepareConferenceForConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000ac831
@property(readonly, nonatomic) id <CSDAVConference> activeConference;
- (id)_conferenceConnectionsForConference:(id)arg1;	// IMP=0x00100000000ac3ac
- (id)conferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000ac1b1
- (id)activeConferenceConnectionForIdentifier:(id)arg1;	// IMP=0x00100000000abf2a
- (void)stopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000abd87
- (void)prepareToStopConferenceForIdentifier:(id)arg1;	// IMP=0x00100000000ab858
- (void)setConferenceActiveForIdentifier:(id)arg1;	// IMP=0x00100000000ab702
- (void)updateConferenceForIdentifier:(id)arg1 isUsingBaseband:(_Bool)arg2 disableAudio:(_Bool)arg3;	// IMP=0x00100000000ab441
- (void)sendData:(id)arg1 throughConferenceForIdentifier:(id)arg2;	// IMP=0x00100000000ab2f1
- (void)startConferenceForIdentifier:(id)arg1 usingTransport:(id)arg2 remoteInviteDictionary:(id)arg3 didStartHandler:(CDUnknownBlockType)arg4 didStopHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000aaec8
- (void)prepareConferenceForCall:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aade9
- (void)prepareConferenceConnection:(id)arg1 remoteInviteDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aa8fb
- (void)setSendingAudio:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000aa6e0
- (long long)outputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000aa615
- (long long)inputAudioPowerSpectrumTokenForIdentifier:(id)arg1;	// IMP=0x00100000000aa54a
- (_Bool)isSendingAudioForIdentifier:(id)arg1;	// IMP=0x00100000000aa47f
- (void)setMuted:(_Bool)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000aa25d
- (_Bool)isMutedForIdentifier:(id)arg1;	// IMP=0x00100000000aa18b
- (void)uplinkMutedStatusChanged:(id)arg1;	// IMP=0x00100000000aa102
- (void)dealloc;	// IMP=0x00100000000aa08d
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00100000000a9f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

