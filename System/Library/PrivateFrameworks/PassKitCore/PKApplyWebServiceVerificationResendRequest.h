//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKApplyWebServiceVerificationResendRequest
{
    NSString *_applicationIdentifier;	// 16 = 0x10
    NSURL *_baseURL;	// 24 = 0x18
    unsigned long long _verificationType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000095b6
- (void).cxx_destruct;	// IMP=0x000000000000991b
@property(nonatomic) unsigned long long verificationType; // @synthesize verificationType=_verificationType;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x00000000000095be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000094f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000093ea

@end
