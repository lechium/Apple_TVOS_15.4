//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentInformationEventExtensionVendorContextProtocol-Protocol.h>

@interface PKPaymentInformationEventExtensionContext <PKPaymentInformationEventExtensionVendorContextProtocol>
{
}

- (oneway void)handleConfigurationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e8ad0
- (oneway void)handleSignatureRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e8976
- (oneway void)handleInformationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e881c

@end

