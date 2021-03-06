//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSLock;

@interface EMFStringStemmer : NSObject
{
    struct sb_stemmer *_stemmer;	// 8 = 0x8
    NSLock *_stemmerLock;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    unsigned long long _encoding;	// 32 = 0x20
}

+ (struct sb_stemmer *)_createSnowballStemmerForLocale:(id)arg1;	// IMP=0x000000000000fcca
+ (id)stemmerLanguageNameForLocale:(id)arg1;	// IMP=0x000000000000f819
+ (id)supportedLanguageNames;	// IMP=0x000000000000f75d
+ (unsigned char)supportsLocale:(id)arg1;	// IMP=0x000000000000f69e
- (void).cxx_destruct;	// IMP=0x000000000000fd7a
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly, retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)stemTokens:(id)arg1;	// IMP=0x000000000000faef
- (id)stemToken:(id)arg1;	// IMP=0x000000000000fa34
- (void)dealloc;	// IMP=0x000000000000f9f5
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000000f949

@end

