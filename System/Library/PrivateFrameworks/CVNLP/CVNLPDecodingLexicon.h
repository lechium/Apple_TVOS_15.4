//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CVNLPDecodingLexicon : NSObject
{
    const struct _LXLexicon *_lexicon;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    struct _LXCursor *__rootCursor;	// 24 = 0x18
}

+ (id)decodingLexiconForLocale:(id)arg1 priority:(unsigned long long)arg2;	// IMP=0x00000000000584c0
+ (id)decodingLexiconForLocale:(id)arg1;	// IMP=0x0000000000058410
+ (const struct _LXLexicon *)_createLexiconForLocale:(id)arg1;	// IMP=0x0000000000058300
@property(readonly, nonatomic) struct _LXCursor *_rootCursor; // @synthesize _rootCursor=__rootCursor;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) const struct _LXLexicon *lexicon; // @synthesize lexicon=_lexicon;
- (void)dealloc;	// IMP=0x0000000000058270
- (id)initWithLexicon:(struct _LXLexicon *)arg1;	// IMP=0x0000000000058250
- (id)initWithLexicon:(struct _LXLexicon *)arg1 priority:(unsigned long long)arg2;	// IMP=0x00000000000581c0

@end

