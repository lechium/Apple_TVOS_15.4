//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SetVolumeLevelIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents27SetVolumeLevelIntentHandler : NSObject <SetVolumeLevelIntentHandling>
{
    MISSING_TYPE *deviceSelector;	// 8 = 0x8
    MISSING_TYPE *accessoryVolumeController;	// 16 = 0x10
    MISSING_TYPE *analyticsService;	// 56 = 0x38
    MISSING_TYPE *deviceState;	// 96 = 0x60
    MISSING_TYPE *playbackController;	// 136 = 0x88
    MISSING_TYPE *userDefaultsProvider;	// 176 = 0xb0
    MISSING_TYPE *audioSession;	// 216 = 0xd8
    MISSING_TYPE *aceServiceHelper;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000000055af0
- (void)resolveVolumeLevelForSetVolumeLevel:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051730
- (void)resolveDevicesForSetVolumeLevel:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050bb0
- (void)confirmSetVolumeLevel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f5e0
- (void)handleSetVolumeLevel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f430
- (id)init;	// IMP=0x000000000004db10

@end

