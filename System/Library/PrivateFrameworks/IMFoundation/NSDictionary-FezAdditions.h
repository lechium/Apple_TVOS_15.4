//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000000007448
+ (id)dictionaryWithPlistData:(id)arg1;	// IMP=0x0000000000007089
- (id)__imDictionaryByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000075ef
- (id)__imDeepCopy;	// IMP=0x00000000000073c9
- (id)dictionaryFromChanges:(id)arg1;	// IMP=0x000000000000715f
- (id)plistData;	// IMP=0x0000000000007138
- (id)keysOfChangedEntriesComparedTo:(id)arg1;	// IMP=0x0000000000006d9b
- (_Bool)__imIsMutable;	// IMP=0x0000000000006d5b
- (id)_dataForKey:(id)arg1;	// IMP=0x000000000000b585
- (id)_stringForKey:(id)arg1;	// IMP=0x000000000000b525
- (id)_numberForKey:(id)arg1;	// IMP=0x000000000000b4c5
- (id)_arrayForKey:(id)arg1;	// IMP=0x000000000000b465
- (id)_dictionaryForKey:(id)arg1;	// IMP=0x000000000000b405
@property(readonly, nonatomic) unsigned long long fileHFSResourceForkSize;
@property(readonly, nonatomic) unsigned short fileHFSFlags;
@end

