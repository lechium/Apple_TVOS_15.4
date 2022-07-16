//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, NSSet, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupMemory
{
    NSMutableSet *_mutableMomentNodes;	// 8 = 0x8
    PGGraphSocialGroupNode *_socialGroupNode;	// 16 = 0x10
    long long _year;	// 24 = 0x18
    NSArray *_facedAssetLocalIdentifiers;	// 32 = 0x20
    NSSet *_peopleUUIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000507d9f
@property(retain) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
@property(retain) NSArray *facedAssetLocalIdentifiers; // @synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphSocialGroupNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x0000000000507ae7
- (unsigned long long)memoryCategory;	// IMP=0x0000000000507adc
- (void)addMomentNode:(id)arg1;	// IMP=0x0000000000507abf
- (id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2;	// IMP=0x00000000005079fd

@end
