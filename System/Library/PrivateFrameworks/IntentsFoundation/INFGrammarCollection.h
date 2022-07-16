//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface INFGrammarCollection : NSObject
{
    NSMutableDictionary *_tokensDictionary;	// 8 = 0x8
    NSMutableDictionary *_sentencesDictionary;	// 16 = 0x10
}

+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;	// IMP=0x000000000000956b
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000009556
+ (id)grammarCollection;	// IMP=0x0000000000009544
- (void).cxx_destruct;	// IMP=0x00000000000092de
@property(retain, nonatomic) NSMutableDictionary *sentencesDictionary; // @synthesize sentencesDictionary=_sentencesDictionary;
@property(retain, nonatomic) NSMutableDictionary *tokensDictionary; // @synthesize tokensDictionary=_tokensDictionary;
- (void)writeToFileAtPath:(id)arg1;	// IMP=0x00000000000091fe
- (id)dictionaryRepresentation;	// IMP=0x000000000000906a
@property(readonly, nonatomic) NSArray *tokens;
- (id)tokenWithIdentifier:(id)arg1;	// IMP=0x0000000000008fb3
- (void)addToken:(id)arg1;	// IMP=0x0000000000008f46
- (id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2;	// IMP=0x0000000000008ef4
- (id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;	// IMP=0x0000000000008ea2
- (id)createNounWithIdentifier:(id)arg1 language:(id)arg2;	// IMP=0x0000000000008e50
@property(readonly, nonatomic) NSArray *sentences;
- (void)addSentence:(id)arg1;	// IMP=0x0000000000008d2f
- (id)sentenceWithIdentifier:(id)arg1;	// IMP=0x0000000000008d19
- (id)createSentenceWithIdentifier:(id)arg1;	// IMP=0x0000000000008cc7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000008b5e
- (id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;	// IMP=0x0000000000008921
- (id)init;	// IMP=0x0000000000008884

@end
