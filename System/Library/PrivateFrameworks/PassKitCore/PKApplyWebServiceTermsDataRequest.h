//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKApplyWebServiceTermsDataRequest
{
    NSURL *_baseURL;	// 16 = 0x10
    unsigned long long _featureIdentifier;	// 24 = 0x18
    NSString *_applicationIdentifier;	// 32 = 0x20
    NSString *_termsIdentifier;	// 40 = 0x28
    NSString *_termsDataFormat;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000073f8
- (void).cxx_destruct;	// IMP=0x00000000000078d6
@property(copy, nonatomic) NSString *termsDataFormat; // @synthesize termsDataFormat=_termsDataFormat;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x0000000000007400
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007323
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000071c2

@end

