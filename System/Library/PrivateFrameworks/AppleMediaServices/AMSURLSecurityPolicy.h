//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface AMSURLSecurityPolicy : NSObject
{
    long long _trustMode;	// 8 = 0x8
    NSSet *_pinnedCertificates;	// 16 = 0x10
}

+ (id)defaultPolicy;	// IMP=0x000000000022ad19
- (void).cxx_destruct;	// IMP=0x000000000022bb05
@property(retain, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) long long trustMode; // @synthesize trustMode=_trustMode;
- (_Bool)_shouldSkipValidation;	// IMP=0x000000000022ba69
- (_Bool)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;	// IMP=0x000000000022b3b6
- (_Bool)_evaluateExtendedValidationWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;	// IMP=0x000000000022aeb8
- (_Bool)evaluateTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;	// IMP=0x000000000022ae45
- (id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2;	// IMP=0x000000000022adcf
- (id)initWithTrustMode:(long long)arg1;	// IMP=0x000000000022adbb

@end

