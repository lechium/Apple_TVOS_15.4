//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// IMP=0x000000000000338e
+ (id)randomString;	// IMP=0x0000000000003324
+ (id)copyStringGUIDForObject:(id)arg1;	// IMP=0x0000000000003312
+ (id)stringGUIDForObject:(id)arg1;	// IMP=0x00000000000032f8
+ (id)stringGUID;	// IMP=0x00000000000032de
+ (id)copyStringGUID;	// IMP=0x0000000000003277
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;	// IMP=0x0000000000004d2f
- (id)stringByRemovingCharactersFromSet:(id)arg1;	// IMP=0x0000000000004c00
- (id)stringWithLTREmbedding;	// IMP=0x0000000000004bdb
- (id)pathStringForDisplay;	// IMP=0x0000000000004b36
- (id)__stringByStrippingAttachmentAndControlCharacters;	// IMP=0x0000000000004ac4
- (id)__stringByStrippingControlCharacters;	// IMP=0x0000000000004a23
- (id)uniqueSavePath;	// IMP=0x0000000000004929
- (id)stringByRemovingWhitespace;	// IMP=0x00000000000048c3
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;	// IMP=0x0000000000004848
- (id)stringByResolvingAndStandardizingPath;	// IMP=0x0000000000004720
- (_Bool)_appearsToBeHardwareID;	// IMP=0x0000000000004707
- (_Bool)_appearsToBePseudonymID;	// IMP=0x00000000000046ee
- (_Bool)_appearsToBeTemporaryID;	// IMP=0x00000000000046d5
- (_Bool)_appearsToBeBusinessID;	// IMP=0x0000000000004669
- (_Bool)_appearsToBeDSID;	// IMP=0x000000000000460f
- (_Bool)_appearsToBePhoneNumber;	// IMP=0x0000000000004605
- (id)_md5Hash;	// IMP=0x000000000000436b
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;	// IMP=0x000000000000421e
- (_Bool)_appearsToBeEmail;	// IMP=0x0000000000004214
- (id)_IDFromFZIDType:(long long)arg1;	// IMP=0x0000000000004172
- (id)_URIFromFZIDType:(long long)arg1;	// IMP=0x0000000000004137
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;	// IMP=0x00000000000040fc
- (long long)_FZBestGuessFZIDType;	// IMP=0x0000000000004027
- (id)_im_normalizedURIString;	// IMP=0x0000000000003fc8
- (id)_bestGuessURIFromCanicalizedID;	// IMP=0x0000000000003f97
- (id)_URIFromCanonicalizedHardwareID;	// IMP=0x0000000000003f85
- (id)_URIFromCanonicalizedPseudonymID;	// IMP=0x0000000000003f73
- (id)_URIFromCanonicalizedTemporaryID;	// IMP=0x0000000000003f61
- (id)_URIFromCanonicalizedBusinessID;	// IMP=0x0000000000003f4f
- (id)_URIFromCanonicalizedDSID;	// IMP=0x0000000000003f33
- (id)_URIFromCanonicalizedPhoneNumber;	// IMP=0x0000000000003f17
- (id)_URIFromCanonicalizedEmail;	// IMP=0x0000000000003efb
- (id)_bestGuessURI;	// IMP=0x0000000000003eca
- (id)_URIFromHardwareID;	// IMP=0x0000000000003e71
- (id)_URIFromPseudonymID;	// IMP=0x0000000000003e18
- (id)_URIFromTemporaryID;	// IMP=0x0000000000003dbf
- (id)_URIFromBusinessID;	// IMP=0x0000000000003cf5
- (id)_URIFromDSID;	// IMP=0x0000000000003c5e
- (id)_URIFromPhoneNumber;	// IMP=0x0000000000003bff
- (id)_URIFromEmail;	// IMP=0x0000000000003b93
- (long long)_FZIDType;	// IMP=0x00000000000039ec
- (id)_FZIDFromPhoneNumber;	// IMP=0x000000000000398d
- (id)_FZIDFromEmail;	// IMP=0x0000000000003968
- (id)_stripFZIDPrefix;	// IMP=0x0000000000003888
- (id)urlFromString;	// IMP=0x0000000000003745
- (id)stringByAddingURLEscapes;	// IMP=0x00000000000036df
- (id)stringByRemovingURLEscapes;	// IMP=0x00000000000036b3
- (id)trimmedString;	// IMP=0x0000000000003687
- (long long)localizedCompareToString:(id)arg1;	// IMP=0x00000000000035ed
- (unsigned int)unsignedIntValue;	// IMP=0x00000000000035a9
- (unsigned int)hexValue;	// IMP=0x00000000000034b7
- (_Bool)isDirectory;	// IMP=0x000000000000344e
- (_Bool)isEqualToIgnoringCase:(id)arg1;	// IMP=0x000000000000342d
- (id)_imInitWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x000000000001156f
@property(readonly, nonatomic) NSString *stripMobileMSuffixIfPresent;
@property(readonly, nonatomic) _Bool hasMobileMeSuffix;
@property(readonly, nonatomic) NSString *mobileMeDomain;
@end

