//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IOKIterator
{
    CDUnknownBlockType _enumerationBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000001810
- (void)enumerate;	// IMP=0x00000000000017b7
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000172d
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)reset;	// IMP=0x00000000000016f5
- (id)nextObject;	// IMP=0x0000000000001688
- (id)initWithIterator:(unsigned int)arg1 enumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001615
- (id)initWithIterator:(unsigned int)arg1;	// IMP=0x00000000000015e6
- (id)initWithIOObject:(unsigned int)arg1;	// IMP=0x00000000000015d4

@end
