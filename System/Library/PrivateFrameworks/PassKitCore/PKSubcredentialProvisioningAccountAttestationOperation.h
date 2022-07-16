//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAppletSubcredential, PKAppletSubcredentialSharingInvitationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningAccountAttestationOperation
{
    PKAppletSubcredential *_credential;	// 8 = 0x8
    PKPaymentWebService *_webService;	// 16 = 0x10
    PKAppletSubcredentialSharingInvitationMetadata *_metadata;	// 24 = 0x18
    _Bool _operationCompleted;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c077e
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00000000000c06df
- (void)accountAttesatationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c013c
- (void)performOperationWithSession:(id)arg1;	// IMP=0x00000000000bf640
- (void)performOperation;	// IMP=0x00000000000bf53f
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000bf14e

@end

