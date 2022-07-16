//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface HMFRingBuffer
{
    unsigned long long _capacity;	// 8 = 0x8
    NSMutableArray *_buffer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c31c
@property(readonly) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned long long capacity; // @synthesize capacity=_capacity;
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000001c27e
- (void)addObject:(id)arg1;	// IMP=0x000000000001c15f
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001c0cc

@end

