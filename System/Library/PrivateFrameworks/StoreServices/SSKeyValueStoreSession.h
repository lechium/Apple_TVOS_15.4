//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;	// IMP=0x0000000000101c7b
- (id)existingEntityForDomain:(id)arg1 key:(id)arg2;	// IMP=0x0000000000101bb3
- (id)copyValueForDomain:(id)arg1 key:(id)arg2;	// IMP=0x0000000000101b57
- (id)copyDataForDomain:(id)arg1 key:(id)arg2;	// IMP=0x0000000000101942
- (id)copyAccountDictionaryForDomain:(id)arg1;	// IMP=0x0000000000101381
- (void)dealloc;	// IMP=0x0000000000101346
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000001012f6

@end

