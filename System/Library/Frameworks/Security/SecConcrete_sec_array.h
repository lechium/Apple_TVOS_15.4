//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_array-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_array : NSObject <OS_sec_array>
{
    NSObject<OS_xpc_object> *xpc_array;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002e47b
- (void)dealloc;	// IMP=0x000000000002e3f9
- (id)init;	// IMP=0x000000000002e394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

