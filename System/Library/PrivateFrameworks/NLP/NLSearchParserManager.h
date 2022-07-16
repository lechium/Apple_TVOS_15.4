//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NLSearchParserManager : NSObject
{
    void *_parser;	// 8 = 0x8
}

+ (id)availableLanguages;	// IMP=0x00000000000af4df
+ (id)defaultManager;	// IMP=0x00000000000af41c
- (void)dealloc;	// IMP=0x00000000000b05ba
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b04e8
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b03bc
- (void)enumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000afc71
- (void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af5c7
- (id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3;	// IMP=0x00000000000af540
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000af4f1

@end

