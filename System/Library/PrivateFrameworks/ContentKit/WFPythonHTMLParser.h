//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;
@protocol WFPythonHTMLParserDelegate;

__attribute__((visibility("hidden")))
@interface WFPythonHTMLParser : NSObject
{
    long long _currentLineNumber;	// 8 = 0x8
    long long _currentOffset;	// 16 = 0x10
    id <WFPythonHTMLParserDelegate> _delegate;	// 24 = 0x18
    NSRegularExpression *_interestingExpression;	// 32 = 0x20
    NSRegularExpression *_incompleteExpression;	// 40 = 0x28
    NSRegularExpression *_entityrefExpression;	// 48 = 0x30
    NSRegularExpression *_charrefExpression;	// 56 = 0x38
    NSRegularExpression *_startTagOpenExpression;	// 64 = 0x40
    NSRegularExpression *_commentCloseExpression;	// 72 = 0x48
    NSRegularExpression *_tagFindExpression;	// 80 = 0x50
    NSRegularExpression *_attributeFindExpression;	// 88 = 0x58
    NSRegularExpression *_locateStartTagEndExpression;	// 96 = 0x60
    NSRegularExpression *_endEndTagExpression;	// 104 = 0x68
    NSRegularExpression *_endTagFindExpression;	// 112 = 0x70
    NSString *_rawData;	// 120 = 0x78
    NSString *_cdataElement;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000fd16c
@property(copy, nonatomic) NSString *cdataElement; // @synthesize cdataElement=_cdataElement;
@property(copy, nonatomic) NSString *rawData; // @synthesize rawData=_rawData;
@property(readonly, nonatomic) NSRegularExpression *endTagFindExpression; // @synthesize endTagFindExpression=_endTagFindExpression;
@property(readonly, nonatomic) NSRegularExpression *endEndTagExpression; // @synthesize endEndTagExpression=_endEndTagExpression;
@property(readonly, nonatomic) NSRegularExpression *locateStartTagEndExpression; // @synthesize locateStartTagEndExpression=_locateStartTagEndExpression;
@property(readonly, nonatomic) NSRegularExpression *attributeFindExpression; // @synthesize attributeFindExpression=_attributeFindExpression;
@property(readonly, nonatomic) NSRegularExpression *tagFindExpression; // @synthesize tagFindExpression=_tagFindExpression;
@property(readonly, nonatomic) NSRegularExpression *commentCloseExpression; // @synthesize commentCloseExpression=_commentCloseExpression;
@property(readonly, nonatomic) NSRegularExpression *startTagOpenExpression; // @synthesize startTagOpenExpression=_startTagOpenExpression;
@property(readonly, nonatomic) NSRegularExpression *charrefExpression; // @synthesize charrefExpression=_charrefExpression;
@property(readonly, nonatomic) NSRegularExpression *entityrefExpression; // @synthesize entityrefExpression=_entityrefExpression;
@property(readonly, nonatomic) NSRegularExpression *incompleteExpression; // @synthesize incompleteExpression=_incompleteExpression;
@property(retain, nonatomic) NSRegularExpression *interestingExpression; // @synthesize interestingExpression=_interestingExpression;
@property(nonatomic) __weak id <WFPythonHTMLParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) long long currentLineNumber; // @synthesize currentLineNumber=_currentLineNumber;
- (void)handleUnknownDeclaration:(id)arg1;	// IMP=0x00000000000fcfd8
- (void)handleProcessingInstruction:(id)arg1;	// IMP=0x00000000000fcf2e
- (void)handleDoctypeDeclaration:(id)arg1;	// IMP=0x00000000000fce84
- (void)handleComment:(id)arg1;	// IMP=0x00000000000fcdda
- (void)handleCharacterRef:(id)arg1;	// IMP=0x00000000000fcd30
- (void)handleEntityRef:(id)arg1;	// IMP=0x00000000000fcc86
- (void)handleEndTag:(id)arg1;	// IMP=0x00000000000fcbdc
- (void)handleData:(id)arg1;	// IMP=0x00000000000fcb32
- (void)handleStartTag:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000000fca69
- (void)handleStartEndTag:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000000fca05
- (long long)updatePosition:(long long)arg1 j:(long long)arg2;	// IMP=0x00000000000fc8c9
- (long long)parseEndTag:(long long)arg1;	// IMP=0x00000000000fc367
- (long long)checkForWholeStartTag:(long long)arg1;	// IMP=0x00000000000fc082
- (long long)parseStartTag:(long long)arg1;	// IMP=0x00000000000fb9a0
- (long long)parseProcessingInstruction:(long long)arg1;	// IMP=0x00000000000fb828
- (long long)parseBogusComment:(long long)arg1;	// IMP=0x00000000000fb696
- (long long)parseHTMLDeclaration:(long long)arg1;	// IMP=0x00000000000fb518
- (long long)parseComment:(long long)arg1;	// IMP=0x00000000000fb352
- (long long)parseMarkedSection:(long long)arg1;	// IMP=0x00000000000fb001
- (id)scanName:(long long)arg1 declarationStartPosition:(long long)arg2 location:(long long *)arg3;	// IMP=0x00000000000fad4d
- (void)parseDataAndEnd:(_Bool)arg1;	// IMP=0x00000000000fa15e
- (void)close;	// IMP=0x00000000000fa05a
- (void)feed:(id)arg1;	// IMP=0x00000000000f9fac
- (void)reset;	// IMP=0x00000000000f9f51
- (id)init;	// IMP=0x00000000000f9cc2

@end

