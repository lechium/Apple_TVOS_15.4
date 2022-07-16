//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, PKSubcredentialProvisioningDownloadPassOperation, PKSubcredentialProvisioningTrackCredentialOperation;

@interface PKSubcredentialProvisioningDownloadAndTrackCredentialOperation
{
    PKSubcredentialProvisioningDownloadPassOperation *_downloadOperation;	// 8 = 0x8
    PKSubcredentialProvisioningTrackCredentialOperation *_trackOperation;	// 16 = 0x10
    NSError *_downloadOperationError;	// 24 = 0x18
    NSError *_trackOperationError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017eabd
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;	// IMP=0x000000000017eaa0
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x000000000017ea83
- (void)performOperation;	// IMP=0x000000000017e396
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000017e11d

@end
