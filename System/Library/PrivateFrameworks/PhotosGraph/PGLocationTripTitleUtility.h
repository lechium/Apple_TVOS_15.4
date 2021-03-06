//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, PGGraphLocationHelper, PGIncompleteLocationResolver;

@interface PGLocationTripTitleUtility : NSObject
{
    PGGraphLocationHelper *_locationHelper;	// 8 = 0x8
    _Bool _filterMomentsAndCities;	// 16 = 0x10
    _Bool _allowLongAOI;	// 17 = 0x11
    NSString *_title;	// 24 = 0x18
    NSSet *_usedLocationNodes;	// 32 = 0x20
    NSSet *_momentNodes;	// 40 = 0x28
    PGIncompleteLocationResolver *_incompleteLocationResolver;	// 48 = 0x30
    NSArray *_usedTitleComponents;	// 56 = 0x38
    unsigned long long _tripTitleType;	// 64 = 0x40
    unsigned long long _tripTitleLocationType;	// 72 = 0x48
    NSSet *_filteredLocationNodes;	// 80 = 0x50
}

+ (void)_cityStateAndCountryNodesForLocationNodes:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000042a82d
+ (_Bool)_visitedLocationNodeMoreThanOnce:(id)arg1 withReferenceMomentNodes:(id)arg2;	// IMP=0x000000000042a6ec
+ (void)_aoiTitleWithLocationNodes:(id)arg1 momentNodes:(id)arg2 allowLongAOI:(_Bool)arg3 graph:(id)arg4 result:(CDUnknownBlockType)arg5;	// IMP=0x000000000042a1c8
+ (id)_filteredCityNodesByNameForCityNodes:(id)arg1;	// IMP=0x0000000000429f70
- (void).cxx_destruct;	// IMP=0x00000000004290ba
@property(retain, nonatomic) NSSet *filteredLocationNodes; // @synthesize filteredLocationNodes=_filteredLocationNodes;
@property(readonly, nonatomic) unsigned long long tripTitleLocationType; // @synthesize tripTitleLocationType=_tripTitleLocationType;
@property(readonly, nonatomic) unsigned long long tripTitleType; // @synthesize tripTitleType=_tripTitleType;
@property(retain, nonatomic) NSArray *usedTitleComponents; // @synthesize usedTitleComponents=_usedTitleComponents;
@property(retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver; // @synthesize incompleteLocationResolver=_incompleteLocationResolver;
@property(nonatomic) _Bool allowLongAOI; // @synthesize allowLongAOI=_allowLongAOI;
@property(nonatomic) _Bool filterMomentsAndCities; // @synthesize filterMomentsAndCities=_filterMomentsAndCities;
@property(retain, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) NSSet *usedLocationNodes; // @synthesize usedLocationNodes=_usedLocationNodes;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_locationTitleWithLocationNode:(id)arg1 addressNode:(id)arg2 countryNode:(id)arg3 allowSecondPart:(_Bool)arg4;	// IMP=0x0000000000428e3b
- (id)_bestAddressNodeForCityNodes:(id)arg1 inMomentNodes:(id)arg2;	// IMP=0x0000000000428856
- (void)_cityTitleWithCityNode:(id)arg1 countryNode:(id)arg2 visitedCountryOnlyOnce:(_Bool)arg3 momentNodes:(id)arg4 result:(CDUnknownBlockType)arg5;	// IMP=0x00000000004284a6
- (id)_cityNodesFromMomentNodes:(id)arg1;	// IMP=0x00000000004281fe
- (void)_resolveMomentNodes:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x0000000000427e87
- (void)_generateTitleForMomentNodes:(id)arg1 resolvedMomentNodes:(id)arg2 resolvedLocations:(id)arg3;	// IMP=0x00000000004261f4
- (void)_generateLocationTitle;	// IMP=0x00000000004260be
- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(_Bool)arg2 allowLongAOI:(_Bool)arg3 locationHelper:(id)arg4;	// IMP=0x0000000000425f9d
- (id)initWithMomentNodes:(id)arg1 filterMomentsAndCities:(_Bool)arg2 locationHelper:(id)arg3;	// IMP=0x0000000000425f85

@end

