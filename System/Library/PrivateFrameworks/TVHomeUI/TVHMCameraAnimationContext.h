//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, UIView;

@interface TVHMCameraAnimationContext : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _reverseAnimation;	// 9 = 0x9
    _Bool _skipAnimation;	// 10 = 0xa
    UIView *_snapshotViewToBlurAndScale;	// 16 = 0x10
    double _cameraCornerRadius;	// 24 = 0x18
    double _focusSizeIncrease;	// 32 = 0x20
    NSUUID *_cameraIdentifier;	// 40 = 0x28
    struct CGRect _contentViewOriginatingFrame;	// 48 = 0x30
    struct CGRect _contentViewDestinationFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001ef10
@property(retain, nonatomic) NSUUID *cameraIdentifier; // @synthesize cameraIdentifier=_cameraIdentifier;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) double cameraCornerRadius; // @synthesize cameraCornerRadius=_cameraCornerRadius;
@property(retain, nonatomic) UIView *snapshotViewToBlurAndScale; // @synthesize snapshotViewToBlurAndScale=_snapshotViewToBlurAndScale;
@property(nonatomic) _Bool skipAnimation; // @synthesize skipAnimation=_skipAnimation;
@property(nonatomic) struct CGRect contentViewDestinationFrame; // @synthesize contentViewDestinationFrame=_contentViewDestinationFrame;
@property(nonatomic) struct CGRect contentViewOriginatingFrame; // @synthesize contentViewOriginatingFrame=_contentViewOriginatingFrame;
@property(nonatomic, getter=isReverseAnimation) _Bool reverseAnimation; // @synthesize reverseAnimation=_reverseAnimation;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;

@end

