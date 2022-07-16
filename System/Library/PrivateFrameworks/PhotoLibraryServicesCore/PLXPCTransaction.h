//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject
{
    const char *_identifier;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

+ (id)openXPCTransactionStatus;	// IMP=0x000000000003233f
+ (void)_stopTrackingTransaction:(id)arg1;	// IMP=0x0000000000032182
+ (void)_startTrackingTransaction:(id)arg1;	// IMP=0x0000000000032083
+ (id)transaction:(const char *)arg1;	// IMP=0x000000000003204d
+ (void)discardCallStackSymbols:(id)arg1;	// IMP=0x0000000000031ff9
+ (id)callStackSymbols;	// IMP=0x0000000000031f34
+ (void)initialize;	// IMP=0x0000000000031eb1
- (void).cxx_destruct;	// IMP=0x0000000000031ea1
- (id)_statusDescription;	// IMP=0x0000000000031e8f
- (id)description;	// IMP=0x0000000000031e09
- (void)stillAlive;	// IMP=0x0000000000031e03
- (void)dealloc;	// IMP=0x0000000000031dbb
- (id)initWithIdentifier:(const char *)arg1;	// IMP=0x0000000000031cf0

@end
