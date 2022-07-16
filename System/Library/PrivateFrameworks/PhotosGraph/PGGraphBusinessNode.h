//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>

@class NSSet, NSString, PGGraphBusinessNodeCollection;

@interface PGGraphBusinessNode <PGAssetCollectionFeature>
{
    NSString *_name;	// 8 = 0x8
    NSString *_uuid;	// 16 = 0x10
    long long _venueCapacity;	// 24 = 0x18
    double _latitude;	// 32 = 0x20
    double _longitude;	// 40 = 0x28
    double _radius;	// 48 = 0x30
}

+ (id)momentOfBusiness;	// IMP=0x00000000003a1f1c
+ (id)publicEventOfBusiness;	// IMP=0x00000000003a1ec5
+ (id)categoryOfBusiness;	// IMP=0x00000000003a1e6e
+ (id)filter;	// IMP=0x00000000003a1e39
- (void).cxx_destruct;	// IMP=0x00000000003a1be2
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) long long venueCapacity; // @synthesize venueCapacity=_venueCapacity;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_uuid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphBusinessNodeCollection *collection;
- (id)associatedNodesForRemoval;	// IMP=0x00000000003a1a05
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)keywordDescription;	// IMP=0x00000000003a17d8
@property(readonly, nonatomic) NSSet *publicEventNodes;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a173d
- (void)enumerateBusinessCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a171c
@property(readonly, nonatomic) NSSet *businessCategories;
- (unsigned short)domain;	// IMP=0x00000000003a1674
- (id)label;	// IMP=0x00000000003a1655
@property(readonly, copy) NSString *description;
- (id)propertyDictionary;	// IMP=0x00000000003a1379
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000003a113b
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000003a0fa9
- (id)initWithName:(id)arg1 uuid:(id)arg2 venueCapacity:(long long)arg3 latitude:(double)arg4 longitude:(double)arg5 radius:(double)arg6;	// IMP=0x00000000003a0eb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

