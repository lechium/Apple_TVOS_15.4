//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVLDocument, TVLLegacyJSContext, TVLXMLDocument;

@interface TVLJSDocumentUpdator : NSObject
{
    _Bool _isUsed;	// 8 = 0x8
    TVLLegacyJSContext *_context;	// 16 = 0x10
    TVLDocument *_feedDocument;	// 24 = 0x18
    TVLXMLDocument *_xmlDocument;	// 32 = 0x20
}

+ (id)documentUpdatorForContext:(struct OpaqueJSContext *)arg1 xmlDocument:(id)arg2;	// IMP=0x00000000000b2775
- (void).cxx_destruct;	// IMP=0x00000000000b2ef2
@property(nonatomic) _Bool isUsed; // @synthesize isUsed=_isUsed;
@property(retain, nonatomic) TVLXMLDocument *xmlDocument; // @synthesize xmlDocument=_xmlDocument;
@property(retain, nonatomic) TVLDocument *feedDocument; // @synthesize feedDocument=_feedDocument;
@property(retain, nonatomic) TVLLegacyJSContext *context; // @synthesize context=_context;
- (void)updateDocument;	// IMP=0x00000000000b2a92
- (id)initWithContext:(id)arg1 feedDocument:(id)arg2 xmlDocument:(id)arg3;	// IMP=0x00000000000b293b

@end
