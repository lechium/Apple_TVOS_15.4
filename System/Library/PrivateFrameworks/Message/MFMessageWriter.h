//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MFMessageWriter : NSObject
{
    Class _messageClassToInstantiate;	// 8 = 0x8
    unsigned int _allows8BitMimeParts:1;	// 16 = 0x10
    unsigned int _allowsBinaryMimeParts:1;	// 16 = 0x10
    unsigned int _writeSizeDispositionParameter:1;	// 16 = 0x10
    unsigned int _allowsQuotedPrintable:1;	// 16 = 0x10
    _Bool _shouldWriteAttachmentPlaceholders;	// 17 = 0x11
    id _delegate;	// 24 = 0x18
    NSDictionary *_compositionSpecification;	// 32 = 0x20
}

@property(nonatomic) _Bool shouldWriteAttachmentPlaceholders; // @synthesize shouldWriteAttachmentPlaceholders=_shouldWriteAttachmentPlaceholders;
@property(readonly, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)setMessageClassToInstantiate:(Class)arg1;	// IMP=0x000000000000986f
- (void)setWriteSizeDispositionParameter:(_Bool)arg1;	// IMP=0x000000000000985c
- (void)setAllowsQuotedPrintable:(_Bool)arg1;	// IMP=0x0000000000009849
- (_Bool)allowsQuotedPrintable;	// IMP=0x000000000000983b
- (void)setAllowsBinaryMimeParts:(_Bool)arg1;	// IMP=0x0000000000009829
- (_Bool)allowsBinaryMimeParts;	// IMP=0x000000000000981c
- (void)setAllows8BitMimeParts:(_Bool)arg1;	// IMP=0x000000000000980c
- (_Bool)allows8BitMimeParts;	// IMP=0x0000000000009801
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;	// IMP=0x000000000000902b
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5;	// IMP=0x000000000000864f
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;	// IMP=0x000000000000862d
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;	// IMP=0x00000000000079cd
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;	// IMP=0x0000000000006f21
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;	// IMP=0x00000000000067e6
- (void)dealloc;	// IMP=0x00000000000067ab
- (id)initWithCompositionSpecification:(id)arg1;	// IMP=0x000000000000672a
- (id)init;	// IMP=0x0000000000006716

@end

