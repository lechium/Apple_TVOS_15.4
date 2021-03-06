//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IKCSSParser : NSObject
{
}

+ (id)consumeDeclaration:(id)arg1;	// IMP=0x00000000000bd7fd
+ (id)consumeDeclarationList:(id)arg1;	// IMP=0x00000000000bd0e1
+ (id)consumeFunction:(id)arg1 fromToken:(id)arg2;	// IMP=0x00000000000bce82
+ (id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2;	// IMP=0x00000000000bcc73
+ (id)consumeComponentValue:(id)arg1;	// IMP=0x00000000000bcb31
+ (id)consumeAtRule:(id)arg1;	// IMP=0x00000000000bc5ba
+ (id)consumeQualifiedRule:(id)arg1;	// IMP=0x00000000000bc122
+ (id)consumeRules:(id)arg1 topLevel:(_Bool)arg2;	// IMP=0x00000000000bbf87
+ (id)parseStylesheet:(id)arg1;	// IMP=0x00000000000bbed2
+ (id)parseRulesList:(id)arg1;	// IMP=0x00000000000bb5b1
+ (id)parse:(id)arg1;	// IMP=0x00000000000bb47d

@end

