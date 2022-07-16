//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>
#import <PhotosGraph/PGGraphLocationCoordinates-Protocol.h>
#import <PhotosGraph/PGGraphLocationNaming-Protocol.h>
#import <PhotosGraph/PGGraphLocationOrArea-Protocol.h>

@class NSString, PGGraphAreaNodeCollection, PGGraphLocationNode;
@protocol PGGraphLocationOrAreaNodeCollection;

@interface PGGraphAreaNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>
{
    unsigned int _isBlocked:1;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    struct CLLocationCoordinate2D _centroidCoordinate;	// 24 = 0x18
}

+ (id)addressOfArea;	// IMP=0x00000000005214a1
+ (id)propertiesWithIsBlocked:(_Bool)arg1;	// IMP=0x00000000005213f9
+ (id)propertiesWithName:(id)arg1 isBlocked:(_Bool)arg2;	// IMP=0x0000000000521317
+ (id)filterWithNames:(id)arg1;	// IMP=0x0000000000521231
+ (id)filterWithName:(id)arg1;	// IMP=0x000000000052115d
+ (id)nonBlockedFilter;	// IMP=0x000000000052109f
+ (id)blockedFilter;	// IMP=0x0000000000520fe1
+ (id)filter;	// IMP=0x0000000000520fac
- (void).cxx_destruct;	// IMP=0x0000000000520bea
@property(readonly) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) struct CLLocationCoordinate2D centroidCoordinate; // @synthesize centroidCoordinate=_centroidCoordinate;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) id <PGGraphLocationOrAreaNodeCollection> locationOrAreaNodeCollection;
@property(readonly, nonatomic) PGGraphAreaNodeCollection *collection;
- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x00000000005209d2
- (id)addressNodes;	// IMP=0x0000000000520958
@property(readonly) NSString *shortenedName;
- (_Bool)diameterIsLargerThanDiameter:(double)arg1;	// IMP=0x000000000052081e
@property(readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property(readonly) NSString *fullname;
- (unsigned short)domain;	// IMP=0x0000000000520397
- (id)label;	// IMP=0x0000000000520378
@property(readonly, copy) NSString *description;
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000520229
- (id)propertyDictionary;	// IMP=0x000000000052014f
- (_Bool)hasProperties:(id)arg1;	// IMP=0x0000000000520049
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000051ff96
- (id)initWithName:(id)arg1 isBlocked:(_Bool)arg2;	// IMP=0x000000000051fef9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

