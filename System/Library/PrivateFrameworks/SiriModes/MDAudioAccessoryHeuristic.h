//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriModes/MDModeHeuristic-Protocol.h>

@class AFNotifyObserver, AVOutputContext, MDModeDecision;

@interface MDAudioAccessoryHeuristic : NSObject <MDModeHeuristic>
{
    _Bool _connectedToAudioAccessory;	// 8 = 0x8
    AFNotifyObserver *_connectedOutputDevicesObserver;	// 16 = 0x10
    AVOutputContext *_sharedSystemAudioContext;	// 24 = 0x18
    MDModeDecision *_modeDecisionBasedOnAudioAccessory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005c43
- (void)_connectedOutputDevicesDidChange:(id)arg1;	// IMP=0x0000000000005ae4
- (void)_fetchConnectedAudioAccessoryState;	// IMP=0x0000000000005930
- (_Bool)isConnectedToAudioAccessory;	// IMP=0x0000000000005927
- (id)determineCurrentMode;	// IMP=0x00000000000058e7
- (id)init;	// IMP=0x00000000000057cb

@end
