//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlSupport/HMHomeManagerDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC26SiriPlaybackControlSupport11HomeManager : NSObject <HMHomeManagerDelegate>
{
    MISSING_TYPE *homeManagerInitTimeout;	// 8 = 0x8
    MISSING_TYPE *hmHomeManager;	// 16 = 0x10
    MISSING_TYPE *hmHomeManagerOptions;	// 24 = 0x18
    MISSING_TYPE *homeData;	// 32 = 0x20
    MISSING_TYPE *loadSucceeded;	// 40 = 0x28
    MISSING_TYPE *readyGroup;	// 48 = 0x30
    MISSING_TYPE *initializationSignpost;	// 0 = 0x0
    MISSING_TYPE *loadQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000000b370
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000000b140
- (id)init;	// IMP=0x0000000000009f00

@end

