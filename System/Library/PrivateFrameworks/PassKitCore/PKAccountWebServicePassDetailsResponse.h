//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse
{
    NSString *_provisioningIdentifier;	// 8 = 0x8
    long long _cardType;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    NSURL *_passURL;	// 32 = 0x20
    NSString *_passTypeIdentifier;	// 40 = 0x28
    NSString *_passSerialNumber;	// 48 = 0x30
    NSString *_ownershipTokenIdentifier;	// 56 = 0x38
    NSArray *_postProvisioningContent;	// 64 = 0x40
    PKPaymentRemoteCredential *_remoteCredential;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001ef47f
@property(retain, nonatomic) PKPaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(readonly, nonatomic) NSArray *postProvisioningContent; // @synthesize postProvisioningContent=_postProvisioningContent;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(readonly, copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, copy, nonatomic) NSString *provisioningIdentifier; // @synthesize provisioningIdentifier=_provisioningIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001eee06

@end
