//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;	// 8 = 0x8
}

+ (void)unregisterUIKitSource:(id)arg1;	// IMP=0x000000000027b917
+ (void)registerUIKitSource:(id)arg1;	// IMP=0x000000000027b8e6
+ (id)sharedInstance;	// IMP=0x000000000027b662
- (void)apply:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b7b8
- (void)remove:(id)arg1;	// IMP=0x000000000027b773
- (void)add:(id)arg1;	// IMP=0x000000000027b72e
- (void)dealloc;	// IMP=0x000000000027b6f3
- (id)init;	// IMP=0x000000000027b6a7

@end

