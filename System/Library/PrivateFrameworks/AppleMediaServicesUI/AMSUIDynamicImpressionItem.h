//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIDynamicImpressionMetrics;

@interface AMSUIDynamicImpressionItem : NSObject
{
    AMSUIDynamicImpressionMetrics *_impressionMetrics;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f3af
@property(retain, nonatomic) AMSUIDynamicImpressionMetrics *impressionMetrics; // @synthesize impressionMetrics=_impressionMetrics;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)initWithFrame:(struct CGRect)arg1 impressionMetrics:(id)arg2;	// IMP=0x000000000000f255

@end

