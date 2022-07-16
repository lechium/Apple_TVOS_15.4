//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString, PKPaymentProvisioningMethodMetadata;
@protocol OS_dispatch_queue, PKContactlessCardIngesterDelegate;

@interface PKContactlessCardIngester : NSObject
{
    _Bool _listening;	// 8 = 0x8
    NSString *_pushTopic;	// 16 = 0x10
    PKPaymentProvisioningMethodMetadata *_readerModeProvisioningMetadata;	// 24 = 0x18
    NSNumberFormatter *_currencyNumberFormatter;	// 32 = 0x20
    id <PKContactlessCardIngesterDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;	// 48 = 0x30
    CDUnknownBlockType _cardSessionTokenCompletionHandler;	// 56 = 0x38
    CDUnknownBlockType _disableCardCompletionHandler;	// 64 = 0x40
}

+ (id)debugDescriptionForStatus:(unsigned long long)arg1;	// IMP=0x00000000003b7ea0
+ (_Bool)isSupported;	// IMP=0x00000000003b7b57
- (void).cxx_destruct;	// IMP=0x00000000003b7fa0
- (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;	// IMP=0x00000000003b7f98
- (void)_startListeningToRemoteAdminEventsIfRequired;	// IMP=0x00000000003b7f92
- (void)_stopListeningToRemoteAdminEvents;	// IMP=0x00000000003b7f8c
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b7f86
- (void)_ingestCardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b7f80
- (void)_cancelCardIngestion;	// IMP=0x00000000003b7dca
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b7c91
- (void)ingestCardWithSuccessHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b7b8d
- (void)invalidate;	// IMP=0x00000000003b7b5f
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000003b7a84

@end
