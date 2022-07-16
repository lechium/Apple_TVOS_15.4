//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKAccountWebServiceDeleteFundingSourceRequest
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fundingSourceIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008dcdc
@property(retain, nonatomic) NSString *fundingSourceIdentifier; // @synthesize fundingSourceIdentifier=_fundingSourceIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x000000000008d94a

@end

