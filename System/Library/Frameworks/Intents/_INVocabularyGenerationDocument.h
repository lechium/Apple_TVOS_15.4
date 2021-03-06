//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface _INVocabularyGenerationDocument : NSObject <NSCopying>
{
    NSMutableDictionary *_itemsBySiriIDCache;	// 8 = 0x8
    NSMutableDictionary *_itemsByStringCache;	// 16 = 0x10
    _Bool _resetOnNextSync;	// 24 = 0x18
    _Bool _haveAssignedAllSiriIDs;	// 25 = 0x19
    NSString *_appBundleID;	// 32 = 0x20
    NSString *_intentSlot;	// 40 = 0x28
    NSString *_validity;	// 48 = 0x30
    NSString *_thisGeneration;	// 56 = 0x38
    NSArray *_vocabularyItems;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000072149
@property(nonatomic) _Bool haveAssignedAllSiriIDs; // @synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs;
@property(copy, nonatomic) NSArray *vocabularyItems; // @synthesize vocabularyItems=_vocabularyItems;
@property(copy, nonatomic) NSString *thisGeneration; // @synthesize thisGeneration=_thisGeneration;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *intentSlot; // @synthesize intentSlot=_intentSlot;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(nonatomic) _Bool resetOnNextSync; // @synthesize resetOnNextSync=_resetOnNextSync;
- (id)description;	// IMP=0x0000000000071fa1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071f30
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000071e1d
- (id)writeToFile:(id)arg1 createIntermediateDirectories:(_Bool)arg2;	// IMP=0x0000000000071c38
- (id)_initWithDictionary:(id)arg1;	// IMP=0x0000000000071bd0
- (void)_takeValuesFromDictionary:(id)arg1;	// IMP=0x00000000000715f4
- (id)_dictionaryRepresentation;	// IMP=0x00000000000714b9
- (id)_stringForSelector:(SEL)arg1 from:(id)arg2;	// IMP=0x0000000000071450
- (id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3;	// IMP=0x00000000000713bc
- (void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2;	// IMP=0x000000000007132c
- (void)_clearVocabularyItemCaches;	// IMP=0x000000000007112c
- (id)diffFromPreviousDocument:(id)arg1;	// IMP=0x00000000000707f3
- (void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1;	// IMP=0x00000000000702e1
- (id)_vocabularyItemWithString:(id)arg1;	// IMP=0x000000000006ff85
- (id)_vocabularyItemForSiriID:(id)arg1;	// IMP=0x000000000006ff02
- (id)_everyVocabularyItemSiriID;	// IMP=0x000000000006fe70
- (id)_itemsBySiriID;	// IMP=0x000000000006fc41

@end

