//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_trust-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_trust : NSObject <OS_sec_trust>
{
    struct __SecTrust *trust;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000002e897
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000002e828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

