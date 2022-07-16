//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, NSString, PBAttentionAwarenessMonitor;

@interface PBConstantAudioOutputController : NSObject
{
    _Bool _constantAudioOutputEnabled;	// 8 = 0x8
    MPAVRoutingController *_systemAudioRoutingController;	// 16 = 0x10
    PBAttentionAwarenessMonitor *_attentionAwarenessMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002ce860
@property(retain, nonatomic) PBAttentionAwarenessMonitor *attentionAwarenessMonitor; // @synthesize attentionAwarenessMonitor=_attentionAwarenessMonitor;
@property(nonatomic, getter=isConstantAudioOutputEnabled) _Bool constantAudioOutputEnabled; // @synthesize constantAudioOutputEnabled=_constantAudioOutputEnabled;
@property(retain, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x00100000002ce560
- (void)homeAccessoryManager:(id)arg1 didChangeOdeonConfigured:(_Bool)arg2;	// IMP=0x00100000002ce350
- (void)attentionAwarenessMonitorDidRegainAttention:(id)arg1;	// IMP=0x00100000002ce250
- (void)attentionAwarenessMonitorDidLoseAttention:(id)arg1;	// IMP=0x00100000002ce160
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000002ce0f0
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ce050
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002cde10
- (_Bool)isConstantAudioAlwaysAllowed;	// IMP=0x00100000002cdd40
- (void)setConstantAudioOutputEnabled:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00100000002cdb00
- (void)enableConstantAudioOutputIfNeeded:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00100000002cd760
- (_Bool)isEndpointHDMI;	// IMP=0x00100000002cd620
- (_Bool)stopControllingConstantAudioOutput:(id *)arg1;	// IMP=0x00100000002cd590
- (_Bool)startControllingConstantAudioOutput:(id *)arg1;	// IMP=0x00100000002cd500
- (void)dealloc;	// IMP=0x00100000002cd3e0
- (id)init;	// IMP=0x00100000002cd0f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
