//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileCoordinationRetainedAccess-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject <NSFileCoordinationRetainedAccess>
{
    CDUnknownBlockType block;	// 8 = 0x8
    _Atomic int count;	// 16 = 0x10
}

+ (id)completionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cfe56
- (void)decrement;	// IMP=0x00000000001cff4d
- (void)increment;	// IMP=0x00000000001cff09
- (void)dealloc;	// IMP=0x00000000001cfe9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

