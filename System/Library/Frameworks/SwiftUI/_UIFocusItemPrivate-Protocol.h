//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusItem-Protocol.h>

@class UIBezierPath;

@protocol _UIFocusItemPrivate <UIFocusItem>

@optional
@property(nonatomic, readonly) UIBezierPath *_focusRingPath;
@property(nonatomic, readonly) _Bool _wantsFocusRing;
- (_Bool)_wantsKeyEventsWhenDeferred;
@property(nonatomic, readonly) long long _focusItemDeferralMode;
@end

