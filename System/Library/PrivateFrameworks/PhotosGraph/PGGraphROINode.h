//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>
#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString, PGGraphROINodeCollection;

@interface PGGraphROINode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>
{
    NSString *_label;	// 8 = 0x8
}

+ (id)momentOfROI;	// IMP=0x000000000037fcf1
+ (id)_localizationKeyForROINode:(id)arg1;	// IMP=0x000000000037fbc9
+ (id)validROILabels;	// IMP=0x000000000037fb01
+ (id)waterFilter;	// IMP=0x000000000037facc
+ (id)natureFilter;	// IMP=0x000000000037fa97
+ (id)mountainFilter;	// IMP=0x000000000037fa62
+ (id)beachFilter;	// IMP=0x000000000037fa2d
+ (id)urbanFilter;	// IMP=0x000000000037f9f8
+ (id)filterForTypes:(id)arg1;	// IMP=0x000000000037f919
+ (id)filter;	// IMP=0x000000000037f8e9
- (void).cxx_destruct;	// IMP=0x000000000037f714
- (id)label;	// IMP=0x000000000037f703
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphROINodeCollection *collection;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
- (unsigned short)domain;	// IMP=0x000000000037f515
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000037f503
- (id)initWithLabel:(id)arg1;	// IMP=0x000000000037f489

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

