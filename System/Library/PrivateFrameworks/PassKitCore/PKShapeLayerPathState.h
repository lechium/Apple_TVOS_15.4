//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKShapeLayerPathState : NSObject
{
    double _strokeStartT0;	// 8 = 0x8
    double _strokeStartT1;	// 16 = 0x10
    double _strokeEndT0;	// 24 = 0x18
    double _strokeEndT1;	// 32 = 0x20
}

- (double)progressForShapeLayer:(id)arg1;	// IMP=0x00000000003cfac4
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cf985
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2;	// IMP=0x00000000003cf969
- (double)strokeEndAtProgress:(double)arg1;	// IMP=0x00000000003cf926
- (double)strokeStartAtProgress:(double)arg1;	// IMP=0x00000000003cf8e3
- (id)description;	// IMP=0x00000000003cf84d
- (void)dealloc;	// IMP=0x00000000003cf81e
- (id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4;	// IMP=0x00000000003cf7ae
- (id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2;	// IMP=0x00000000003cf793
- (id)initWithShapeLayer:(id)arg1 reverse:(_Bool)arg2;	// IMP=0x00000000003cf701
- (id)initWithShapeLayer:(id)arg1;	// IMP=0x00000000003cf6ed
- (id)init;	// IMP=0x00000000003cf6ca

@end

