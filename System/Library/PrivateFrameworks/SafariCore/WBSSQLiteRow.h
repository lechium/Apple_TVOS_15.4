//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WBSSQLiteRow : NSObject
{
    struct sqlite3_stmt *_handle;	// 8 = 0x8
}

- (id)debugDictionaryRepresentationWithStatement:(id)arg1;	// IMP=0x0000000000041738
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004164a
- (_Bool)_isNullAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000041633
- (struct RawData)uncopiedRawDataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000415ad
- (id)uncopiedDataAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004154d
- (id)dataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414f0
- (_Bool)boolAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414d8
- (double)doubleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414c8
- (long long)int64AtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414b8
- (int)intAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414a8
- (id)stringAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000041437
- (id)initWithCurrentRowOfEnumerator:(id)arg1;	// IMP=0x00000000000413c6
- (id)initWithStatement:(id)arg1;	// IMP=0x000000000004131e
- (id)init;	// IMP=0x0000000000041310

@end
