//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AVResult : NSObject
{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

@property(readonly, getter=isFailed) _Bool failed;
- (void)getStatus:(long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000004c43
- (void)markAsFailedWithError:(id)arg1;	// IMP=0x0000000000004c04
- (void)markAsCompleted;	// IMP=0x0000000000004bdb
- (void)dealloc;	// IMP=0x0000000000004b97
- (id)init;	// IMP=0x0000000000004b2d

@end

