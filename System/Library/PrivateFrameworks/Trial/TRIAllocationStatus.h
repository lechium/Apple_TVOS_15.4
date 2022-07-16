//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _type;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027455
+ (id)sampleAllocationStatuses:(id)arg1 correlationId:(id)arg2 nrSamples:(unsigned int)arg3;	// IMP=0x000000000002722a
+ (id)activeExperimentInformationWithError:(id *)arg1;	// IMP=0x00000000000271cb
+ (id)syncProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027148
+ (const char *)notificationNameForDeploymentEnvironment:(int)arg1;	// IMP=0x000000000002709c
+ (id)defaultProvider;	// IMP=0x000000000002708a
+ (id)_defaultProvider;	// IMP=0x000000000002701e
- (void).cxx_destruct;	// IMP=0x000000000002748f
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002746c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002745d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002744a
- (unsigned long long)hash;	// IMP=0x0000000000026fd2
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x0000000000026fac
- (id)initWithType:(unsigned char)arg1 date:(id)arg2;	// IMP=0x0000000000026f36

@end

