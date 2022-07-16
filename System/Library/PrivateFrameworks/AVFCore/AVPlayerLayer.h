//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <AVFCore/AVKeyPathDependencyHost-Protocol.h>
#import <AVFCore/AVWeakObservable-Protocol.h>

@class AVPlayer, AVPlayerLayerInternal, NSDictionary, NSString;

@interface AVPlayerLayer : CALayer <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVPlayerLayerInternal *_playerLayer;	// 8 = 0x8
}

+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;	// IMP=0x000000000000d84c
+ (id)keyPathsForValuesAffectingVideoRect;	// IMP=0x000000000000d278
+ (id)makeClosedCaptionLayer;	// IMP=0x0000000000007a77
+ (id)playerLayerWithPlayer:(id)arg1;	// IMP=0x0000000000007a3b
- (_Bool)_isPartOfForegroundScene;	// IMP=0x000000000000fc8d
- (void)_setIsPartOfForegroundScene:(_Bool)arg1;	// IMP=0x000000000000fbfd
- (void)_notifyPlayerOfLayerForegroundStateChange;	// IMP=0x000000000000fb37
- (void)_updateIsPartOfForegroundScene;	// IMP=0x000000000000fb06
- (void)_forceWindowSceneEvent:(_Bool)arg1;	// IMP=0x000000000000fae4
- (void)_windowSceneWillEnterForeground:(id)arg1;	// IMP=0x000000000000fa4d
- (void)_windowSceneWillEnterForeground;	// IMP=0x000000000000fa21
- (void)_windowSceneDidEnterBackground:(id)arg1;	// IMP=0x000000000000f98a
- (void)_windowSceneDidEnterBackground;	// IMP=0x000000000000f963
- (_Bool)_currentWindowSceneIsForeground;	// IMP=0x000000000000f8bf
- (_Bool)_currentWindowSceneIsForegroundDefault;	// IMP=0x000000000000f889
- (void)removeFromSuperlayer;	// IMP=0x000000000000f85a
- (void)replaceSublayer:(id)arg1 with:(id)arg2;	// IMP=0x000000000000f804
- (void)insertSublayer:(id)arg1 above:(id)arg2;	// IMP=0x000000000000f7ae
- (void)insertSublayer:(id)arg1 below:(id)arg2;	// IMP=0x000000000000f758
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000000f702
- (void)addSublayer:(id)arg1;	// IMP=0x000000000000f680
- (void)setSublayers:(id)arg1;	// IMP=0x000000000000f634
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;	// IMP=0x000000000000f52d
- (id)placeholderContentLayerDuringPIPMode;	// IMP=0x000000000000f515
- (void)_setPreventsChangesToSublayerHierarchy:(_Bool)arg1;	// IMP=0x000000000000f4a7
- (_Bool)_preventsChangesToSublayerHierarchy;	// IMP=0x000000000000f490
- (void)_setWillManageSublayersAsSwappedLayers:(_Bool)arg1;	// IMP=0x000000000000f3cd
- (_Bool)_willManageSublayersAsSwappedLayers;	// IMP=0x000000000000f30e
- (void)_setSublayersForPIP:(id)arg1;	// IMP=0x000000000000eeea
- (void)_setSublayersPreventChangesToSublayerHierarchy:(_Bool)arg1;	// IMP=0x000000000000ee34
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;	// IMP=0x000000000000eb63
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;	// IMP=0x000000000000eb03
- (id)_sublayersForPIP;	// IMP=0x000000000000e9cd
- (void)_forceLayout;	// IMP=0x000000000000e9b6
- (void)setPIPModeEnabled:(_Bool)arg1;	// IMP=0x000000000000e912
- (_Bool)isPIPModeEnabled;	// IMP=0x000000000000e8fb
- (void)_leavePIPModeForLayer:(id)arg1;	// IMP=0x000000000000e7a3
- (void)leavePIPMode;	// IMP=0x000000000000e772
- (void)_enterPIPModeRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000e57f
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000e46f
- (void)stopRedirectingVideoToLayer:(id)arg1;	// IMP=0x000000000000e434
- (void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2;	// IMP=0x000000000000e2c8
- (void)_disassociateWithLayerForMode:(long long)arg1;	// IMP=0x000000000000e018
- (long long)_activeMode;	// IMP=0x000000000000df53
- (id)_associatedRemoteModeLayer;	// IMP=0x000000000000de50
- (void)_associateWithLayer:(id)arg1 forMode:(long long)arg2;	// IMP=0x000000000000dc3b
- (void)_unstashClientLayers;	// IMP=0x000000000000dbd0
- (void)_stashClientLayers;	// IMP=0x000000000000d8d7
- (void)_configurePlayerWhenLeavingPIP;	// IMP=0x000000000000d7be
- (void)_configurePlayerWhenEnteringPIP;	// IMP=0x000000000000d725
- (void)setToneMapToStandardDynamicRange:(_Bool)arg1;	// IMP=0x000000000000d6c2
- (void)setForScrubbingOnly:(_Bool)arg1;	// IMP=0x000000000000d687
- (_Bool)isForScrubbingOnly;	// IMP=0x000000000000d670
- (void)setLegibleDisplayEnabled:(_Bool)arg1;	// IMP=0x000000000000d57a
- (_Bool)isLegibleDisplayEnabled;	// IMP=0x000000000000d563
- (struct NSEdgeInsets)legibleContentInsets;	// IMP=0x000000000000d53a
- (void)setLegibleContentInsets:(struct NSEdgeInsets)arg1;	// IMP=0x000000000000d3be
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000000d3a0
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;	// IMP=0x000000000000d1f7
- (long long)lanczosFilterDownscaleFactor;	// IMP=0x000000000000d13b
- (void)setLanczosFilterDownscalingEnabled:(_Bool)arg1;	// IMP=0x000000000000d0c7
- (_Bool)isLanczosFilterDownscalingEnabled;	// IMP=0x000000000000d00b
- (id)videoPerformanceMetrics;	// IMP=0x000000000000cfbb
- (void)setOverscanSubtitleSupportEnabled:(_Bool)arg1;	// IMP=0x000000000000cf8c
- (_Bool)isOverscanSubtitleSupportEnabled;	// IMP=0x000000000000ceb5
- (void)_setShowInterstitialInstead:(_Bool)arg1;	// IMP=0x000000000000ccc0
- (_Bool)_showInterstitialInstead;	// IMP=0x000000000000cbf5
- (id)_interstitialLayer;	// IMP=0x000000000000c9c1
- (id)_subtitleLayer;	// IMP=0x000000000000c98a
- (id)_closedCaptionLayer;	// IMP=0x000000000000c953
- (id)_videoLayer;	// IMP=0x000000000000c91b
- (id)_maskLayer;	// IMP=0x000000000000c8e3
- (void)_getMaskLayer:(id *)arg1 videoLayer:(id *)arg2 subtitleLayer:(id *)arg3 closedCaptionLayer:(id *)arg4 interstitialLayer:(id *)arg5;	// IMP=0x000000000000c466
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(copy) NSString *videoGravity;
- (void)_updateReadyForDisplayForPlayerCurrentItem;	// IMP=0x000000000000bb2a
- (void)hasEnqueuedVideoFrameChanged:(id)arg1;	// IMP=0x000000000000bab6
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000000b959
- (void)_setPlayer:(id)arg1 forPIP:(_Bool)arg2;	// IMP=0x000000000000b555
@property(retain, nonatomic) AVPlayer *player;
- (id)playerPublisher;	// IMP=0x000000000000b517
- (void)_handleIsDisplayingClosedCaptionsDidChange:(_Bool)arg1 player:(id)arg2;	// IMP=0x000000000000b2c7
- (void)_handlePlayerCurrentItemDidChangeForPlayer:(id)arg1;	// IMP=0x000000000000b211
- (void)_handleNonForcedSubtitleDisplayDidChange:(_Bool)arg1 player:(id)arg2;	// IMP=0x000000000000b158
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000b084
- (void)_stopObservingPlayer:(id)arg1;	// IMP=0x000000000000af3f
- (void)_startObservingPlayer:(id)arg1;	// IMP=0x000000000000a8b7
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(_Bool)arg1;	// IMP=0x000000000000a6c4
- (struct CGSize)_playerCurrentItemPresentationSize;	// IMP=0x000000000000a699
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;	// IMP=0x000000000000a65d
- (void)_notifyPlayerOfDisplaySize;	// IMP=0x000000000000a632
- (struct CGSize)_displaySize;	// IMP=0x000000000000a4b0
- (void)dealloc;	// IMP=0x000000000000a205
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;	// IMP=0x000000000000a1e4
- (void)removeAllAnimations;	// IMP=0x000000000000a109
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x0000000000009c5c
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000099f2
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000097ef
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4;	// IMP=0x000000000000968b
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000094d7
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009436
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009369
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize)arg5 forKey:(id)arg6;	// IMP=0x0000000000008fdb
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000008e9c
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000008b74
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000008b21
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000008a63
- (void)layoutSublayers;	// IMP=0x0000000000008317
- (id)initWithLayer:(id)arg1;	// IMP=0x00000000000081bf
- (id)init;	// IMP=0x0000000000007a90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

