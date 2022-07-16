//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, PKPaymentRemoteCredential;

@interface PKPeerPaymentPassDetailsResponse
{
    NSString *_provisioningIdentifier;	// 8 = 0x8
    long long _cardType;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    NSURL *_passURL;	// 32 = 0x20
    NSString *_passTypeIdentifier;	// 40 = 0x28
    NSString *_passSerialNumber;	// 48 = 0x30
    NSString *_ownershipTokenIdentifier;	// 56 = 0x38
    PKPaymentRemoteCredential *_remoteCredential;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000350c95
@property(readonly, nonatomic) PKPaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(readonly, copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, copy, nonatomic) NSString *provisioningIdentifier; // @synthesize provisioningIdentifier=_provisioningIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000003508f5

@end

