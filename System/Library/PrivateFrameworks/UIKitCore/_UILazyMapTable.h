//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;	// 8 = 0x8
    NSMapTable *_keysToClientTables;	// 16 = 0x10
    NSMapTable *_keysToValues;	// 24 = 0x18
    NSMapTable *_valuesToKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000efbab6
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x0000000000efb9ba
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x0000000000efb8ef
- (id)cachedObjectEnumerable;	// IMP=0x0000000000efb8e1
- (id)keyEnumerable;	// IMP=0x0000000000efb8d3
- (id)cachedObjects;	// IMP=0x0000000000efb8c5
- (id)keys;	// IMP=0x0000000000efb8b7
- (_Bool)hasCachedObjectForKey:(id)arg1;	// IMP=0x0000000000efb880
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000efb796
- (unsigned long long)count;	// IMP=0x0000000000efb780
- (id)description;	// IMP=0x0000000000efb703
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000efb5fe

@end

