//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKInfoCardThemeListener-Protocol.h>
#import <MapKit/MKStackingViewControllerSizableView-Protocol.h>

@class CALayer, MKMapView, NSString;
@protocol MKInfoCardTheme;

@interface UIView (MapKitExtras) <MKStackingViewControllerSizableView, MKInfoCardThemeListener>
+ (double)_mapkit_currentAnimationDuration;	// IMP=0x000000000002d4cc
+ (id)_mapkit_currentAnimationTimingFunction;	// IMP=0x000000000002d472
+ (_Bool)_mapkit_shouldAdoptImplicitAnimationParameters;	// IMP=0x000000000002d43d
+ (void)_mapkit_performWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x00000000001108ed
+ (void)_mapkit_animateFromCurrentStateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000110794
+ (void)_mapkit_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000110643
+ (void)_maps_setDoesNotTranslateAutoresizingConstraintsForViewsDictionary:(id)arg1;	// IMP=0x0000000000110610
- (id)_findNearestViewController;	// IMP=0x000000000002cef8
@property(readonly, nonatomic) struct CGRect _mapkit_doubleFrame;
- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;	// IMP=0x000000000002cd43
@property(readonly, retain, nonatomic) MKMapView *_mapKit_mapView;
@property(readonly, retain, nonatomic) CALayer *_mapkit_currentLayer;
- (struct CGRect)_mapkit_translateRect:(struct CGRect)arg1 ifNeededFromSingleEdge:(unsigned long long)arg2;	// IMP=0x000000000002db28
- (struct UIEdgeInsets)_mapkit_userInterfaceOnlySafeAreaInsets;	// IMP=0x000000000002d552
@property(readonly, nonatomic) _Bool _mapkit_isDarkModeEnabled;
- (void)_mapkit_bringSubviewToFront:(id)arg1;	// IMP=0x000000000002d4f7
- (void)_mapkit_insertSubview:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000002d4e5
- (double)_mapkit_trailingMargin;	// IMP=0x000000000002de6d
- (double)_mapkit_leadingMargin;	// IMP=0x000000000002de24
- (_Bool)_mapkit_YCoordinate:(double)arg1 liesInDirection:(long long)arg2 startingFromYCoordinate:(double)arg3;	// IMP=0x0000000000110dbb
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromYCoordinate:(double)arg3;	// IMP=0x0000000000110da3
- (struct CGRect)_mapkit_rectWithSize:(struct CGSize)arg1 XCoordinate:(double)arg2 atDistance:(double)arg3 inDirection:(long long)arg4 fromEdge:(long long)arg5;	// IMP=0x0000000000110d40
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromEdge:(long long)arg3;	// IMP=0x0000000000110caa
- (id)_mapkit_constraintsPinningSubviewToBounds:(id)arg1;	// IMP=0x0000000000110a5d
- (_Bool)_mapkit_isDescendantOfView:(id)arg1;	// IMP=0x0000000000110a4b
- (void)_mapkit_setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x0000000000110a39
- (float)_mapkit_contentHuggingPriorityForAxis:(long long)arg1;	// IMP=0x0000000000110a27
- (void)_mapkit_setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;	// IMP=0x0000000000110a15
- (float)_mapkit_contentCompressionResistancePriorityForAxis:(long long)arg1;	// IMP=0x0000000000110a03
- (struct CGSize)_mapkit_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001109f1
- (void)_mapkit_sizeToFit;	// IMP=0x00000000001109df
- (void)_mapkit_insertSubviewBelowAllOtherSubviews:(id)arg1;	// IMP=0x00000000001109cb
- (void)_mapkit_insertSubviewAboveAllOtherSubviews:(id)arg1;	// IMP=0x00000000001109b9
- (_Bool)_mapkit_isRTL;	// IMP=0x000000000011099f
- (void)_mapKit_setNeedsDisplay;	// IMP=0x000000000011098d
- (struct CGSize)_mapkit_fittingSize;	// IMP=0x000000000011096b
- (void)_mapkit_setBackgroundColor:(id)arg1;	// IMP=0x0000000000110959
- (void)_mapkit_layoutBelowIfNeeded;	// IMP=0x0000000000110947
- (void)_mapkit_layoutIfNeeded;	// IMP=0x0000000000110935
- (void)_mapkit_updateConstraintsIfNeeded;	// IMP=0x0000000000110923
- (void)_mapkit_setNeedsLayout;	// IMP=0x0000000000110911
- (void)_mapkit_setNeedsUpdateConstraints;	// IMP=0x00000000001108ff
- (void)infoCardThemeChanged;	// IMP=0x0000000000212466
@property(readonly, nonatomic) id <MKInfoCardTheme> mk_theme;
- (id)_mapkit_accessoryControlToExtendWithCallout;	// IMP=0x000000000023a7b8

// Remaining properties
@property(readonly, nonatomic) double _currentScreenScale; // @dynamic _currentScreenScale;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

