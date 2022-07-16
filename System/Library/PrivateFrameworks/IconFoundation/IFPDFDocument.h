//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IFPDFDocument : NSObject
{
    struct CGPDFDocument *_pdfDocument;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f82b
@property(readonly) NSURL *url; // @synthesize url=_url;
@property struct CGPDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (id)firstPage;	// IMP=0x000000000000f7ef
- (id)pageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000f78a
@property(readonly) unsigned long long numberOfPages;
- (void)dealloc;	// IMP=0x000000000000f73d
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000f6c6

@end

