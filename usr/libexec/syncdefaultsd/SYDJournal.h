//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SYDJournal : NSObject
{
    NSMutableDictionary *_store;	// 8 = 0x8
    NSMutableDictionary *_journal;	// 16 = 0x10
    _Bool _readonly;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000423c2
- (id)description;	// IMP=0x0010000000042399
- (_Bool)removeChangesUntilChangeCount:(long long)arg1;	// IMP=0x00100000000420fe
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;	// IMP=0x0010000000041f9a
- (long long)maximumChangeCount;	// IMP=0x0010000000041e85
- (id)changesSinceChangeCount:(long long)arg1;	// IMP=0x0010000000041c6f
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000041b8c
- (id)initWithMutableStore:(id)arg1;	// IMP=0x0010000000041adb
- (id)initWithStore:(id)arg1;	// IMP=0x0010000000041a3f
- (id)init;	// IMP=0x0010000000041a10

@end

