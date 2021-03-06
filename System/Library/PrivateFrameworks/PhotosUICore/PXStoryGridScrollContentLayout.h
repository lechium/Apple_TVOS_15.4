//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXStoryModel;
@protocol PXStoryGridScrollContentLayoutDelegate, PXStoryTimeline;

@interface PXStoryGridScrollContentLayout <PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _postUpdateFlags;	// 32 = 0x20
    unsigned int _firstPageSpriteIndex;	// 56 = 0x38
    struct {
        _Bool presentedScrollPositionDidChange;
    } _delegateRespondsTo;	// 60 = 0x3c
    PXStoryModel *_model;	// 64 = 0x40
    id <PXStoryGridScrollContentLayoutDelegate> _delegate;	// 72 = 0x48
    id <PXStoryTimeline> _displayedTimeline;	// 80 = 0x50
    struct CGPoint _presentedScrollPosition;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000e3e5b
@property(retain, nonatomic) id <PXStoryTimeline> displayedTimeline; // @synthesize displayedTimeline=_displayedTimeline;
@property(nonatomic) __weak id <PXStoryGridScrollContentLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint presentedScrollPosition; // @synthesize presentedScrollPosition=_presentedScrollPosition;
@property(readonly, nonatomic) PXStoryModel *model; // @synthesize model=_model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000e3d4d
- (void)_updatePresentedScrollPosition;	// IMP=0x00000000000e3d07
- (void)_invalidatePresentedScrollPosition;	// IMP=0x00000000000e3c42
- (void)_updateContent;	// IMP=0x00000000000e3b6b
- (void)_invalidateContent;	// IMP=0x00000000000e3a77
- (void)_updateDisplayedTimeline;	// IMP=0x00000000000e3a08
- (void)_invalidateDisplayedTimeline;	// IMP=0x00000000000e3914
- (void)update;	// IMP=0x00000000000e3512
- (id)createAnchorForScrollingToClipWithIdentifier:(long long)arg1;	// IMP=0x00000000000e3451
- (id)createAnchorForScrollingToPosition:(CDStruct_982265da)arg1;	// IMP=0x00000000000e338b
- (id)_createAnchorForScrollingWithOffsetProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e329e
- (struct CGPoint)_offsetFromFirstPageForScrollingToClipWithIdentifier:(long long)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x00000000000e3004
- (struct CGPoint)_offsetFromFirstPageForScrollingToPosition:(CDStruct_982265da)arg1 visibleRect:(struct CGRect)arg2;	// IMP=0x00000000000e2e99
- (void)visibleRectDidChange;	// IMP=0x00000000000e2e58
- (void)referenceSizeDidChange;	// IMP=0x00000000000e2e17
- (id)initWithModel:(id)arg1;	// IMP=0x00000000000e2bca
- (id)init;	// IMP=0x00000000000e2b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

