//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOCacheInvalidationData, GEOMapItemIdentifier, NSArray, NSDateInterval, NSString, NSTimeZone;

@interface GEOPOIEvent : NSObject <NSSecureCoding>
{
    GEOCacheInvalidationData *_invalidationData;	// 8 = 0x8
    _Bool _updateRequired;	// 16 = 0x10
    GEOMapItemIdentifier *_identifier;	// 24 = 0x18
    NSString *_localizedName;	// 32 = 0x20
    CDStruct_2c43369c _centerCoordinate;	// 40 = 0x28
    long long _expectedAttendance;	// 56 = 0x38
    NSArray *_categories;	// 64 = 0x40
    NSArray *_relatedPOIIdentifiers;	// 72 = 0x48
    NSDateInterval *_dateInterval;	// 80 = 0x50
    NSTimeZone *_timeZone;	// 88 = 0x58
    NSArray *_hours;	// 96 = 0x60
    NSArray *_performers;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000102dbb3
+ (_Bool)isUpdateRequiredForInvalidationToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000102da22
+ (_Bool)isUpdateRequiredForInvalidationData:(id)arg1;	// IMP=0x000000000102d7d8
- (void).cxx_destruct;	// IMP=0x000000000102f0dd
@property(retain, nonatomic) NSArray *performers; // @synthesize performers=_performers;
@property(retain, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain, nonatomic) NSArray *relatedPOIIdentifiers; // @synthesize relatedPOIIdentifiers=_relatedPOIIdentifiers;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long expectedAttendance; // @synthesize expectedAttendance=_expectedAttendance;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) GEOMapItemIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) GEOCacheInvalidationData *invalidationData; // @synthesize invalidationData=_invalidationData;
- (id)invalidationToken;	// IMP=0x000000000102ee54
@property(readonly, nonatomic, getter=isUpdateRequired) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000102ecf0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000102e909
- (_Bool)configureWithPlaceInfoComponent:(id)arg1;	// IMP=0x000000000102e703
- (id)dateIntervalFromDateTimeRanges:(id)arg1;	// IMP=0x000000000102e498
- (_Bool)configureWithPOIComponent:(id)arg1;	// IMP=0x000000000102df1c
- (_Bool)configureWithComponents:(id)arg1;	// IMP=0x000000000102dd6a
- (id)initWithPlace:(id)arg1;	// IMP=0x000000000102dc7f
- (id)initWithMapItemIdentifier:(id)arg1;	// IMP=0x000000000102dc04
- (id)init;	// IMP=0x000000000102dbda
- (void)geoPOIEventCommonInit;	// IMP=0x000000000102dbbb

@end
