//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPBTransitArtwork, NSArray;
@protocol GEOServerFormattedString;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding, NSCopying>
{
    id <GEOServerFormattedString> _inlineTitle;	// 8 = 0x8
    _Bool _alwaysClickable;	// 16 = 0x10
    NSArray *_routeIncidents;	// 24 = 0x18
    NSArray *routeAdvisoryCards;	// 32 = 0x20
    id <GEOServerFormattedString> _title;	// 40 = 0x28
    GEOPBTransitArtwork *_artwork;	// 48 = 0x30
    _Bool _isClickable;	// 56 = 0x38
    NSArray *_advisoryItems;	// 64 = 0x40
    _Bool _initialisedForTransit;	// 72 = 0x48
    NSArray *_routeAdvisoryCards;	// 80 = 0x50
    NSArray *_analyticsMessageValues;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001083ff7
+ (id)_fallbackAdvisoryArtwork;	// IMP=0x0000000001083d89
- (void).cxx_destruct;	// IMP=0x000000000108461e
@property(readonly, nonatomic) NSArray *analyticsMessageValues; // @synthesize analyticsMessageValues=_analyticsMessageValues;
@property(readonly, nonatomic) NSArray *advisoryItems; // @synthesize advisoryItems=_advisoryItems;
@property(readonly, nonatomic) _Bool isClickable; // @synthesize isClickable=_isClickable;
@property(readonly, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) id <GEOServerFormattedString> title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *routeAdvisoryCards; // @synthesize routeAdvisoryCards=_routeAdvisoryCards;
@property(retain, nonatomic) NSArray *routeIncidents; // @synthesize routeIncidents=_routeIncidents;
@property(nonatomic) _Bool alwaysClickable; // @synthesize alwaysClickable=_alwaysClickable;
@property(retain, nonatomic) id <GEOServerFormattedString> inlineTitle; // @synthesize inlineTitle=_inlineTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010844b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010843b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001083fff
- (id)description;	// IMP=0x0000000001083e98
- (id)initWithMessage:(id)arg1 incidents:(id)arg2;	// IMP=0x0000000001083ce1
- (id)initWithGeoAdvisoryNotice:(id)arg1 transitIncidents:(id)arg2;	// IMP=0x000000000108398b
- (id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2;	// IMP=0x00000000010835ef
- (id)initWithGeoAdvisoryNotice:(id)arg1;	// IMP=0x0000000001083534

@end

