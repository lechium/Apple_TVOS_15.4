//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VoucherStore : NSObject
{
    NSMutableDictionary *_vouchers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0020000000062ca9
- (void).cxx_destruct;	// IMP=0x002000000006314c
- (void)usingVoucherForExternalID:(id)arg1 applyQOSClass:(unsigned int)arg2 executeBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062f86
- (void)removeVoucherForExternalID:(id)arg1;	// IMP=0x0010000000062e80
- (void)insertVoucher:(id)arg1 forExternalID:(id)arg2;	// IMP=0x0010000000062d54
- (id)init;	// IMP=0x0010000000062cfe

@end

