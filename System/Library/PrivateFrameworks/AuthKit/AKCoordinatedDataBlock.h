//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AKCoordinatedDataBlock : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    _Bool _started;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 28 = 0x1c
    NSObject<OS_dispatch_group> *_group;	// 32 = 0x20
}

+ (id)startCoordinatingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047f17
- (void).cxx_destruct;	// IMP=0x00000000000485f0
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;	// IMP=0x0000000000048357
- (void)_start;	// IMP=0x0000000000048247
- (void)setCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000480bb
- (void)start;	// IMP=0x0000000000047f7e
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047e84

@end

