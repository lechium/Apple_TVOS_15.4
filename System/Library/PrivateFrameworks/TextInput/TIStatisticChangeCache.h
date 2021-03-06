//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject
{
    NSMutableDictionary *_cacheWithoutInputMode;	// 8 = 0x8
    NSMutableDictionary *_cacheWithInputMode;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000004f272
- (void).cxx_destruct;	// IMP=0x000000000004f24a
- (id)flush;	// IMP=0x000000000004ed18
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3;	// IMP=0x000000000004ec48
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3;	// IMP=0x000000000004eaf1
- (id)init;	// IMP=0x000000000004ea7c

@end

