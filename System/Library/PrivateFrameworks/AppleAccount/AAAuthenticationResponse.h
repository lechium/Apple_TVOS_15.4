//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface AAAuthenticationResponse
{
    NSDictionary *_tokens;	// 56 = 0x38
    NSDictionary *_appleAccount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001d1c8
@property(readonly, nonatomic) NSString *altDSID;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *mdmServerToken;
@property(readonly, nonatomic) NSString *fmipLostModeToken;
@property(readonly, nonatomic) NSString *cloudKitToken;
@property(readonly, nonatomic) NSString *mapsToken;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *fmipToken;
@property(readonly, nonatomic) NSString *fmfAppToken;
@property(readonly, nonatomic) NSString *fmfToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000000001ce6f

@end
