//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSLocking-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023526
@property(copy) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000002345d
- (void)unlock;	// IMP=0x000000000002344f
- (void)lock;	// IMP=0x00000000000233c6
- (void)invalidate;	// IMP=0x00000000000233ac
- (void)dealloc;	// IMP=0x000000000002336e
- (id)init;	// IMP=0x00000000000232c1

@end

