//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSMutableCopying-Protocol.h>

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying>
{
    int _cd_rc;	// 8 = 0x8
    int _cd_version;	// 12 = 0xc
    NSManagedObjectID *_cd_objectID;	// 16 = 0x10
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:7;
    } _cd_flags;	// 24 = 0x18
    unsigned char _cd_nullFlags_;	// 28 = 0x1c
}

+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;	// IMP=0x000000000021f3aa
+ (void)_entityDeallocated;	// IMP=0x000000000021f192
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f186
+ (id)alloc;	// IMP=0x000000000021f17a
+ (Class)classForEntity:(id)arg1;	// IMP=0x000000000021e350
+ (void)initialize;	// IMP=0x000000000021e2e0
+ (void)_invalidateStaticCaches;	// IMP=0x000000000021dd40
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002200e0
- (id)valueForKey:(id)arg1;	// IMP=0x000000000021ffbc
- (id)description;	// IMP=0x000000000021f6f0
- (void)dealloc;	// IMP=0x000000000021f681
- (_Bool)_isDeallocating;	// IMP=0x000000000021f665
- (_Bool)_tryRetain;	// IMP=0x000000000021f630
- (unsigned long long)retainCount;	// IMP=0x000000000021f61f
- (oneway void)release;	// IMP=0x000000000021f5e8
- (id)retain;	// IMP=0x000000000021f5ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f5c2
- (unsigned long long)hash;	// IMP=0x000000000021f558
- (id)mutableCopy;	// IMP=0x000000000021f49a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f488
- (id)copy;	// IMP=0x000000000021f44f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f43d

@end

