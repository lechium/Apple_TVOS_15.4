//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UnfairLock;

@interface ThreadSafeDictionary : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    UnfairLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003338
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0010000000003256
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000311c
- (id)optionalForKey:(id)arg1;	// IMP=0x0010000000002f64
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000002e0d
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000002c1a
- (id)init;	// IMP=0x0010000000002ba5

@end

