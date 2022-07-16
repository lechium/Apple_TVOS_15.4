//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationLandingViewSettings : NSObject
{
    _Bool _useBlackWave;	// 8 = 0x8
    double _fadeInDuration;	// 16 = 0x10
    double _fadeOutDuration;	// 24 = 0x18
    double _shrinkDuration;	// 32 = 0x20
    double _colorTransitionInDuration;	// 40 = 0x28
    double _colorTransitionOutDuration;	// 48 = 0x30
    double _circleRPM;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000000008ff875
@property(nonatomic) _Bool useBlackWave; // @synthesize useBlackWave=_useBlackWave;
@property(nonatomic) double circleRPM; // @synthesize circleRPM=_circleRPM;
@property(nonatomic) double colorTransitionOutDuration; // @synthesize colorTransitionOutDuration=_colorTransitionOutDuration;
@property(nonatomic) double colorTransitionInDuration; // @synthesize colorTransitionInDuration=_colorTransitionInDuration;
@property(nonatomic) double shrinkDuration; // @synthesize shrinkDuration=_shrinkDuration;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
- (id)init;	// IMP=0x00000000008ff89a

@end

