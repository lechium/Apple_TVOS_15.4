//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCAMDEmbeddedDeviceService, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HMDCAMDBlockManager : NSObject
{
    NSMutableDictionary *_blockHandlerMap;	// 8 = 0x8
    HMDCAMDEmbeddedDeviceService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_blockQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000513c3c
- (id)forwardingBlockWithArgumentCount:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000513908
- (void)invokeForwardedBlockWithArguments:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000051374b
- (unsigned long long)count;	// IMP=0x0000000000513735
- (id)keyForBlock:(id)arg1;	// IMP=0x000000000051361d
- (id)blockForKey:(id)arg1;	// IMP=0x0000000000513607
- (void)removeBlockForKey:(id)arg1;	// IMP=0x00000000005135f1
- (void)removeBlock:(id)arg1;	// IMP=0x000000000051353b
- (void)addBlock:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005134ca
- (void)addBlockNoCopy:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005134ad
- (id)initWithService:(id)arg1;	// IMP=0x00000000005133e9

@end

