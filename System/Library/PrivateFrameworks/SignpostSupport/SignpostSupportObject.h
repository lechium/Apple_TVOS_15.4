//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostSerializable-Protocol.h>
#import <SignpostSupport/SignpostSupportTimeInterval-Protocol.h>

@class NSDate, NSString;

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval>
{
    NSString *_subsystem;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    double _timebaseRatio;	// 24 = 0x18
}

+ (id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;	// IMP=0x000000000001a728
+ (id)serializationTypeNumber;	// IMP=0x000000000001157c
- (void).cxx_destruct;	// IMP=0x000000000001b6e1
@property(nonatomic) double timebaseRatio; // @synthesize timebaseRatio=_timebaseRatio;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (id)_containedObjectsFromArray:(id)arg1;	// IMP=0x000000000001b4e6
- (_Bool)_containsTimeObject:(id)arg1;	// IMP=0x000000000001b462
- (_Bool)_containsMCT:(unsigned long long)arg1;	// IMP=0x000000000001b402
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b13e
- (double)durationMs;	// IMP=0x000000000001b115
- (double)endMs;	// IMP=0x000000000001b0e1
- (double)startMs;	// IMP=0x000000000001b0ad
- (double)startSeconds;	// IMP=0x000000000001b079
- (double)endSeconds;	// IMP=0x000000000001b045
- (unsigned long long)durationNanoseconds;	// IMP=0x000000000001b006
@property(readonly, nonatomic) float durationSeconds;
@property(readonly, nonatomic) unsigned long long durationMachContinuousTime;
@property(readonly, nonatomic) unsigned long long endNanoseconds;
@property(readonly, nonatomic) unsigned long long endMachContinuousTime;
@property(readonly, nonatomic) unsigned long long startNanoseconds;
@property(readonly, nonatomic) unsigned long long startMachContinuousTime;
@property(readonly, nonatomic) int tz_dsttime;
@property(readonly, nonatomic) int tz_minuteswest;
@property(readonly, nonatomic) int tv_usec;
@property(readonly, nonatomic) long long tv_sec;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;	// IMP=0x000000000001ad40
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(_Bool)arg3;	// IMP=0x000000000001ab8e
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;	// IMP=0x000000000001ab76
- (id)_descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 asBegin:(_Bool)arg3;	// IMP=0x000000000001a9d0
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *beginDate;
- (_Bool)endTimeval:(struct timeval *)arg1;	// IMP=0x000000000001a5fc
- (_Bool)beginTimeval:(struct timeval *)arg1;	// IMP=0x000000000001a5a8
- (_Bool)endTimezone:(struct timezone *)arg1;	// IMP=0x000000000001a544
- (_Bool)beginTimezone:(struct timezone *)arg1;	// IMP=0x000000000001a4e0
- (_Bool)_hasEndTimeval;	// IMP=0x000000000001a4a4
- (_Bool)_hasBeginTimeval;	// IMP=0x000000000001a468
- (id)endWallTimeStringWithTimeZoneName:(id)arg1;	// IMP=0x000000000001a454
- (id)beginWallTimeStringWithTimeZoneName:(id)arg1;	// IMP=0x000000000001a43d
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(_Bool)arg2;	// IMP=0x000000000001a339
- (void)_adjustEndTimeVal:(struct timeval *)arg1;	// IMP=0x000000000001a2f9
- (void)_adjustBeginTimeVal:(struct timeval *)arg1;	// IMP=0x000000000001a2b9
- (_Bool)_populateTimeStruct:(struct time *)arg1 withTimeval:(struct timeval *)arg2 withTZString:(id)arg3;	// IMP=0x000000000001a044
- (id)humanReadableType;	// IMP=0x000000000001159f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001133b
- (id)humanReadableDictionaryRepresentation;	// IMP=0x0000000000011322
- (id)serializeableDictionaryWithShouldRedact:(_Bool)arg1;	// IMP=0x000000000001130c
- (id)_dictionaryRepresentationWithIsHumanReadable:(_Bool)arg1 shouldRedact:(_Bool)arg2;	// IMP=0x0000000000011144

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
