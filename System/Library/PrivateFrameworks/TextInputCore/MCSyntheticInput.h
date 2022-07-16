//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface MCSyntheticInput
{
    _Bool _includeSuffixAsSearchString;	// 8 = 0x8
    NSString *_committedText;	// 16 = 0x10
    NSArray *_syllables;	// 24 = 0x18
    unsigned long long _cursorIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000070ac6
@property(nonatomic) _Bool includeSuffixAsSearchString; // @synthesize includeSuffixAsSearchString=_includeSuffixAsSearchString;
@property(readonly, nonatomic) unsigned long long cursorIndex; // @synthesize cursorIndex=_cursorIndex;
@property(readonly, nonatomic) NSArray *syllables; // @synthesize syllables=_syllables;
@property(readonly, nonatomic) NSString *committedText; // @synthesize committedText=_committedText;
- (id)externalSuffix;	// IMP=0x00000000000706f3
- (int)syllableIndex:(int *)arg1;	// IMP=0x000000000007047c
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *uncommittedText;
- (id)syntheticInputWithCursorIndex:(unsigned long long)arg1;	// IMP=0x00000000000702fc
- (id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2;	// IMP=0x00000000000701e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070127
- (id)initWithCommittedText:(id)arg1 syllables:(id)arg2;	// IMP=0x0000000000070018
- (id)init;	// IMP=0x000000000006fff8

@end

