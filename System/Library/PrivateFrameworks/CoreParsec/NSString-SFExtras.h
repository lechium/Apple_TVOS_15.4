//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SFExtras)
+ (void)_parsec_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a111
+ (id)parsec_stringByBase64EncodingData:(id)arg1;	// IMP=0x000000000009a0fa
- (int)sf_asColumnAlignment;	// IMP=0x000000000002e4f2
- (int)sf_asImageAlignment;	// IMP=0x000000000002e451
- (int)sf_asButtonAlignment;	// IMP=0x000000000002e3ad
- (int)sf_asTextAlignment;	// IMP=0x000000000002e349
- (int)sf_asResultPlacement;	// IMP=0x000000000002e2e1
- (int)sf_cardSectionType;	// IMP=0x000000000002dffe
- (id)_parsec_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x0000000000099e5d
- (id)_parsec_highLevelDomainFromHost;	// IMP=0x0000000000099dbc
- (id)parsec_readableURLStringAfterRemovingSubdomains;	// IMP=0x0000000000099b7d
- (_Bool)parsec_caseInsensitiveContainsString:(id)arg1;	// IMP=0x0000000000099b4d
- (id)parsec_base64DecodedData;	// IMP=0x0000000000099b15
- (_Bool)parsec_hasLocalizedCaseInsensitivePrefix:(id)arg1;	// IMP=0x0000000000099a61
- (_Bool)parsec_hasCaseInsensitiveSuffix:(id)arg1;	// IMP=0x0000000000099a31
- (_Bool)parsec_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x0000000000099a01
- (_Bool)parsec_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x00000000000999db
- (_Bool)parsec_hasPrefix:(id)arg1;	// IMP=0x00000000000999c0
@end
