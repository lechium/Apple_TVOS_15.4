//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVKit/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString, _TVImageLoaderQueue;

@interface TVParadeView : UIView <CAAnimationDelegate>
{
    _Bool _pausedForResignActive;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    _Bool _shuffled;	// 10 = 0xa
    _Bool _inOrder;	// 11 = 0xb
    NSArray *_imageProxies;	// 16 = 0x10
    _TVImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_shuffledImageProxies;	// 32 = 0x20
    NSArray *_positionKeyframes;	// 40 = 0x28
    NSArray *_depthKeyframes;	// 48 = 0x30
    NSArray *_transformKeyframes;	// 56 = 0x38
    struct CGRect _animationBounds;	// 64 = 0x40
    struct CGRect _maximumImageBounds;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005ba40
@property(retain, nonatomic) NSArray *transformKeyframes; // @synthesize transformKeyframes=_transformKeyframes;
@property(retain, nonatomic) NSArray *depthKeyframes; // @synthesize depthKeyframes=_depthKeyframes;
@property(retain, nonatomic) NSArray *positionKeyframes; // @synthesize positionKeyframes=_positionKeyframes;
@property(nonatomic) struct CGRect maximumImageBounds; // @synthesize maximumImageBounds=_maximumImageBounds;
@property(nonatomic) struct CGRect animationBounds; // @synthesize animationBounds=_animationBounds;
@property(copy, nonatomic) NSArray *shuffledImageProxies; // @synthesize shuffledImageProxies=_shuffledImageProxies;
@property(retain, nonatomic) _TVImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic, getter=isInOrder) _Bool inOrder; // @synthesize inOrder=_inOrder;
@property(nonatomic, getter=isShuffled) _Bool shuffled; // @synthesize shuffled=_shuffled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (id)_sublayerWithAnimation:(id)arg1;	// IMP=0x000000000005b76d
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000005b5e1
- (void)_stopAnimations;	// IMP=0x000000000005b47b
- (void)_updateAnimationForLayer:(id)arg1 timeOffset:(double)arg2;	// IMP=0x000000000005ace4
- (void)_updateAnimations;	// IMP=0x000000000005ab1a
- (void)_updateKeyframes;	// IMP=0x000000000005a7d9
- (id)_createLayerForImage:(struct CGImage *)arg1;	// IMP=0x000000000005a706
- (id)_imageProxiesToLoad;	// IMP=0x000000000005a6d8
- (long long)_maximumImageCount;	// IMP=0x000000000005a6cd
- (_Bool)isPreviewPaused;	// IMP=0x000000000005a5ff
- (void)setPreviewPaused:(_Bool)arg1;	// IMP=0x000000000005a5ed
- (void)_applicationDidFinishSuspensionNotification:(id)arg1;	// IMP=0x000000000005a15d
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000000005a118
- (void)didMoveToSuperview;	// IMP=0x000000000005a0cf
- (void)layoutSubviews;	// IMP=0x000000000005a010
- (void)dealloc;	// IMP=0x0000000000059f1a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000059c7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

