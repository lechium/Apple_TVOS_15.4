//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
}

+ (id)sharedPreferences;	// IMP=0x00000000000d4be2
- (void).cxx_destruct;	// IMP=0x00000000000d4f15
- (unsigned long long)internalUserClassification;	// IMP=0x00000000000d4ec9
- (id)serverAudioSessionActivationDelay;	// IMP=0x00000000000d4e68
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;	// IMP=0x00000000000d4e07
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;	// IMP=0x00000000000d4da6
- (id)overrideAudioSessionActiveDelay;	// IMP=0x00000000000d4d50
- (id)init;	// IMP=0x00000000000d4d3c
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000000000d4c88

@end

