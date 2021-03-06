//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICompoundObjectMap : NSObject
{
    NSMutableDictionary *_mapTable;	// 8 = 0x8
}

+ (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;	// IMP=0x000000000009785c
+ (id)compoundObjectMap;	// IMP=0x0000000000097842
- (void).cxx_destruct;	// IMP=0x0000000000097d9a
- (id)deepCopy;	// IMP=0x0000000000097c8b
- (void)performWithEach:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097ad7
- (void)removeAllMappings;	// IMP=0x0000000000097ac1
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;	// IMP=0x00000000000979a1
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;	// IMP=0x00000000000978c6
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000009789a
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000097884
- (id)init;	// IMP=0x00000000000977f1

@end

