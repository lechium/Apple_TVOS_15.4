//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SetSubtitleStateIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents29SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling>
{
    MISSING_TYPE *playbackController;	// 8 = 0x8
    MISSING_TYPE *deviceSelector;	// 48 = 0x30
    MISSING_TYPE *analyticsService;	// 56 = 0x38
    MISSING_TYPE *aceServiceHelper;	// 96 = 0x60
    MISSING_TYPE *deviceState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000010dad0
- (void)confirmSetSubtitleState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c7d0
- (void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c680
- (void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c410
- (void)handleSetSubtitleState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010b8a0
- (id)init;	// IMP=0x000000000010b560

@end

