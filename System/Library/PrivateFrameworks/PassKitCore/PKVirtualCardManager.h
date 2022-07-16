//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject
{
    PKInAppPaymentService *_inAppPaymentService;	// 8 = 0x8
    PKAccountService *_accountService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000032e9aa
- (void)queryKeychainForVirtualCard:(CDUnknownBlockType)arg1;	// IMP=0x000000000032e689
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032e683
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032e67d
- (id)urlToPassDetailsForVirtualCard:(id)arg1;	// IMP=0x000000000032e675
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000032e337
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032daa8
- (id)init;	// IMP=0x000000000032da23

@end
