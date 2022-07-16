//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

#import <ActionKit/ENXMLSaxParserDelegate-Protocol.h>

@class ENMLWriter, ENNote, ENWebArchive, ENXMLDTD, ENXMLSaxParser, NSArray, NSString, NSURL;

@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate>
{
    _Bool _inTitleElement;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_mimeType;	// 24 = 0x18
    NSURL *_baseURL;	// 32 = 0x20
    ENXMLSaxParser *_htmlParser;	// 40 = 0x28
    ENMLWriter *_enmlWriter;	// 48 = 0x30
    ENXMLDTD *_enmlDTD;	// 56 = 0x38
    NSURL *_archiveBaseURL;	// 64 = 0x40
    ENWebArchive *_webArchive;	// 72 = 0x48
    ENNote *_note;	// 80 = 0x50
    NSArray *_ignorableTags;	// 88 = 0x58
    NSArray *_ignorableAttributes;	// 96 = 0x60
    NSArray *_skipTags;	// 104 = 0x68
    NSArray *_inlineElements;	// 112 = 0x70
    unsigned long long _ignoreElementCount;	// 120 = 0x78
}

+ (Class)transformedValueClass;	// IMP=0x0000000000202732
+ (_Bool)allowsReverseTransformation;	// IMP=0x000000000020272a
- (void).cxx_destruct;	// IMP=0x000000000020263e
@property(nonatomic) _Bool inTitleElement; // @synthesize inTitleElement=_inTitleElement;
@property(nonatomic) unsigned long long ignoreElementCount; // @synthesize ignoreElementCount=_ignoreElementCount;
@property(retain, nonatomic) NSArray *inlineElements; // @synthesize inlineElements=_inlineElements;
@property(retain, nonatomic) NSArray *skipTags; // @synthesize skipTags=_skipTags;
@property(retain, nonatomic) NSArray *ignorableAttributes; // @synthesize ignorableAttributes=_ignorableAttributes;
@property(retain, nonatomic) NSArray *ignorableTags; // @synthesize ignorableTags=_ignorableTags;
@property(retain, nonatomic) ENNote *note; // @synthesize note=_note;
@property(retain, nonatomic) ENWebArchive *webArchive; // @synthesize webArchive=_webArchive;
@property(retain, nonatomic) NSURL *archiveBaseURL; // @synthesize archiveBaseURL=_archiveBaseURL;
@property(retain, nonatomic) ENXMLDTD *enmlDTD; // @synthesize enmlDTD=_enmlDTD;
@property(retain, nonatomic) ENMLWriter *enmlWriter; // @synthesize enmlWriter=_enmlWriter;
@property(retain, nonatomic) ENXMLSaxParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000002023fd
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x0000000000202313
- (void)parser:(id)arg1 didEndElement:(id)arg2;	// IMP=0x00000000002021f0
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000201754
- (id)resourceFromWebResource:(id)arg1;	// IMP=0x0000000000201567
- (id)mimeTypeFromFilename:(id)arg1;	// IMP=0x0000000000201501
- (id)filenameFromURL:(id)arg1;	// IMP=0x00000000002014ad
- (id)sanitizeURLAttribute:(id)arg1;	// IMP=0x000000000020113b
- (id)archiveBaseURLFromURL:(id)arg1;	// IMP=0x0000000000201043
- (id)htmlFromWebArchive:(id)arg1;	// IMP=0x0000000000200f6e
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000200898
- (id)init;	// IMP=0x0000000000200801

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

