//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAddress, GEOLatLng, GEOLocation, GEOMapRegion, NSString;

@interface GEOMapItemBuilder : NSObject
{
    struct {
        unsigned int referenceFrame:1;
    } _has;	// 8 = 0x8
    GEOLocation *_location;	// 16 = 0x10
    int _referenceFrame;	// 24 = 0x18
    GEOAddress *_address;	// 32 = 0x20
    GEOMapRegion *_mapRegion;	// 40 = 0x28
    GEOLatLng *_latlng;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
}

+ (id)buildWithSetterBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c1a35a
- (void).cxx_destruct;	// IMP=0x0000000000c1a7b3
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(nonatomic) int referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (id)build;	// IMP=0x0000000000c1a42f
- (id)init;	// IMP=0x0000000000c1a3cd

@end

