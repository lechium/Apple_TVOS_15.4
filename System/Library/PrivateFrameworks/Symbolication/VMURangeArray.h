//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCopying-Protocol.h>

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;	// 8 = 0x8
    struct _VMURange *_ranges;	// 16 = 0x10
    unsigned int _max;	// 24 = 0x18
    _Bool _sorted;	// 28 = 0x1c
}

- (id)description;	// IMP=0x000000000004278d
- (unsigned int)count;	// IMP=0x0000000000042784
- (struct _VMURange *)ranges;	// IMP=0x000000000004277a
- (unsigned long long)sumLengths;	// IMP=0x000000000004274e
- (struct _VMURange)largestRange;	// IMP=0x0000000000042716
- (struct _VMURange)range;	// IMP=0x000000000004269f
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;	// IMP=0x000000000004261d
- (_Bool)intersectsRange:(struct _VMURange)arg1;	// IMP=0x0000000000042547
- (_Bool)intersectsLocation:(unsigned long long)arg1;	// IMP=0x0000000000042524
- (void)removeAllRanges;	// IMP=0x0000000000042517
- (void)removeRangeAtIndex:(unsigned int)arg1;	// IMP=0x00000000000424b1
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000000423fc
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;	// IMP=0x00000000000423cc
- (unsigned long long)indexForLocation:(unsigned long long)arg1;	// IMP=0x0000000000042326
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;	// IMP=0x0000000000042302
- (void)addRanges:(id)arg1;	// IMP=0x00000000000422a4
- (void)addRange:(struct _VMURange)arg1;	// IMP=0x000000000004220d
- (void)sort;	// IMP=0x00000000000421bf
- (void)setCapacity:(unsigned int)arg1;	// IMP=0x0000000000042194
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004214e
- (void)dealloc;	// IMP=0x000000000004210f
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;	// IMP=0x000000000004208e
- (id)init;	// IMP=0x0000000000042032

@end
