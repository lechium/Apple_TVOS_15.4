//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/UIFocusEnvironment-Protocol.h>

@class UIFocusEffect, UIFocusMovementHint;

@protocol UIFocusItem <UIFocusEnvironment>
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;

@optional
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
- (void)didHintFocusMovement:(UIFocusMovementHint *)arg1;
@end

