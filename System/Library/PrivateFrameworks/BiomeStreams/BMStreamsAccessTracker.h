//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface BMStreamsAccessTracker : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000ae58b
- (void).cxx_destruct;	// IMP=0x00000000000af23f
- (_Bool)_sandboxCheck:(const char *)arg1 path:(const char *)arg2;	// IMP=0x00000000000af07f
- (_Bool)_checkAccess:(id)arg1;	// IMP=0x00000000000aee82
- (_Bool)checkAccess:(id)arg1;	// IMP=0x00000000000aeb7e
- (void)_logMissingEntitlementsForAccess:(id)arg1;	// IMP=0x00000000000ae814
- (void)logMissingEntitlementsForAccess:(id)arg1;	// IMP=0x00000000000ae66d
- (id)init;	// IMP=0x00000000000ae5e0

@end

