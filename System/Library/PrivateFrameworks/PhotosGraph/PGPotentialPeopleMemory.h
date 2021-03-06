//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, PGGraphPersonNode;

@interface PGPotentialPeopleMemory
{
    NSMutableSet *_mutableMomentNodes;	// 8 = 0x8
    PGGraphPersonNode *_personNode;	// 16 = 0x10
    long long _year;	// 24 = 0x18
    NSArray *_facedAssetLocalIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001fb3a1
@property(retain) NSArray *facedAssetLocalIdentifiers; // @synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers;
@property(readonly) long long year; // @synthesize year=_year;
@property(retain) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000001fb201
- (unsigned long long)memoryCategory;	// IMP=0x00000000001fb1f6
- (void)addMomentNode:(id)arg1;	// IMP=0x00000000001fb1d9
- (id)initWithSubcategory:(unsigned long long)arg1 peopleNode:(id)arg2 year:(long long)arg3;	// IMP=0x00000000001fb0ae

@end

