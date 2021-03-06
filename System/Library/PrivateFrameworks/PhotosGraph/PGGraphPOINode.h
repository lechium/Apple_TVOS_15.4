//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString, PGGraphPOINodeCollection;

@interface PGGraphPOINode <PGGraphLocalizable, PGGraphSynonymSupport>
{
    NSString *_label;	// 8 = 0x8
}

+ (id)momentOfPOI;	// IMP=0x00000000002d69bd
+ (id)filterWithLabel:(id)arg1;	// IMP=0x00000000002d696b
+ (id)_localizationKeyForPOINode:(id)arg1;	// IMP=0x00000000002d6843
+ (id)validPOILabels;	// IMP=0x00000000002d66f9
+ (id)filter;	// IMP=0x00000000002d66c9
- (void).cxx_destruct;	// IMP=0x00000000002d65a4
- (id)label;	// IMP=0x00000000002d6593
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) PGGraphPOINodeCollection *collection;
- (unsigned short)domain;	// IMP=0x00000000002d6446
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000002d6434
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000002d63ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

