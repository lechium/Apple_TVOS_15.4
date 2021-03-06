//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_1ee95920 _persistentIDs;	// 8 = 0x8
    struct vector<unsigned char, std::allocator<unsigned char>> _sections;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000010e6b1
- (void).cxx_destruct;	// IMP=0x000000000010e677
- (id)backingStoreByRemovingPersistentIDs:(const void *)arg1;	// IMP=0x000000000010e3d5
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010e233
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010e089
- (_Bool)containsPersistentIDs:(const void *)arg1;	// IMP=0x000000000010e036
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010dfba
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010df37
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010dedf
@property(readonly, nonatomic) unsigned long long count;

@end

