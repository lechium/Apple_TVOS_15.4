//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryMutableAnimationController-Protocol.h>

@class NSCountedSet, NSMutableDictionary, PXStoryModel;

@interface PXStoryAnimationController <PXStoryMutableAnimationController>
{
    NSMutableDictionary *_animationInfoByIdentifier;	// 8 = 0x8
    NSCountedSet *_checkOutCountsByIdentifier;	// 16 = 0x10
    _Bool _isUpdatingAnimations;	// 24 = 0x18
    PXStoryModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008a9c86
@property(readonly, nonatomic) __weak PXStoryModel *model; // @synthesize model=_model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000008a9b33
- (void)handleModelChange:(unsigned long long)arg1;	// IMP=0x00000000008a9ab2
- (void)_updateAnimations;	// IMP=0x00000000008a99ab
- (void)_invalidateAnimations;	// IMP=0x00000000008a9967
- (void)_configureAnimation:(id)arg1 withAnimationInfo:(id)arg2;	// IMP=0x00000000008a9875
- (void)checkInAnimation:(id)arg1;	// IMP=0x00000000008a976a
- (id)checkOutAnimationWithIdentifier:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000008a9584
- (void)addAnimation:(id)arg1;	// IMP=0x00000000008a94ba
- (void)_handleAnimationInvalidation;	// IMP=0x00000000008a946e
- (void)enumerateAnimationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000008a93d3
- (void)configureUpdater:(id)arg1;	// IMP=0x00000000008a9368
- (id)initWithModel:(id)arg1;	// IMP=0x00000000008a92b7
- (id)initWithObservableModel:(id)arg1;	// IMP=0x00000000008a9234

@end

