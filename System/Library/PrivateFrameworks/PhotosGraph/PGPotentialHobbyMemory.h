//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, PGGraphPersonNode;

@interface PGPotentialHobbyMemory
{
    NSMutableSet *_mutableMomentNodes;	// 8 = 0x8
    NSArray *_hobbyAssetLocalIdentifiers;	// 16 = 0x10
    PGGraphPersonNode *_personNode;	// 24 = 0x18
    long long _year;	// 32 = 0x20
    long long _hobbyType;	// 40 = 0x28
    unsigned long long _memoryCategorySubcategory;	// 48 = 0x30
}

+ (id)sceneFeatureNameForHobbyType:(long long)arg1;	// IMP=0x00000000003fb0f3
- (void).cxx_destruct;	// IMP=0x00000000003fb0b1
- (unsigned long long)memoryCategorySubcategory;	// IMP=0x00000000003fb0a0
@property(readonly) long long hobbyType; // @synthesize hobbyType=_hobbyType;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
@property(retain) NSArray *hobbyAssetLocalIdentifiers; // @synthesize hobbyAssetLocalIdentifiers=_hobbyAssetLocalIdentifiers;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000003face9
- (unsigned long long)memoryCategory;	// IMP=0x00000000003fabec
- (void)addMomentNode:(id)arg1;	// IMP=0x00000000003fabcf
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;	// IMP=0x00000000003faad2

@end
