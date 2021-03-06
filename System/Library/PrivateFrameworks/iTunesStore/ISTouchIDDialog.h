//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSString, SSPaymentSheet;

@interface ISTouchIDDialog
{
    NSLock *_lock;	// 8 = 0x8
    _Bool _isDualAction;	// 16 = 0x10
    _Bool _isFree;	// 17 = 0x11
    SSPaymentSheet *_paymentSheet;	// 24 = 0x18
    NSString *_body;	// 32 = 0x20
    NSString *_username;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000d196
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(readonly) _Bool isDualAction; // @synthesize isDualAction=_isDualAction;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (id)paymentSheet;	// IMP=0x000000000000d10a
- (void)_parseDialogDictionary:(id)arg1;	// IMP=0x000000000000c60e
- (id)buttonForButtonType:(long long)arg1;	// IMP=0x000000000000c4ab
@property(copy) NSString *fallbackMessage;
@property(copy) NSString *fallbackExplanation;
- (void)_init;	// IMP=0x000000000000c296
- (id)initWithDialogDictionary:(id)arg1;	// IMP=0x000000000000c219

@end

