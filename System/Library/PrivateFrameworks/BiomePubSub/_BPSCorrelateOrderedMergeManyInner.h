//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _BPSCorrelateOrderedMergeManyInner
{
    CDUnknownBlockType _comparator;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002b7f4
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (long long)compareFirst:(id)arg1 withSecond:(id)arg2;	// IMP=0x000000000002b74f
- (id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b6c9

@end

