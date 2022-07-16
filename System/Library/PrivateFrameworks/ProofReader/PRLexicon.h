//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLexicon : NSObject
{
    NSString *_localization;	// 8 = 0x8
    NSString *_unigramsPath;	// 16 = 0x10
    const void *_lexicon;	// 24 = 0x18
}

+ (id)lexiconWithLexicon:(const void *)arg1;	// IMP=0x0000000000060686
+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x0000000000060652
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060ddd
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060d78
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060d13
- (_Bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double *)arg2;	// IMP=0x0000000000060b62
- (_Bool)getProbabilityForString:(id)arg1 probability:(double *)arg2;	// IMP=0x0000000000060981
- (id)stringForTokenID:(unsigned int)arg1;	// IMP=0x0000000000060943
- (unsigned int)tokenIDForString:(id)arg1;	// IMP=0x0000000000060857
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060801
- (id)createCursor;	// IMP=0x00000000000607d3
- (struct _LXLexicon *)lexicon;	// IMP=0x00000000000607c9
- (void)dealloc;	// IMP=0x0000000000060771
- (id)description;	// IMP=0x00000000000606b5
- (id)initWithLexicon:(const void *)arg1;	// IMP=0x00000000000605e9
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;	// IMP=0x0000000000060477

@end
