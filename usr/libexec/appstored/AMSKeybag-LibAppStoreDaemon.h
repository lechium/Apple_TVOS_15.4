//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSKeybag.h>

@interface AMSKeybag (LibAppStoreDaemon)
+ (id)lib_keybagSyncStringForAccount:(id)arg1 withTransactionType:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x001000000010d276
+ (id)lib_keybagSyncDataForAccount:(id)arg1 withTransactionType:(unsigned int)arg2;	// IMP=0x001000000010d26e
+ (void)lib_importKeybagData:(id)arg1;	// IMP=0x001000000010d268
@end

