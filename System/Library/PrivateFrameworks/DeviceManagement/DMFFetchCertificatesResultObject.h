//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject
{
    NSArray *_certificates;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f481
- (void).cxx_destruct;	// IMP=0x000000000001f8a5
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)description;	// IMP=0x000000000001f616
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f57b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f489
- (id)initWithCertificates:(id)arg1;	// IMP=0x000000000001f407

@end

