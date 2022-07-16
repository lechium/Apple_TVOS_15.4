//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, ASFReceipt, ApplicationProxy, NSString;

@interface AppReceiptTask
{
    ApplicationProxy *_app;	// 8 = 0x8
    _Bool _attributeToAppStore;	// 16 = 0x10
    _Bool _revoked;	// 17 = 0x11
    ACAccount *_account;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    unsigned long long _receiptFlags;	// 40 = 0x28
    ASFReceipt *_receipt;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002f8bd
@property(readonly, nonatomic) _Bool revoked; // @synthesize revoked=_revoked;
@property(readonly, nonatomic) ASFReceipt *receipt; // @synthesize receipt=_receipt;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_receiptFlags;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(nonatomic) _Bool attributeToAppStore; // @synthesize attributeToAppStore=_attributeToAppStore;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)handleEngagementRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f7a5
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f734
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f6c3
- (void)main;	// IMP=0x001000000002f2f5
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x001000000002f298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

