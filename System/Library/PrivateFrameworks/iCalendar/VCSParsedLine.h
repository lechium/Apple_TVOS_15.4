//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSString;

@interface VCSParsedLine : NSObject
{
    NSString *_keyword;	// 8 = 0x8
    NSMutableData *_content;	// 16 = 0x10
    NSMutableDictionary *_params;	// 24 = 0x18
    _Bool _usePalmD4Hooks;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    long long _tokenID;	// 48 = 0x30
}

+ (const CDStruct_8fc448ea *)lookupProperty:(long long)arg1;	// IMP=0x000000000002c902
+ (long long)tokenizeNSStringKeyword:(id)arg1 withType:(unsigned long long *)arg2;	// IMP=0x000000000002c8b7
+ (long long)tokenizeKeyword:(const char *)arg1 withType:(unsigned long long *)arg2;	// IMP=0x000000000002c85b
- (void).cxx_destruct;	// IMP=0x000000000002d36d
@property(nonatomic) _Bool usePalmD4Hooks; // @synthesize usePalmD4Hooks=_usePalmD4Hooks;
@property(nonatomic) long long tokenID; // @synthesize tokenID=_tokenID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)params;	// IMP=0x000000000002d325
- (id)convertedContent;	// IMP=0x000000000002d101
- (id)content;	// IMP=0x000000000002d0f3
- (void)setContentFromCString:(char *)arg1;	// IMP=0x000000000002d0a0
- (id)description;	// IMP=0x000000000002cfbf
- (id)keyword;	// IMP=0x000000000002cfb1
- (void)setKeywordFromCString:(char *)arg1;	// IMP=0x000000000002cf73
- (id)loadFromCString:(char *)arg1 withParseState:(id)arg2;	// IMP=0x000000000002ca1e
- (void)reset;	// IMP=0x000000000002c9cc
- (id)init;	// IMP=0x000000000002c939

@end
