//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKWeakContainer : NSObject
{
    _Bool _wasOnScreen;	// 8 = 0x8
    UIView *_scrollingView;	// 16 = 0x10
    UIView *_trackingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000251e8
@property(nonatomic) _Bool wasOnScreen; // @synthesize wasOnScreen=_wasOnScreen;
@property(nonatomic) __weak UIView *trackingView; // @synthesize trackingView=_trackingView;
@property(nonatomic) __weak UIView *scrollingView; // @synthesize scrollingView=_scrollingView;

@end

