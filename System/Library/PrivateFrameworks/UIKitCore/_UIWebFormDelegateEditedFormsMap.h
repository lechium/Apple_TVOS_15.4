//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIWebFormDelegateEditedFormsMap : NSObject
{
    NSMutableDictionary *_map;	// 8 = 0x8
    NSMutableArray *_lifetimeHelper;	// 16 = 0x10
}

- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000063dcbc
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000063dc6b
- (void)removeAllObjects;	// IMP=0x000000000063dc30
- (id)allValues;	// IMP=0x000000000063dc1a
- (id)objectForKey:(id)arg1;	// IMP=0x000000000063dbe8
- (id)_keyForWebFrame:(id)arg1;	// IMP=0x000000000063dbc3
- (void)dealloc;	// IMP=0x000000000063db79
- (id)init;	// IMP=0x000000000063daf1

@end

