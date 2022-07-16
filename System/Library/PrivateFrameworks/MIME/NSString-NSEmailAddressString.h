//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)
+ (id)mf_partialSurnames;	// IMP=0x000000000000afa8
+ (id)mf_nameExtensions;	// IMP=0x000000000000ae97
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;	// IMP=0x00000000000091a5
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;	// IMP=0x00000000000175e2
- (id)mf_trimCommasSpacesQuotes;	// IMP=0x000000000000b0c9
- (_Bool)mf_appearsToBeAnInitial;	// IMP=0x000000000000b05a
- (void)__mf_firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;	// IMP=0x000000000000a715
- (_Bool)mf_hasSameNamesAs:(id)arg1;	// IMP=0x000000000000a4d1
- (id)mf_personNameComponents;	// IMP=0x000000000000a427
- (id)mf_addressCommentPersonNameComponents;	// IMP=0x000000000000a3d8
- (id)mf_stringByRemovingParentheticals;	// IMP=0x000000000000a157
- (id)mf_emailAddressesWithEquivalentDomains;	// IMP=0x0000000000009eb8
- (id)mf_copyIDNAEncodedEmailAddress;	// IMP=0x0000000000009e84
- (id)mf_copyIDNADecodedEmailAddress;	// IMP=0x0000000000009e50
- (_Bool)mf_isEqualToAddress:(id)arg1;	// IMP=0x0000000000009e37
- (id)mf_addressDomain;	// IMP=0x0000000000009db5
- (struct _NSRange)mf_rangeOfAddressDomain;	// IMP=0x0000000000009a51
- (_Bool)mf_isLegalEmailAddress;	// IMP=0x0000000000009405
- (_Bool)mf_isLegalCommentedEmailAddress;	// IMP=0x00000000000093da
- (id)mf_copyAddressComment;	// IMP=0x000000000000919b
- (id)mf_addressComment;	// IMP=0x00000000000090d6
- (id)mf_uncommentedAddressRespectingGroups;	// IMP=0x0000000000008ca2
- (id)mf_uncommentedAddress;	// IMP=0x0000000000008c88
- (id)mf_copyUncommentedAddress;	// IMP=0x000000000000886c
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;	// IMP=0x000000000000c95f
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;	// IMP=0x000000000000c5a4
- (id)_mf_bestMimeCharset:(id)arg1;	// IMP=0x000000000000c3d6
- (id)mf_bestMimeCharset;	// IMP=0x000000000000c3bf
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;	// IMP=0x000000000000e3d4
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;	// IMP=0x000000000000dd8d
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;	// IMP=0x000000000000d0b2
- (id)mf_copyStringByEncodingIDNA;	// IMP=0x0000000000018100
- (id)mf_copyStringByDecodingIDNA;	// IMP=0x00000000000180cd
- (id)mf_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x000000000001802d
- (id)mf_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;	// IMP=0x0000000000017cfe
- (id)mf_messageIDSubstring;	// IMP=0x0000000000017c69
- (id)mf_SHA1Digest;	// IMP=0x0000000000017bc0
- (id)mf_MD5Digest;	// IMP=0x0000000000017b19
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;	// IMP=0x000000000001791d
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000017909
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;	// IMP=0x00000000000177ba
- (const void *)mf_lossyDefaultCStringBytes;	// IMP=0x0000000000017625
@end
