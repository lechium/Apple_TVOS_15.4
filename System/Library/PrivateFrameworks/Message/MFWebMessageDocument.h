//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFAttachmentManager, MFLock, MFMimeBody, MFMimePart, NSData, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument
{
    unsigned int _uniqueId;	// 24 = 0x18
    NSURL *_baseURL;	// 32 = 0x20
    MFMimeBody *_mimeBody;	// 40 = 0x28
    MFMimePart *_htmlPart;	// 48 = 0x30
    NSData *_htmlData;	// 56 = 0x38
    MFLock *_lock;	// 64 = 0x40
    NSMutableDictionary *_partsByURL;	// 72 = 0x48
    NSMutableDictionary *_partsByFilename;	// 80 = 0x50
    unsigned int _preferredEncoding;	// 88 = 0x58
    _Bool _visuallyEmpty;	// 92 = 0x5c
    MFAttachmentManager *_attachmentManager;	// 96 = 0x60
}

@property(retain, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(getter=isVisuallyEmpty) _Bool visuallyEmpty; // @synthesize visuallyEmpty=_visuallyEmpty;
@property unsigned int preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;
@property(readonly) NSData *htmlData; // @synthesize htmlData=_htmlData;
@property(readonly) MFMimePart *mimePart; // @synthesize mimePart=_htmlPart;
@property(readonly) MFMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property(readonly) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)fileWrapper;	// IMP=0x000000000001051a
- (id)preferredCharacterSet;	// IMP=0x00000000000104b0
- (id)attachmentsInDocument;	// IMP=0x00000000000102c3
- (id)attachmentForURL:(id)arg1;	// IMP=0x00000000000101fd
- (id)mimePartForURL:(id)arg1;	// IMP=0x000000000000fe89
- (void)dealloc;	// IMP=0x000000000000fddd
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;	// IMP=0x000000000000fda3
- (id)initWithMimePart:(id)arg1;	// IMP=0x000000000000fd60
- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;	// IMP=0x000000000000fcaf
- (id)initWithMimeBody:(id)arg1;	// IMP=0x000000000000fc39
- (id)init;	// IMP=0x000000000000fb1a

@end

