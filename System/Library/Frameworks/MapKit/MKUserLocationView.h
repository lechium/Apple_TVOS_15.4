//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MKUserLocationView;

@interface MKUserLocationView
{
    _Bool _selected;	// 256 = 0x100
    _MKUserLocationView *_mkUserLocationView;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000001818c5
@property(retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView; // @synthesize mkUserLocationView=_mkUserLocationView;
- (void)_setRotateInnerImageToMatchCourse:(_Bool)arg1;	// IMP=0x0000000000181883
- (_Bool)_rotateInnerImageToMatchCourse;	// IMP=0x0000000000181866
- (void)_setInnerImageMask:(id)arg1;	// IMP=0x0000000000181849
- (id)_innerImageMask;	// IMP=0x000000000018182c
- (void)_setPuckScale:(double)arg1;	// IMP=0x000000000018180f
- (void)_setAccuracyRingAlpha:(double)arg1;	// IMP=0x00000000001817f2
- (double)_accuracyRingAlpha;	// IMP=0x00000000001817d5
- (void)_setPuckAlpha:(double)arg1;	// IMP=0x00000000001817b8
- (double)_puckAlpha;	// IMP=0x000000000018179b
- (void)_setMaxRadiusToShowAccuracyRing:(double)arg1;	// IMP=0x000000000018177e
- (double)_maxRadiusToShowAccuracyRing;	// IMP=0x0000000000181761
- (void)_setAllowsAccuracyRing:(_Bool)arg1;	// IMP=0x0000000000181744
- (_Bool)_allowsAccuracyRing;	// IMP=0x0000000000181727
- (void)_setShouldShowOuterRing:(_Bool)arg1;	// IMP=0x000000000018170a
- (_Bool)_shouldShowOuterRing;	// IMP=0x00000000001816ed
- (void)_setShouldInnerPulse:(_Bool)arg1;	// IMP=0x00000000001816d0
- (_Bool)_shouldInnerPulse;	// IMP=0x00000000001816b3
- (void)_setAllowsPulse:(_Bool)arg1;	// IMP=0x0000000000181696
- (_Bool)_allowsPulse;	// IMP=0x0000000000181679
- (void)_setHeadingIndicatorStyle:(long long)arg1;	// IMP=0x000000000018165c
- (long long)_headingIndicatorStyle;	// IMP=0x000000000018163f
- (struct UIEdgeInsets)_annotationTrackingInsets;	// IMP=0x0000000000181601
- (void)_setHeading:(double)arg1;	// IMP=0x00000000001815e4
- (double)_heading;	// IMP=0x00000000001815c7
- (void)_setCanShowHeadingIndicator:(_Bool)arg1;	// IMP=0x00000000001815aa
- (_Bool)_canShowHeadingIndicator;	// IMP=0x000000000018158d
- (void)_setShouldDisplayHeading:(_Bool)arg1;	// IMP=0x0000000000181570
- (_Bool)_shouldDisplayHeading;	// IMP=0x0000000000181553
- (_Bool)_isStale;	// IMP=0x0000000000181536
- (void)_locationManagerFailedToUpdateLocation;	// IMP=0x0000000000181519
- (void)_updateStateFromLocation:(id)arg1 duration:(double)arg2;	// IMP=0x00000000001814fc
- (id)_lastLocation;	// IMP=0x00000000001814df
- (struct CGRect)_mapkit_visibleRect;	// IMP=0x00000000001814a1
- (void)_setMapRotationRadians:(double)arg1;	// IMP=0x000000000018144b
- (void)_setMapPitchRadians:(double)arg1;	// IMP=0x00000000001813f5
- (void)_updateFromMap;	// IMP=0x00000000001813a9
- (void)_setMapDisplayStyle:(CDStruct_80aa614a)arg1;	// IMP=0x0000000000181353
- (void)_setMapType:(unsigned long long)arg1;	// IMP=0x00000000001812fd
- (void)prepareForDisplay;	// IMP=0x00000000001812b1
- (void)prepareForReuse;	// IMP=0x0000000000181265
- (_Bool)isDraggable;	// IMP=0x000000000018125d
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001811f2
- (_Bool)isSelected;	// IMP=0x00000000001811e2
- (_Bool)_allowedToShowCallout;	// IMP=0x00000000001811da
- (void)setDetailCalloutAccessoryView:(id)arg1;	// IMP=0x00000000001811bd
- (id)detailCalloutAccessoryView;	// IMP=0x00000000001811a0
- (void)setRightCalloutAccessoryView:(id)arg1;	// IMP=0x0000000000181183
- (id)rightCalloutAccessoryView;	// IMP=0x0000000000181166
- (void)setLeftCalloutAccessoryView:(id)arg1;	// IMP=0x0000000000181149
- (id)leftCalloutAccessoryView;	// IMP=0x000000000018112c
- (void)setRightCalloutOffset:(struct CGPoint)arg1;	// IMP=0x000000000018110f
- (struct CGPoint)rightCalloutOffset;	// IMP=0x00000000001810f2
- (void)setLeftCalloutOffset:(struct CGPoint)arg1;	// IMP=0x00000000001810d5
- (struct CGPoint)leftCalloutOffset;	// IMP=0x00000000001810b8
- (void)setCalloutOffset:(struct CGPoint)arg1;	// IMP=0x000000000018109b
- (struct CGPoint)calloutOffset;	// IMP=0x000000000018107e
- (void)setCanShowCallout:(_Bool)arg1;	// IMP=0x0000000000181061
- (_Bool)canShowCallout;	// IMP=0x0000000000181044
- (void)setCenterOffset:(struct CGPoint)arg1;	// IMP=0x0000000000181027
- (struct CGPoint)centerOffset;	// IMP=0x000000000018100a
- (void)_setSelectionPriority:(float)arg1;	// IMP=0x0000000000180fed
- (float)_selectionPriority;	// IMP=0x0000000000180fd0
- (void)setAnnotation:(id)arg1;	// IMP=0x0000000000180f5e
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000180de8

@end

