//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator_Ivars : NSObject
{
    SFTrustPolicy *trustPolicy;	// 8 = 0x8
    SFRevocationPolicy *revocationPolicy;	// 16 = 0x10
    NSArray *applicationAnchorCertificates;	// 24 = 0x18
    struct {
        unsigned int allowCertificateFetching:1;
        unsigned int trustSystemAnchorCertificates:1;
    } trustEvaluatorFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000f2a0

@end

