//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, TVLXMLElement;

@interface TVLXMLDocument
{
}

- (_Bool)adoptNode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000065e61
- (id)makeDocumentFragmentWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000065b50
- (id)makeDocumentFragment;	// IMP=0x0000000000065b3a
- (id)makeElementNamed:(id)arg1;	// IMP=0x00000000000659f9
@property(readonly, nonatomic) NSData *XMLData;
- (void)setDOMRootElement:(id)arg1;	// IMP=0x00000000000656b5
@property(retain, nonatomic) TVLXMLElement *rootElement;
- (void)dealloc;	// IMP=0x00000000000654ef
- (id)initWithRootElement:(id)arg1;	// IMP=0x000000000006530a
- (id)init;	// IMP=0x00000000000652dc
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000064f75
- (id)requiredURLs;	// IMP=0x00000000000836b0
- (id)elementById:(id)arg1;	// IMP=0x00000000000b9761

@end

