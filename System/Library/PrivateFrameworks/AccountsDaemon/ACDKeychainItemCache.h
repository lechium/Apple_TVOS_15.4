//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ACDKeychainItemCache : NSObject
{
    NSMutableDictionary *_nonSyncableItems;	// 8 = 0x8
    NSMutableDictionary *_syncableItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000119a7
@property(readonly) NSMutableDictionary *syncableItems;
@property(readonly) NSMutableDictionary *nonSyncableItems;

@end

