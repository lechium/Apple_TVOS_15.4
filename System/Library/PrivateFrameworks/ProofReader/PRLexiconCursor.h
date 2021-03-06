//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLexiconCursor : NSObject
{
    PRLexicon *_lexicon;	// 8 = 0x8
    struct _LXCursor *_cursor;	// 16 = 0x10
}

- (void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006032e
- (void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000602a7
- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060174
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060044
- (double)terminationProbability;	// IMP=0x0000000000060027
- (double)prefixProbability;	// IMP=0x000000000006000a
- (_Bool)hasChildren;	// IMP=0x000000000005ffed
- (_Bool)hasEntries;	// IMP=0x000000000005ffd0
- (_Bool)isValid;	// IMP=0x000000000005ffc2
- (void)advanceWithString:(id)arg1;	// IMP=0x000000000005ff84
- (void)advanceWithCombinedCharacterSequence:(id)arg1;	// IMP=0x000000000005ff72
- (void)_advance:(id)arg1;	// IMP=0x000000000005ff42
- (void)dealloc;	// IMP=0x000000000005fef9
- (id)initWithLexicon:(id)arg1;	// IMP=0x000000000005fe84

@end

