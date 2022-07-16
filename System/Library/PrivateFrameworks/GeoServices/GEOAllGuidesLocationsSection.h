//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDAllGuidesLocationsSection, GEOPDPlace, NSArray, NSDictionary, NSString;

@interface GEOAllGuidesLocationsSection : NSObject
{
    GEOPDAllGuidesLocationsSection *_section;	// 8 = 0x8
    NSArray *_mapsResults;	// 16 = 0x10
    GEOPDPlace *_place;	// 24 = 0x18
    NSDictionary *_entriesDictionary;	// 32 = 0x20
    _Bool _isWorldwideSection;	// 40 = 0x28
    NSString *_sectionTitle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000a34d74
@property(readonly, nonatomic) _Bool isWorldwideSection; // @synthesize isWorldwideSection=_isWorldwideSection;
- (id)placeResultForSection:(id)arg1 mapsResults:(id)arg2;	// IMP=0x0000000000a34a6e
@property(readonly, nonatomic) NSArray *guideLocations;
@property(readonly, nonatomic) NSDictionary *pdGuideLocationEntries;
@property(readonly, nonatomic) NSArray *guideLocationIdentifiers;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (id)initWithAllGuidesLocationSection:(id)arg1 mapsResults:(id)arg2;	// IMP=0x0000000000a343e8

@end
