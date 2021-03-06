//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteUI/NSXMLParserDelegate-Protocol.h>

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSString, NSURL, NSXMLParser, RUIActionSignal, RUIAlertView, RUIObjectModel;
@protocol RUIParserDelegate;

@interface RUIParser : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_accumulator;	// 8 = 0x8
    NSDictionary *_currentElementAttributes;	// 16 = 0x10
    RUIAlertView *_currentAlert;	// 24 = 0x18
    NSXMLParser *_parser;	// 32 = 0x20
    RUIObjectModel *_uiObjectModel;	// 40 = 0x28
    NSMutableArray *_pages;	// 48 = 0x30
    NSMutableArray *_currentPageStack;	// 56 = 0x38
    RUIActionSignal *_actionSignal;	// 64 = 0x40
    NSURL *_baseURL;	// 72 = 0x48
    int _parserState;	// 80 = 0x50
    NSMutableArray *_elementStack;	// 88 = 0x58
    _Bool _foundXMLUI;	// 96 = 0x60
    _Bool _succeeded;	// 97 = 0x61
    NSData *_xmlData;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
    id <RUIParserDelegate> _delegate;	// 120 = 0x78
}

+ (id)rowWithAttributeDict:(id)arg1 delegate:(id)arg2 parent:(id)arg3;	// IMP=0x000000000003be22
+ (id)tableRowClassForElementName:(id)arg1;	// IMP=0x000000000003b3a4
+ (id)textStyleForString:(id)arg1;	// IMP=0x000000000003b1e0
+ (long long)textAlignmentForString:(id)arg1;	// IMP=0x000000000003b0d8
- (void).cxx_destruct;	// IMP=0x0000000000041540
@property(nonatomic) __weak id <RUIParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(retain, nonatomic) NSData *xmlData; // @synthesize xmlData=_xmlData;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;	// IMP=0x000000000004146e
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x00000000000413fe
- (void)parser:(id)arg1 foundCDATA:(id)arg2;	// IMP=0x00000000000412f0
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00000000000412d7
- (void)_validateDocumentContent;	// IMP=0x00000000000410f4
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000003feb9
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x000000000003de31
- (_Bool)parseActionSignalWithElementName:(id)arg1;	// IMP=0x000000000003dd7a
- (void)_finalizeElement:(id)arg1;	// IMP=0x000000000003dcfd
- (void)_finalizeSection;	// IMP=0x000000000003d1db
- (void)_finalizePinView;	// IMP=0x000000000003c932
- (void)_logDeprecation:(id)arg1 value:(id)arg2;	// IMP=0x000000000003c797
- (void)_addSectionWithAttributes:(id)arg1;	// IMP=0x000000000003c42f
- (void)_addNavigationBarWithAttributes:(id)arg1;	// IMP=0x000000000003c2a1
- (id)_lastRow;	// IMP=0x000000000003c1bf
- (id)_lastPageCreateIfNeeded;	// IMP=0x000000000003c170
- (id)_newRowWithAttributeDict:(id)arg1;	// IMP=0x000000000003c03e
- (id)_createAndAddPageWithAttributes:(id)arg1;	// IMP=0x000000000003bc6d
- (id)_createPageWithName:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000003bad1
- (id)actionSignal;	// IMP=0x000000000003bac3
- (id)uiObjectModel;	// IMP=0x000000000003bab5
- (void)dealloc;	// IMP=0x000000000003b872
- (id)initWithXML:(id)arg1;	// IMP=0x000000000003b85b
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000003b843
- (id)initWithXML:(id)arg1 baseURL:(id)arg2 style:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000003b436

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

