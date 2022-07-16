//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVVoiceTriggerClient : NSObject
{
    CDUnknownBlockType _voiceTriggerBlock;	// 8 = 0x8
    CDUnknownBlockType _speakerStateChangedBlock;	// 16 = 0x10
    CDUnknownBlockType _speakerMuteStateChangedBlock;	// 24 = 0x18
    CDUnknownBlockType _siriClientRecordStateChangedBlock;	// 32 = 0x20
    CDUnknownBlockType _serverCrashedBlock;	// 40 = 0x28
    CDUnknownBlockType _serverResetBlock;	// 48 = 0x30
}

+ (_Bool)isAPIAvailable;	// IMP=0x00000000000bd0c4
@property(copy, nonatomic) CDUnknownBlockType serverResetBlock; // @synthesize serverResetBlock=_serverResetBlock;
@property(copy, nonatomic) CDUnknownBlockType serverCrashedBlock; // @synthesize serverCrashedBlock=_serverCrashedBlock;
@property(copy, nonatomic) CDUnknownBlockType siriClientRecordStateChangedBlock; // @synthesize siriClientRecordStateChangedBlock=_siriClientRecordStateChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType speakerMuteStateChangedBlock; // @synthesize speakerMuteStateChangedBlock=_speakerMuteStateChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType speakerStateChangedBlock; // @synthesize speakerStateChangedBlock=_speakerStateChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType voiceTriggerBlock; // @synthesize voiceTriggerBlock=_voiceTriggerBlock;
- (void)siriClientRecordStateChangedNotification:(_Bool)arg1 recordingCount:(unsigned long long)arg2;	// IMP=0x00000000000bcfa4
- (void)speakerMuteStateChangedNotification:(_Bool)arg1;	// IMP=0x00000000000bcf9e
- (void)speakerStateChangedNotification:(id)arg1;	// IMP=0x00000000000bcf98
- (void)voiceTriggerNotification:(id)arg1;	// IMP=0x00000000000bcf92
- (void)setAggressiveECMode:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcf49
- (void)siriClientsRecordingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bced4
- (void)listeningEnabledCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bce5f
- (void)updateVoiceTriggerConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcdec
- (void)updateVoiceTriggerConfiguration:(id)arg1;	// IMP=0x00000000000bcdd8
- (void)enableBargeInMode:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcd65
- (_Bool)hasBargeInSupport;	// IMP=0x00000000000bcbb3
- (void)hasBargeInSupportCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcb3e
- (_Bool)speakerStateMuted;	// IMP=0x00000000000bc98c
- (void)speakerStateMutedCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc917
- (_Bool)speakerStateActive;	// IMP=0x00000000000bc765
- (void)speakerStateActiveCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc6f0
- (void)enableSpeakerStateListening:(_Bool)arg1;	// IMP=0x00000000000bc58b
- (void)enableSpeakerStateListening:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc518
- (void)setListeningProperty:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc4cf
- (void)enableVoiceTriggerListening:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc38f
- (void)enableVoiceTriggerListening:(_Bool)arg1;	// IMP=0x00000000000bc22a
@property(readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;
- (void)getInputChannelInfoCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc003
- (void)voiceTriggerPastDataFramesAvailableCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bbf8e
- (id)voiceTriggerServerConnection;	// IMP=0x00000000000bbf86
- (void)handleMediaServerReset:(id)arg1;	// IMP=0x00000000000bbf5e
- (void)callServerResetBlock;	// IMP=0x00000000000bbe97
- (void)handleMediaServerDeath:(id)arg1;	// IMP=0x00000000000bbe7e
- (void)callServerCrashedBlock;	// IMP=0x00000000000bbdb7
- (void)dealloc;	// IMP=0x00000000000bbcac
- (id)init;	// IMP=0x00000000000bbb96

@end
