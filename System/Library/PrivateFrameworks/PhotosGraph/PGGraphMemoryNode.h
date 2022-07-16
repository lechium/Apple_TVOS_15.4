//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGMemoryNodeProtocol-Protocol.h>

@class NSString, PGGraphFeatureNodeCollection, PGGraphMemoryNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphMemoryNode <PGMemoryNodeProtocol>
{
    NSString *_label;	// 8 = 0x8
    NSString *_uniqueMemoryIdentifier;	// 16 = 0x10
    unsigned long long _memoryCategorySubcategory;	// 24 = 0x18
}

+ (id)uniqueMemoryIdentifierWithMemoryLabel:(id)arg1 featureNodes:(id)arg2;	// IMP=0x00000000003ee0e3
+ (id)momentOfMemory;	// IMP=0x00000000003ee08c
+ (id)featureOfMemory;	// IMP=0x00000000003ee035
+ (id)filterWithUniqueMemoryIdentifierArray:(id)arg1;	// IMP=0x00000000003edf4f
+ (id)filterWithUniqueMemoryIdentifiers:(id)arg1;	// IMP=0x00000000003ede69
+ (id)filterWithUniqueMemoryIdentifier:(id)arg1;	// IMP=0x00000000003edd83
+ (id)filterWithMemoryCategories:(id)arg1;	// IMP=0x00000000003edca4
+ (id)filterWithMemoryCategory:(unsigned long long)arg1;	// IMP=0x00000000003edc41
+ (id)filter;	// IMP=0x00000000003edc11
+ (id)fullyQualifiedMemoryTypeForMemoryType:(id)arg1 withPrefix:(id)arg2;	// IMP=0x0000000000164b3a
+ (id)allMemoryTypeStrings;	// IMP=0x0000000000162fcc
+ (id)fullMemoryTypeStringWithMemoryCategorySubcategory:(unsigned long long)arg1 featureNodes:(id)arg2;	// IMP=0x0000000000162e7b
- (void).cxx_destruct;	// IMP=0x00000000003ed531
@property(readonly, nonatomic) unsigned long long memoryCategorySubcategory; // @synthesize memoryCategorySubcategory=_memoryCategorySubcategory;
@property(readonly, nonatomic) NSString *uniqueMemoryIdentifier; // @synthesize uniqueMemoryIdentifier=_uniqueMemoryIdentifier;
- (id)label;	// IMP=0x00000000003ed4fe
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;	// IMP=0x00000000003ed45e
@property(readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property(readonly, nonatomic) unsigned long long memoryCategory;
@property(readonly, nonatomic) PGGraphMemoryNodeCollection *collection;
@property(readonly, copy) NSString *description;
- (id)propertyDictionary;	// IMP=0x00000000003ed274
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000003ed174
- (unsigned short)domain;	// IMP=0x00000000003ed169
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000003ed096
- (id)initWithLabel:(id)arg1 memoryCategorySubcategory:(unsigned long long)arg2 uniqueMemoryIdentifier:(id)arg3;	// IMP=0x00000000003ecfd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
