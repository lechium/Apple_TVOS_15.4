//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UINavigationContentAdjustments : NSObject
{
    UIScrollView *_adjustedScrollView;	// 8 = 0x8
    struct UIEdgeInsets _insetAdjustment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004b32c3
@property(nonatomic) struct UIEdgeInsets insetAdjustment; // @synthesize insetAdjustment=_insetAdjustment;
@property(nonatomic) __weak UIScrollView *adjustedScrollView; // @synthesize adjustedScrollView=_adjustedScrollView;

@end

