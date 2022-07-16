//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentInformationEventExtensionHostContextProtocol-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentInformationEventExtensionHostContext <PKPaymentInformationEventExtensionHostContextProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e9a9d
- (id)replyQueue;	// IMP=0x00000000001e9a5a
- (void)handleConfigurationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e9605
- (void)handleSignatureRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e913d
- (void)handleInformationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e8c49
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e8c37
- (id)vendorContext;	// IMP=0x00000000001e8c25

@end
