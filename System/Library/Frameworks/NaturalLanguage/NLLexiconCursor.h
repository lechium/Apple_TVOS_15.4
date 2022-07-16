//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLLexicon, NSString;

@interface NLLexiconCursor : NSObject
{
    NLLexicon *_lexicon;	// 8 = 0x8
    struct _LXCursor *_cursor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012d7f
- (void)enumerateCompletionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012c3d
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012b3a
- (void)_enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012a12
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012908
@property(readonly, copy) NSString *traversedString;
@property(readonly) double terminationProbability;
@property(readonly) double prefixProbability;
@property(readonly) _Bool hasChildren;
@property(readonly) _Bool hasEntries;
- (id)cursorByAdvancingWithString:(id)arg1;	// IMP=0x00000000000127dd
- (void)dealloc;	// IMP=0x000000000001279e
- (id)initWithLexicon:(id)arg1 string:(id)arg2;	// IMP=0x00000000000126d1
- (id)initWithLexicon:(id)arg1 cursor:(struct _LXCursor *)arg2;	// IMP=0x0000000000012629

@end

