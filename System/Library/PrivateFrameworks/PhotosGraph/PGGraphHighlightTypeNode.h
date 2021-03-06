//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>

@class NSString;

@interface PGGraphHighlightTypeNode <PGAssetCollectionFeature>
{
    NSString *_label;	// 8 = 0x8
}

+ (id)defaultTypeNodeFilter;	// IMP=0x00000000004b9b57
+ (id)onGoingTripTypeNodeFilter;	// IMP=0x00000000004b9b22
+ (id)aggregationTypeNodeFilter;	// IMP=0x00000000004b9aed
+ (id)shortTripTypeNodeFilter;	// IMP=0x00000000004b9ab8
+ (id)longTripTypeNodeFilter;	// IMP=0x00000000004b9a83
+ (id)concludedTripTypeNodeFilter;	// IMP=0x00000000004b99fa
+ (id)tripTypeNodeFilter;	// IMP=0x00000000004b996a
+ (id)typeNodeFilterForLabel:(id)arg1;	// IMP=0x00000000004b9918
+ (id)filter;	// IMP=0x00000000004b98e8
- (void).cxx_destruct;	// IMP=0x00000000004b98d5
- (id)label;	// IMP=0x00000000004b98c4
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
- (unsigned short)domain;	// IMP=0x00000000004b9818
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000004b9806
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000004b978c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

