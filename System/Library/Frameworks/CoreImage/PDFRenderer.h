//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PDFRenderer
{
    struct __CFDictionary *info;	// 40 = 0x28
    struct __CFData *data;	// 48 = 0x30
    struct CGDataConsumer *dataConsumer;	// 56 = 0x38
}

- (const struct __CFData *)pdfdata;	// IMP=0x00000000000a7d68
- (void)flushRender;	// IMP=0x00000000000a7d47
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000a7bd2
- (void)setFileTitle:(id)arg1;	// IMP=0x00000000000a7bab
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000a7b11
- (void)dealloc;	// IMP=0x00000000000a7aa6
- (id)init;	// IMP=0x00000000000a7a2e

@end
