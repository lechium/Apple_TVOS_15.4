//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableArray, NSString;

@interface CKVTokenChainBuilder : NSObject
{
    NSString *_normalizedString;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSMutableArray *_tokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cb99e
- (id)build;	// IMP=0x00000000000cb95f
- (void)addToken:(id)arg1;	// IMP=0x00000000000cb797
- (id)init;	// IMP=0x00000000000cb74f
- (id)initWithString:(id)arg1 locale:(id)arg2;	// IMP=0x00000000000cb69c

@end

