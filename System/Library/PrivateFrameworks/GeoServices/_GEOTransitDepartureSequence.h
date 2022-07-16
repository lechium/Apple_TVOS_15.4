//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitDepartureSequence-Protocol.h>

@class GEOPDDepartureSequence, GEOPDDepartureSequenceContainer, GEOPDStopInfo, NSArray, NSSet, NSString, NSTimeZone;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence>
{
    GEOPDDepartureSequence *_sequence;	// 8 = 0x8
    id <GEOTransitLine> _line;	// 16 = 0x10
    NSSet *_nextStopIDs;	// 24 = 0x18
    long long _displayStyle;	// 32 = 0x20
    GEOPDStopInfo *_stopInfo;	// 40 = 0x28
    GEOPDDepartureSequenceContainer *_container;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000103584e
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) unsigned long long walkingETA;
@property(readonly, nonatomic) _Bool hasWalkingETA;
@property(readonly, nonatomic) NSSet *nextStopIDs;
- (id)serviceResumesAfterDate:(id)arg1;	// IMP=0x0000000001035521
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x00000000010351c8
- (_Bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;	// IMP=0x0000000001035122
- (id)frequencyToDescribeAtDate:(id)arg1;	// IMP=0x0000000001034fa5
- (double)frequencyForSortingAtDate:(id)arg1;	// IMP=0x0000000001034e14
- (_Bool)hasFrequencyAtDate:(id)arg1;	// IMP=0x0000000001034caa
- (id)departuresValidForDate:(id)arg1;	// IMP=0x0000000001034b9d
- (id)firstDepartureValidForDate:(id)arg1;	// IMP=0x0000000001034a30
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;	// IMP=0x000000000103484d
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;	// IMP=0x0000000001034679
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;	// IMP=0x00000000010344a9
- (id)firstDepartureOnOrAfterDate:(id)arg1;	// IMP=0x00000000010342ae
- (id)firstDepartureAfterDate:(id)arg1;	// IMP=0x0000000001034244
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000001033f35
- (_Bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x0000000001033e1a
- (_Bool)areOperatingHours:(id)arg1 activeForDate:(id)arg2;	// IMP=0x0000000001033b3a
@property(readonly, nonatomic) long long displayStyle;
@property(readonly, nonatomic) _Bool isLowFrequency;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) NSArray *containerLabelItems;
@property(readonly, nonatomic) NSString *containerDisplayName;
@property(readonly, nonatomic) NSString *originName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *headsign;
@property(readonly, nonatomic) NSString *direction;
@property(readonly, nonatomic) unsigned long long transitId;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@property(readonly, nonatomic) NSArray *frequencies;
- (unsigned long long)stopId;	// IMP=0x000000000103391f
@property(readonly, nonatomic) NSArray *departures;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3 stopInfo:(id)arg4 container:(id)arg5;	// IMP=0x00000000010337c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

