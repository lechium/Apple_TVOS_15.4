//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollViewPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPanGestureRecognizer : NSObject
{
    struct CGPoint _translation;	// 8 = 0x8
    struct CGPoint _velocity;	// 24 = 0x18
    long long _state;	// 40 = 0x28
    UIScrollViewPanGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000100b34b
@property(retain, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000100b1bc
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x000000000100b0d2
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x000000000100afe9
- (struct CGPoint)translationInView:(id)arg1;	// IMP=0x000000000100aeff
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000100ae0b
- (void)simulateTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x000000000100adf1

@end

