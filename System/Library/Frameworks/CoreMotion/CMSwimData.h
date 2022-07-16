//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;	// 8 = 0x8
    NSUUID *fSourceId;	// 16 = 0x10
    NSUUID *fSessionId;	// 24 = 0x18
    NSDate *fStartDate;	// 32 = 0x20
    NSDate *fEndDate;	// 40 = 0x28
    unsigned long long fStrokeCount;	// 48 = 0x30
    double fDistance;	// 56 = 0x38
    double fAvgPace;	// 64 = 0x40
    unsigned long long fLapCount;	// 72 = 0x48
    long long fStrokeType;	// 80 = 0x50
    unsigned long long fSegment;	// 88 = 0x58
}

+ (unsigned long long)maxSwimDataEntries;	// IMP=0x000000000019431b
+ (id)strokeTypeName:(long long)arg1;	// IMP=0x0000000000194177
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000193dba
- (id)description;	// IMP=0x00000000001941ec
@property(readonly, nonatomic) unsigned long long segment;
@property(readonly, nonatomic) long long strokeType;
@property(readonly, nonatomic) unsigned long long lapCount;
@property(readonly, nonatomic) double avgPace;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) unsigned long long strokeCount;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSUUID *sessionId;
@property(readonly, nonatomic) NSUUID *sourceId;
@property(readonly, nonatomic) unsigned long long recordId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000193fe9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000193f6e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000193dc2
- (void)dealloc;	// IMP=0x0000000000193d62
- (id)initWithSwimEntry:(const struct CLSwimEntry *)arg1;	// IMP=0x0000000000193c42
- (id)initWithSessionId:(id)arg1;	// IMP=0x0000000000193b6c
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11;	// IMP=0x0000000000193a14
- (void)convertToSwimEntry:(struct CLSwimEntry *)arg1;	// IMP=0x0000000000193914

@end

