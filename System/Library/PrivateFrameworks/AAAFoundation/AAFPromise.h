//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AAFPromise : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AAFPromise *_selfReference;	// 16 = 0x10
    _Bool _completed;	// 24 = 0x18
    id _value;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_callbacks;	// 48 = 0x30
}

+ (id)all:(id)arg1;	// IMP=0x0000000000005d29
- (void).cxx_destruct;	// IMP=0x0000000000006320
- (CDUnknownBlockType)catchOnQueue;	// IMP=0x00000000000062b9
@property(readonly, nonatomic) CDUnknownBlockType catch;
- (CDUnknownBlockType)thenOnQueue;	// IMP=0x00000000000061eb
@property(readonly, nonatomic) CDUnknownBlockType then;
- (id)catch:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x0000000000005b83
- (id)catch:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005a84
- (id)then:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x000000000000586d
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005757
- (void)onComplete:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x000000000000557f
- (void)onComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005471
- (void)_handleChainingResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000053cf
- (id)_placeBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x0000000000005170
- (id)_chain:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f32
- (void)abortWithError:(id)arg1;	// IMP=0x0000000000004f1b
- (void)_completeWithValue:(id)arg1 error:(id)arg2;	// IMP=0x0000000000004c8b
- (void)_startWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004b24
- (id)initWithError:(id)arg1;	// IMP=0x0000000000004a7c
- (id)initWithValue:(id)arg1;	// IMP=0x00000000000049d1
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000048fb

@end
