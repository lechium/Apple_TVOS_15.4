//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PCSLockManager;

__attribute__((visibility("hidden")))
@interface PCSLockAssertion : NSObject
{
    _Bool _held;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    PCSLockManager *_manager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020f73
@property _Bool held; // @synthesize held=_held;
@property(retain) PCSLockManager *manager; // @synthesize manager=_manager;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x0000000000020ed4
- (void)dropAssertion;	// IMP=0x0000000000020e7a
- (_Bool)holdAssertion;	// IMP=0x0000000000020e13
- (id)initAssertion:(id)arg1 manager:(id)arg2;	// IMP=0x0000000000020d7a

@end

