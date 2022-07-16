//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/MAUniquelyIdentifiableNode-Protocol.h>

@class CLLocation, MANodeFilter, NSString, PGGraphAddressNodeCollection;

@interface PGGraphAddressNode <MAUniquelyIdentifiableNode>
{
    long long _locationMode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    struct CLLocationCoordinate2D _coordinate;	// 32 = 0x20
}

+ (id)areaOfAddress;	// IMP=0x0000000000476d8a
+ (id)momentOfAddress;	// IMP=0x0000000000476c52
+ (id)languageOfAddress;	// IMP=0x0000000000476ac7
+ (id)countryOfAddress;	// IMP=0x000000000047693c
+ (id)stateOfAddress;	// IMP=0x00000000004767b1
+ (id)countyOfAddress;	// IMP=0x0000000000476626
+ (id)cityOfAddress;	// IMP=0x000000000047649b
+ (id)districtOfAddress;	// IMP=0x0000000000476310
+ (id)streetOfAddress;	// IMP=0x0000000000476185
+ (id)numberOfAddress;	// IMP=0x000000000047604d
+ (id)homeWorkOfAddress;	// IMP=0x0000000000475ff6
+ (id)workOfAddress;	// IMP=0x0000000000475ebe
+ (id)homeOfAddress;	// IMP=0x0000000000475d86
+ (void)setCoordinate:(struct CLLocationCoordinate2D)arg1 onAddressNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000475c54
+ (id)impreciseFilter;	// IMP=0x0000000000475b86
+ (id)preciseFilter;	// IMP=0x0000000000475ab8
+ (id)filter;	// IMP=0x0000000000475a83
- (void).cxx_destruct;	// IMP=0x00000000004749dd
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)featureIdentifier;	// IMP=0x0000000000474936
- (unsigned long long)featureType;	// IMP=0x000000000047492b
- (Class)collectionClass;	// IMP=0x000000000047491a
@property(readonly, nonatomic) PGGraphAddressNodeCollection *collection;
- (_Bool)isPersonHomeOrWorkAddress;	// IMP=0x00000000004748a5
@property(readonly, nonatomic) CLLocation *location;
- (void)enumerateAreaEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000474824
@property(readonly, nonatomic) _Bool isPrecise;
@property(readonly, nonatomic) _Bool isOcean;
@property(readonly, nonatomic) _Bool isCoarse;
@property(readonly, nonatomic) _Bool isImproved;
@property(readonly, nonatomic) long long locationMode;
- (unsigned short)domain;	// IMP=0x000000000047479f
- (id)label;	// IMP=0x0000000000474780
@property(readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;
- (id)description;	// IMP=0x0000000000474604
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000474452
- (id)propertyDictionary;	// IMP=0x000000000047430a
- (_Bool)hasProperties:(id)arg1;	// IMP=0x000000000047410c
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0000000000473eac
- (id)initWithLocationMode:(long long)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 name:(id)arg3;	// IMP=0x0000000000473d50

@end

