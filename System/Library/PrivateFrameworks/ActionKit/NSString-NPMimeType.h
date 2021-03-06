//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ActionKit/WFSystemShareableObject-Protocol.h>

@interface NSString (NPMimeType) <WFSystemShareableObject>
+ (id)uniqueString;	// IMP=0x00000000002f19f0
+ (id)stringWithData:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x00000000002f19b5
- (id)mimeType;	// IMP=0x000000000018d6af
- (id)stringByStrippingTags;	// IMP=0x00000000001f8327
- (id)stringByLinkifyingURLs;	// IMP=0x00000000001f825b
- (id)stringByRemovingNewLinesAndWhitespace;	// IMP=0x00000000001f804e
- (id)stringWithNewLinesAsBRs;	// IMP=0x00000000001f7d97
- (id)stringByEncodingHTMLEntities:(_Bool)arg1;	// IMP=0x00000000001f7d24
- (id)stringByEncodingHTMLEntities;	// IMP=0x00000000001f7cc1
- (id)stringByDecodingHTMLEntities;	// IMP=0x00000000001f7c5e
- (id)stringByConvertingHTMLToPlainText;	// IMP=0x00000000001f76ed
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3;	// IMP=0x00000000002b0298
- (id)en_scrubUsingRegex:(id)arg1 withMinLength:(unsigned short)arg2 maxLength:(unsigned short)arg3 invalidCharacterReplacement:(id)arg4;	// IMP=0x00000000002affe1
- (id)pcen;	// IMP=0x00000000002d518a
- (id)stringByUnescapingCrititcalXMLEntities;	// IMP=0x00000000002ea067
- (id)stringByEscapingCriticalXMLEntities;	// IMP=0x00000000002e9efb
- (id)IFUnicodeURL_splitBeforeCharactersInSet:(id)arg1;	// IMP=0x00000000002eb345
- (id)IFUnicodeURL_splitAfterString:(id)arg1;	// IMP=0x00000000002eb2b8
- (id)en_stringByUrlDecoding;	// IMP=0x000000000034b5c7
- (id)en_stringByUrlEncoding;	// IMP=0x000000000034b593
- (id)ik_URLEncodedString;	// IMP=0x0000000000357740
- (_Bool)enIsEqualToStringWithEmptyEqualToNull:(id)arg1;	// IMP=0x00000000003630e5
- (_Bool)enIsEqualToStringOrNil:(id)arg1;	// IMP=0x00000000003630b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

