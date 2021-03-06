//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, SSRentalCheckoutRequest, TVHKRentalItem;

__attribute__((visibility("hidden")))
@interface TVHKStoreRentalCheckoutOperation
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKRentalItem *_rentalItem;	// 24 = 0x18
    SSRentalCheckoutRequest *_checkoutRequest;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000000002ea84
- (void).cxx_destruct;	// IMP=0x000000000002f0f3
@property(retain, nonatomic) SSRentalCheckoutRequest *checkoutRequest; // @synthesize checkoutRequest=_checkoutRequest;
@property(readonly, copy, nonatomic) TVHKRentalItem *rentalItem; // @synthesize rentalItem=_rentalItem;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)cancel;	// IMP=0x000000000002effd
- (void)executionDidBegin;	// IMP=0x000000000002ec73
- (id)initWithRentalItem:(id)arg1;	// IMP=0x000000000002eb22
- (id)init;	// IMP=0x000000000002eab3

@end

