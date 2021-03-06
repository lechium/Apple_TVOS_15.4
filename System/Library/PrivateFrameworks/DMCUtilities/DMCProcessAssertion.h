//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface DMCProcessAssertion : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001b10e
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)_releaseAssertion;	// IMP=0x000000000001aff9
- (void)_createAssertion;	// IMP=0x000000000001ae6c
- (void)dealloc;	// IMP=0x000000000001ae2e
- (id)initWithReason:(id)arg1;	// IMP=0x000000000001adb3

@end

