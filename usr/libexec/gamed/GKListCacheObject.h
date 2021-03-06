//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet, NSString;

@interface GKListCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x004000000005ae1e
+ (Class)entryClass;	// IMP=0x001000000005ae0d
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000005c3a5
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c16f
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x001000000005bed1
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x001000000005b688
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x001000000005b42a
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x001000000005b207
- (id)internalRepresentation;	// IMP=0x001000000005aeb8
- (void)updateSeed;	// IMP=0x001000000005ae42

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end

