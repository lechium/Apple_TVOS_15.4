//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SHTaggingViewInnerCircleLayer : CALayer
{
    CALayer *_circleContainerLayer;	// 8 = 0x8
    CAShapeLayer *_circle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005686
@property(retain, nonatomic) CAShapeLayer *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) CALayer *circleContainerLayer; // @synthesize circleContainerLayer=_circleContainerLayer;
- (struct CGPath *)circlePathForRect:(struct CGRect)arg1;	// IMP=0x00000000000055fe
- (void)layoutSublayers;	// IMP=0x00000000000053a5
- (void)setup;	// IMP=0x00000000000051ae
- (id)init;	// IMP=0x0000000000005162
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005116

@end

