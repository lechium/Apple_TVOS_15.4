//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAMailAccount;

@interface DADeliveryAccount
{
    DAMailAccount *_DAMailAccount;	// 8 = 0x8
}

- (id)mailAccountIfAvailable;	// IMP=0x0000000000085a89
- (void)dealloc;	// IMP=0x0000000000085a47
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;	// IMP=0x00000000000859e9
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;	// IMP=0x0000000000085993
- (id)newDeliveryWithMessage:(id)arg1;	// IMP=0x000000000008593d
- (Class)deliveryClass;	// IMP=0x000000000008592c
- (id)initWithDAMailAccount:(id)arg1;	// IMP=0x00000000000858d5

@end

