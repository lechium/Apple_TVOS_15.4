//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ENRegionServerExposureClassificationCriteria : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _index;	// 8 = 0x8
    unsigned int _perDaySumERVThreshold;	// 12 = 0xc
    unsigned int _perDayMaxERVThreshold;	// 16 = 0x10
    unsigned int _weightedDurationAtAttenuationThreshold;	// 20 = 0x14
    NSString *_classificationName;	// 24 = 0x18
    NSDictionary *_perDaySumERVThresholdsByDiagnosisReportType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001687d
+ (_Bool)getCriteria:(id *)arg1 fromDictionary:(id)arg2 index:(unsigned char)arg3;	// IMP=0x00000000000160b3
- (void).cxx_destruct;	// IMP=0x00000000000168be
@property(readonly, nonatomic) unsigned int weightedDurationAtAttenuationThreshold; // @synthesize weightedDurationAtAttenuationThreshold=_weightedDurationAtAttenuationThreshold;
@property(readonly, copy, nonatomic) NSDictionary *perDaySumERVThresholdsByDiagnosisReportType; // @synthesize perDaySumERVThresholdsByDiagnosisReportType=_perDaySumERVThresholdsByDiagnosisReportType;
@property(readonly, nonatomic) unsigned int perDayMaxERVThreshold; // @synthesize perDayMaxERVThreshold=_perDayMaxERVThreshold;
@property(readonly, nonatomic) unsigned int perDaySumERVThreshold; // @synthesize perDaySumERVThreshold=_perDaySumERVThreshold;
@property(readonly, nonatomic) unsigned char index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *classificationName; // @synthesize classificationName=_classificationName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016872
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000167a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000165cc

@end

