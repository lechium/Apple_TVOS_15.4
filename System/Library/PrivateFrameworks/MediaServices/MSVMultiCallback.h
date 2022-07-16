//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVCallback, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MSVMultiCallback : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    MSVCallback *_firstCallback;	// 16 = 0x10
    MSVCallback *_lastCallback;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000443a8
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *callbacks;
- (void)invokeWithObject:(id)arg1;	// IMP=0x000000000004414c
- (void)invoke;	// IMP=0x000000000004401f
- (_Bool)removeCallback:(id)arg1;	// IMP=0x0000000000043f51
@property(retain, nonatomic) MSVCallback *lastCallback;
@property(retain, nonatomic) MSVCallback *firstCallback;
- (void)addCallback:(id)arg1;	// IMP=0x0000000000043c38
- (id)init;	// IMP=0x0000000000043bb6

@end

