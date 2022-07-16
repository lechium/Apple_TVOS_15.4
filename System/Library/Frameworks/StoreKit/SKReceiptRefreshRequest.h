//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SKReceiptRefreshRequest
{
    NSDictionary *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000024f6f
@property(readonly, nonatomic) NSDictionary *receiptProperties; // @synthesize receiptProperties=_properties;
- (_Bool)_wantsVPP;	// IMP=0x0000000000024f08
- (_Bool)_wantsRevoked;	// IMP=0x0000000000024eb2
- (_Bool)_wantsExpired;	// IMP=0x0000000000024e5c
- (void)_requestCompletedWithError:(id)arg1;	// IMP=0x0000000000024d41
- (void)_handleReply:(id)arg1;	// IMP=0x0000000000024b79
- (void)_start;	// IMP=0x00000000000244a7
- (id)initWithReceiptProperties:(id)arg1;	// IMP=0x0000000000024443

@end
