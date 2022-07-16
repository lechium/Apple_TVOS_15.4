//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSPurchaseInfo, NSObject;
@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPurchaseRequestEncoder
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    AMSPurchaseInfo *_purchaseInfo;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purchaseRequestQueue;	// 24 = 0x18
}

+ (id)_parametersFromPurchaseInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d988f
+ (long long)_anisetteTypeFromAccount:(id)arg1;	// IMP=0x00000000001d9093
+ (void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001d847a
- (void).cxx_destruct;	// IMP=0x00000000001da347
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue; // @synthesize purchaseRequestQueue=_purchaseRequestQueue;
@property(readonly, nonatomic) AMSPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
- (void)setBag:(id)arg1;	// IMP=0x00000000001da2fd
- (id)bag;	// IMP=0x00000000001da2ec
- (id)_bagURLWithError:(id *)arg1;	// IMP=0x00000000001d96eb
- (id)_bagURLKeys;	// IMP=0x00000000001d945d
- (id)_bagURLKeysForPurchaseType:(long long)arg1 prefix:(id)arg2;	// IMP=0x00000000001d9217
- (id)_buyProductURLKeysForProductType:(id)arg1 prefix:(id)arg2;	// IMP=0x00000000001d90a6
- (id)encodeRequest;	// IMP=0x00000000001d8832
- (id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001d8250
- (id)initWithPurchaseInfo:(id)arg1;	// IMP=0x00000000001d81bf

@end
