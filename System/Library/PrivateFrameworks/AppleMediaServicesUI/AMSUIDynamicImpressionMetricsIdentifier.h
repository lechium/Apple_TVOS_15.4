//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSUIDynamicImpressionMetricsIdentifier : NSObject
{
    NSString *_element;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    NSString *_parent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f8bb
@property(retain, nonatomic) NSString *parent; // @synthesize parent=_parent;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *element; // @synthesize element=_element;
- (id)initWithParent:(id)arg1 element:(id)arg2 index:(long long)arg3;	// IMP=0x000000000000f758

@end
