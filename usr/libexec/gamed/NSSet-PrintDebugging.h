//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (PrintDebugging)
+ (id)_gkSetOfResourcesWithIDs:(id)arg1;	// IMP=0x00100000001bbed3
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x002000000008c0e7
- (id)_gkSetByRemovingObject:(id)arg1;	// IMP=0x00100000000f4058
- (id)_gkDistinctValuesForKeyPath:(id)arg1;	// IMP=0x00100000000f3e85
- (id)_gkValuesForKeyPath:(id)arg1;	// IMP=0x00100000000f3cb2
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x00100000000f39dd
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;	// IMP=0x00100000000f39c9
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f3891
- (_Bool)_gkContainsInvalidResource;	// IMP=0x00100000001bc56b
- (_Bool)_gkContainsExpiredResource;	// IMP=0x00100000001bc53d
- (_Bool)_gkContainsInvalidOrExpiredResource;	// IMP=0x00100000001bc4d6
- (id)_gkAllResourceIDs;	// IMP=0x00100000001bc4bd
- (id)_gkAllRepresentedItems;	// IMP=0x00100000001bc4a4
- (id)_gkInvalidOrExpiredResources;	// IMP=0x00100000001bc43d
- (id)_gkValidAndNonExpiredResources;	// IMP=0x00100000001bc3d4
- (id)_gkInvalidResources;	// IMP=0x00100000001bc3a6
- (id)_gkExpiredResources;	// IMP=0x00100000001bc378
- (_Bool)_gkContainsObjectPassingPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bc261
- (id)_gkResourceWithID:(id)arg1;	// IMP=0x00100000001bc133
- (id)_gkResourcesWithIDs:(id)arg1;	// IMP=0x00100000001bbf63
@end
