//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HFMutablePriorityQueueEntry : NSObject
{
    id _value;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d323
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1 priority:(long long)arg2;	// IMP=0x000000000002d28f
- (id)initWithValue:(id)arg1;	// IMP=0x000000000002d27b

@end

