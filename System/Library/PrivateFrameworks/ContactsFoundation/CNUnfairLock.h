//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSLocking-Protocol.h>

@interface CNUnfairLock : NSObject <NSLocking>
{
    struct os_unfair_lock_s _os_unfair_lock;	// 8 = 0x8
}

- (void)assertCurrentThreadIsNotOwner;	// IMP=0x000000000004ce59
- (void)assertCurrentThreadIsOwner;	// IMP=0x000000000004ce4b
- (_Bool)tryLock;	// IMP=0x000000000004ce3d
- (void)unlock;	// IMP=0x000000000004ce2f
- (void)lock;	// IMP=0x000000000004ce21
- (id)description;	// IMP=0x000000000004cd9b
- (id)init;	// IMP=0x000000000004cd46

@end

