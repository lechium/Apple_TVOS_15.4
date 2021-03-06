//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXStoryModel;

@interface PXStoryModelTimelineLayout <PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    PXStoryModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000076e050
@property(readonly, nonatomic) PXStoryModel *model; // @synthesize model=_model;
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x000000000076e039
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000076dfec
- (void)updateClipsCornerRadius;	// IMP=0x000000000076dfe6
- (void)invalidateClipsCornerRadius;	// IMP=0x000000000076def2
- (void)updatePresentedTimelineTransition;	// IMP=0x000000000076deec
- (void)invalidatePresentedTimelineTransition;	// IMP=0x000000000076ddf8
- (void)updateDisplayedTimelineRect;	// IMP=0x000000000076dd51
- (void)invalidateDisplayedRect;	// IMP=0x000000000076dc5d
- (void)updateDisplayedTimeRange;	// IMP=0x000000000076dbb6
- (void)invalidateDisplayedTimeRange;	// IMP=0x000000000076dac2
- (void)updateDisplayedTimeline;	// IMP=0x000000000076da1b
- (void)invalidateDisplayedTimeline;	// IMP=0x000000000076d927
- (void)didUpdate;	// IMP=0x000000000076d851
- (void)update;	// IMP=0x000000000076d389
- (void)willUpdate;	// IMP=0x000000000076d2ae
- (void)configureClipLayout:(id)arg1;	// IMP=0x000000000076d21a
- (id)initWithModel:(id)arg1;	// IMP=0x000000000076d145
- (id)init;	// IMP=0x000000000076d0cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

