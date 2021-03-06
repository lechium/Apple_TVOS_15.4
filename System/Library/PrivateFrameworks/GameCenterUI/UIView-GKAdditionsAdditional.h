//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (GKAdditionsAdditional)
+ (id)_gkViewFromNib;	// IMP=0x00000000000ea44e
+ (id)_gkStandardBackdropView;	// IMP=0x00000000000fb85c
- (id)_gkAncestryAffectingVisualLayout;	// IMP=0x0000000000008bba
- (id)_gkAncestryDescription;	// IMP=0x0000000000008a8e
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000008a79
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;	// IMP=0x000000000000889f
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;	// IMP=0x0000000000008708
- (id)_gkRecursiveDescriptionForKey:(id)arg1;	// IMP=0x00000000000086f4
- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;	// IMP=0x00000000000085fe
@property(nonatomic) struct CGPoint integralCenter;
- (void)_gkSetNeedsRender;	// IMP=0x00000000000a1fa2
- (void)_gkRemoveAllConstraints;	// IMP=0x00000000000bba1b
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;	// IMP=0x00000000000fbc7e
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;	// IMP=0x00000000000fbaea
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;	// IMP=0x00000000000fba6b
- (id)_gkBackdropView;	// IMP=0x00000000000fb9d9
- (id)_gkApplyFakeStatusBarView;	// IMP=0x00000000000fb8d2
- (void)_gkSetDrawsAsKnockout:(_Bool)arg1 inBackdrop:(id)arg2;	// IMP=0x00000000000fb7aa
- (void)_gkSetDrawsAsBackdropOverlay:(_Bool)arg1;	// IMP=0x00000000000fb774
@property(nonatomic, readonly) double lastBaselineMaxY;
@property(nonatomic, readonly) double lastBaselineFromBottom;
@property(nonatomic, readonly) double firstBaselineFromTop;
@end

