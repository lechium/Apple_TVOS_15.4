//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9PineBoard25PBUserProfilePictureStore : NSObject
{
    MISSING_TYPE *downloader;	// 8 = 0x8
    MISSING_TYPE *cache;	// 16 = 0x10
    MISSING_TYPE *observersQueue;	// 24 = 0x18
    MISSING_TYPE *observers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000002f20e0
- (void).cxx_destruct;	// IMP=0x00400000002f8710
- (void)removeObserver:(id)arg1;	// IMP=0x00100000002f6830
- (void)addObserver:(id)arg1;	// IMP=0x00100000002f6500
- (void)prefetchProfilePictureForUserProfile:(id)arg1;	// IMP=0x00100000002f61c0
- (void)profilePictureFileForUserProfile:(id)arg1 loadOnlyFromCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f53e0
- (void)profilePictureFileForUserWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f2e30
- (id)init;	// IMP=0x00100000002f2460

@end

