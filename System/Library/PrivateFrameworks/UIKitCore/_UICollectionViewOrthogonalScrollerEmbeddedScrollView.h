//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICollectionViewOrthogonalScrollView-Protocol.h>

@class NSString, UICollectionView, UIFocusContainerGuide;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView <_UICollectionViewOrthogonalScrollView>
{
    UIFocusContainerGuide *_sectionFocusContainerGuide;	// 120 = 0x78
    UICollectionView *_collectionView;	// 128 = 0x80
    long long _section;	// 136 = 0x88
    struct UIEdgeInsets _baseContentInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000003658ce
@property(nonatomic) struct UIEdgeInsets baseContentInsets; // @synthesize baseContentInsets=_baseContentInsets;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (struct CGPoint)_panGestureVelocityInView:(id)arg1;	// IMP=0x00000000003657d7
- (struct CGPoint)_panGestureLocationInView:(id)arg1;	// IMP=0x000000000036574f
- (void)_focusedItem:(id)arg1 isMinX:(_Bool *)arg2 isMaxX:(_Bool *)arg3 isMinY:(_Bool *)arg4 isMaxY:(_Bool *)arg5;	// IMP=0x00000000003655c1
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x000000000036538c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003652dd
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000036522e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000036517f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000003650d0
- (struct CGPoint)_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint)arg1;	// IMP=0x000000000036508d
- (struct CGPoint)_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint)arg1;	// IMP=0x000000000036504a
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;	// IMP=0x0000000000364eb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000364e2c

// Remaining properties
@property(readonly, nonatomic) struct CGPoint contentOffset;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;

@end
