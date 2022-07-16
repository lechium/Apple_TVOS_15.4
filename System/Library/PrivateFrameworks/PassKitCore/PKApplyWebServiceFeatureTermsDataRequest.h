//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKApplyWebServiceFeatureTermsDataRequest
{
    unsigned long long _featureIdentifier;	// 16 = 0x10
    NSString *_termsIdentifier;	// 24 = 0x18
    NSString *_termsDataFormat;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007a8b
- (void).cxx_destruct;	// IMP=0x0000000000007da0
@property(copy, nonatomic) NSString *termsDataFormat; // @synthesize termsDataFormat=_termsDataFormat;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x0000000000007a93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000079eb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007929

@end

