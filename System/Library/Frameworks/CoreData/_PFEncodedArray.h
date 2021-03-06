//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray
{
    NSData *_sourceData;	// 8 = 0x8
    int _cd_rc;	// 16 = 0x10
    unsigned int _count;	// 20 = 0x14
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x000000000005e4f3
- (const id *)_values;	// IMP=0x000000000005e591
- (void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005e55a
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005e54f
- (unsigned long long)count;	// IMP=0x000000000005e53f
- (id)mutableCopy;	// IMP=0x000000000005e504
- (Class)classForCoder;	// IMP=0x000000000005e4e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e4d0
- (id)copy;	// IMP=0x000000000005e4c5
- (id)description;	// IMP=0x000000000005e4ab
- (_Bool)_isDeallocating;	// IMP=0x000000000005e488
- (_Bool)_tryRetain;	// IMP=0x000000000005e44a
- (unsigned long long)retainCount;	// IMP=0x000000000005e432
- (oneway void)release;	// IMP=0x000000000005e3f4
- (id)retain;	// IMP=0x000000000005e3d3
- (void)dealloc;	// IMP=0x000000000005e380
- (id)init;	// IMP=0x000000000005e349

@end

