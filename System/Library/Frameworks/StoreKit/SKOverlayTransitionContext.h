//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASOOverlayTransitionContext;

@interface SKOverlayTransitionContext : NSObject
{
    ASOOverlayTransitionContext *_backing;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000098d0
@property(retain, nonatomic) ASOOverlayTransitionContext *backing; // @synthesize backing=_backing;
- (void)addAnimationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000098af
@property(readonly, nonatomic) struct CGRect endFrame;
@property(readonly, nonatomic) struct CGRect startFrame;
- (id)initWithASOOverlayTransitionContext:(id)arg1;	// IMP=0x0000000000009808

@end

