//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIColor;

@interface PXUIViewControllerFadeThroughColorTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration;	// 8 = 0x8
    UIColor *_midpointColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004da966
@property(readonly, copy, nonatomic) UIColor *midpointColor; // @synthesize midpointColor=_midpointColor;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000004da5e0
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000004da5ce
- (id)initWithDuration:(double)arg1 midpointColor:(id)arg2;	// IMP=0x00000000004da522
- (id)init;	// IMP=0x00000000004da506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

