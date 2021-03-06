//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject
{
    id _inlineReceivers[12];	// 8 = 0x8
    NSMutableArray *_extraReceivers;	// 104 = 0x68
    SEL _selector;	// 112 = 0x70
    unsigned long long _count;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001f4f1
@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) SEL selector; // @synthesize selector=_selector;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f4d1
- (unsigned long long)hash;	// IMP=0x000000000001f4c7
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f40e
- (_Bool)hasReceivers;	// IMP=0x000000000001f400
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;	// IMP=0x000000000001f33a
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;	// IMP=0x000000000001f11b

@end

