//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass;

@interface PKAuxiliaryCapabilityWebServiceRequest
{
    PKPaymentPass *_pass;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e9c0c
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;	// IMP=0x00000000000e9bb8

@end
