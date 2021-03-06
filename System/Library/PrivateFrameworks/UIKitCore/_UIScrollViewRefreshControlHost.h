//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;	// 16 = 0x10
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x000000000054e62b
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;	// IMP=0x000000000054e524
- (void)incrementInsetHeight:(double)arg1;	// IMP=0x000000000054e4e9
- (void)decrementInsetHeight:(double)arg1;	// IMP=0x000000000054e4ae
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000054e42c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

