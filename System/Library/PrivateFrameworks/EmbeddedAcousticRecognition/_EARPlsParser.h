//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSXMLParserDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSMutableString, NSString, NSXMLParser;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate>
{
    NSString *_currentGrapheme;	// 8 = 0x8
    NSMutableSet *_currentPhonemes;	// 16 = 0x10
    NSXMLParser *_parser;	// 24 = 0x18
    NSMutableString *_elementValue;	// 32 = 0x20
    NSMutableDictionary *_lexemes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007782e3
@property(readonly, nonatomic) NSMutableDictionary *lexemes; // @synthesize lexemes=_lexemes;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x0000000000778289
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x0000000000778135
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00000000007780af
- (id)initWithFilePath:(id)arg1;	// IMP=0x0000000000777f4c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000777e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

