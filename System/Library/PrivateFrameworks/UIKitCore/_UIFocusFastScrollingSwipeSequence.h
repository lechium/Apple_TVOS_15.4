//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingSwipeSequence : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    unsigned long long _headingLock;	// 16 = 0x10
    long long _consecutiveSwipeCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000621d3d
@property(nonatomic) long long consecutiveSwipeCount; // @synthesize consecutiveSwipeCount=_consecutiveSwipeCount;
@property(nonatomic) unsigned long long headingLock; // @synthesize headingLock=_headingLock;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

@end

