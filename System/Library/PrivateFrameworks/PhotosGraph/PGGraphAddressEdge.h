//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/MAUniquelyIdentifiableEdge-Protocol.h>

@class CLLocation, MAEdgeFilter, NSDate;

@interface PGGraphAddressEdge <MAUniquelyIdentifiableEdge>
{
    float _weight;	// 8 = 0x8
    NSDate *_universalStartDate;	// 16 = 0x10
    NSDate *_universalEndDate;	// 24 = 0x18
    unsigned long long _numberOfAssets;	// 32 = 0x20
    struct CLLocationCoordinate2D _photoCoordinate;	// 40 = 0x28
}

+ (void)setUniversalEndDate:(id)arg1 onAddressEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000554b99
+ (void)setUniversalStartDate:(id)arg1 onAddressEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000554b09
+ (id)filter;	// IMP=0x0000000000554ad4
- (void).cxx_destruct;	// IMP=0x0000000000554aa3
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) struct CLLocationCoordinate2D photoCoordinate; // @synthesize photoCoordinate=_photoCoordinate;
@property(readonly, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
- (float)weight;	// IMP=0x0000000000554a46
@property(readonly, nonatomic) CLLocation *photoLocation;
@property(readonly, nonatomic) double timestampUTCEnd;
@property(readonly, nonatomic) double timestampUTCStart;
- (unsigned short)domain;	// IMP=0x0000000000554989
- (id)label;	// IMP=0x000000000055496a
@property(readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;
- (id)edgeDescription;	// IMP=0x00000000005548bc
- (id)propertyDictionary;	// IMP=0x00000000005546ea
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000005544c3
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;	// IMP=0x000000000055423b
- (id)initFromMomentNode:(id)arg1 toAddressNode:(id)arg2 weight:(float)arg3 universalStartDate:(id)arg4 universalEndDate:(id)arg5 photoCoordinate:(struct CLLocationCoordinate2D)arg6 numberOfAssets:(unsigned long long)arg7;	// IMP=0x0000000000554139

@end

