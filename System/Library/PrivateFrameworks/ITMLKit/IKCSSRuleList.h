//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IKCSSRuleList : NSObject
{
    NSMutableArray *rules;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000452ab
- (id)description;	// IMP=0x00000000000450f4
- (unsigned long long)count;	// IMP=0x00000000000450de
- (id)ruleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000450c8
- (id)lastRule;	// IMP=0x00000000000450b2
- (id)firstRule;	// IMP=0x000000000004509c
- (void)addRule:(id)arg1;	// IMP=0x0000000000045086
- (id)init;	// IMP=0x0000000000045020

@end

