//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSUUID;

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long fRecordId;	// 8 = 0x8
    NSUUID *fSourceId;	// 16 = 0x10
    NSDate *fStartDate;	// 24 = 0x18
    NSDate *fEndDate;	// 32 = 0x20
    NSNumber *fElevationAscended;	// 40 = 0x28
    NSNumber *fElevationDescended;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bd654
@property(readonly, nonatomic) NSNumber *elevationDescended; // @synthesize elevationDescended=fElevationDescended;
@property(readonly, nonatomic) NSNumber *elevationAscended; // @synthesize elevationAscended=fElevationAscended;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=fEndDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=fStartDate;
@property(readonly, nonatomic) NSUUID *sourceId; // @synthesize sourceId=fSourceId;
@property(readonly, nonatomic) unsigned long long recordId; // @synthesize recordId=fRecordId;
- (id)description;	// IMP=0x00000000000bd8ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bd808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bd7a9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bd65c
- (void)dealloc;	// IMP=0x00000000000bd5f5
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry *)arg1;	// IMP=0x00000000000bd4f2
- (id)initWithSignificantElevation:(const struct CLSignificantElevation *)arg1;	// IMP=0x00000000000bd3ce
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6;	// IMP=0x00000000000bd2ad

@end

