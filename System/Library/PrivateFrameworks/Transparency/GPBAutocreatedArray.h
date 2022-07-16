//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBAutocreatedArray : NSMutableArray
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableArray *_array;	// 16 = 0x10
}

- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082e7f
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082e62
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000082e45
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082df0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082d9b
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000082d7e
- (void)removeLastObject;	// IMP=0x0000000000082d61
- (void)addObject:(id)arg1;	// IMP=0x0000000000082cf1
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082cd4
- (void)removeObject:(id)arg1;	// IMP=0x0000000000082cb7
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000082c44
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082c27
- (unsigned long long)count;	// IMP=0x0000000000082c0a
- (void)dealloc;	// IMP=0x0000000000082bc8

@end

