//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PGGraphPersonNode;

@interface PGPotentialPersonOverTimeMemory
{
    PGGraphPersonNode *_personNode;	// 8 = 0x8
    NSArray *_bestAssetLocalIdentifiers;	// 16 = 0x10
    NSArray *_facedAssetLocalIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001fe79f
@property(retain) NSArray *facedAssetLocalIdentifiers; // @synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers;
@property(retain) NSArray *bestAssetLocalIdentifiers; // @synthesize bestAssetLocalIdentifiers=_bestAssetLocalIdentifiers;
@property(readonly) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000001fe6fd
- (unsigned long long)memoryCategory;	// IMP=0x00000000001fe6f2
- (id)uuid;	// IMP=0x00000000001fe6d5
- (id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2;	// IMP=0x00000000001fe5e8

@end

