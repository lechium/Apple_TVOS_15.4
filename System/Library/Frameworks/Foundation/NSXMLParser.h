//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableArray, NSSet, NSURL;
@protocol NSXMLParserDelegate;

@interface NSXMLParser : NSObject
{
    id _reserved0;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    id _reserved1;	// 24 = 0x18
    id _reserved2;	// 32 = 0x20
    id _reserved3;	// 40 = 0x28
    struct _xmlSAXHandler *_saxHandler;	// 48 = 0x30
    struct _xmlParserCtxt *_parserContext;	// 56 = 0x38
    unsigned long long _parserFlags;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    NSMutableArray *_namespaces;	// 80 = 0x50
    struct __CFDictionary *_slowStringMap;	// 88 = 0x58
    _Bool _delegateAborted;	// 96 = 0x60
    _Bool _haveDetectedEncoding;	// 97 = 0x61
    NSData *_bomChunk;	// 104 = 0x68
    unsigned long long _chunkSize;	// 112 = 0x70
    NSSet *_allowedEntityURLs;	// 120 = 0x78
    NSURL *_url;	// 128 = 0x80
    unsigned long long _externalEntityResolvingPolicy;	// 136 = 0x88
}

+ (id)currentParser;	// IMP=0x00000000001684f5
+ (void)setCurrentParser:(id)arg1;	// IMP=0x00000000001683d5
- (void)_initializeSAX2Callbacks;	// IMP=0x00000000001692e1
- (void)_popNamespaces;	// IMP=0x0000000000169150
- (void)_pushNamespaces:(id)arg1;	// IMP=0x0000000000168f45
- (void)_setParserError:(long long)arg1;	// IMP=0x0000000000168ee4
- (void)_setExpandedParserError:(id)arg1;	// IMP=0x0000000000168eb7
- (void)dealloc;	// IMP=0x0000000000168dde
- (long long)columnNumber;	// IMP=0x0000000000168dc4
- (long long)lineNumber;	// IMP=0x0000000000168daa
- (id)systemID;	// IMP=0x0000000000168da2
- (id)publicID;	// IMP=0x0000000000168d9a
@property(readonly, copy) NSError *parserError;
- (void)abortParsing;	// IMP=0x0000000000168d61
- (_Bool)parse;	// IMP=0x0000000000168d4f
- (_Bool)parseFromStream;	// IMP=0x0000000000168b1e
- (_Bool)finishIncrementalParse;	// IMP=0x0000000000168aea
- (_Bool)parseData:(id)arg1;	// IMP=0x00000000001687fd
- (_Bool)_handleParseResult:(long long)arg1;	// IMP=0x0000000000168595
- (_Bool)shouldContinueAfterFatalError;	// IMP=0x0000000000168587
- (void)setShouldContinueAfterFatalError:(_Bool)arg1;	// IMP=0x0000000000168564
@property _Bool shouldResolveExternalEntities;
@property _Bool shouldReportNamespacePrefixes;
@property _Bool shouldProcessNamespaces;
- (struct _xmlParserInput *)_xmlExternalEntityWithURL:(const char *)arg1 identifier:(const char *)arg2 context:(struct _xmlParserCtxt *)arg3 originalLoaderFunction:(CDUnknownFunctionPointerType)arg4;	// IMP=0x0000000000168076
@property unsigned long long externalEntityResolvingPolicy;
@property(copy) NSSet *allowedExternalEntityURLs;
@property id <NSXMLParserDelegate> delegate;
- (id)initWithStream:(id)arg1;	// IMP=0x0000000000167edb
- (id)initForIncrementalParsing;	// IMP=0x0000000000167ebd
- (id)initWithData:(id)arg1;	// IMP=0x0000000000167d2c
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0000000000167c49

@end

