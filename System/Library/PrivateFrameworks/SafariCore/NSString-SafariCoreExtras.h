//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSData;

@interface NSString (SafariCoreExtras)
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000025ce0
+ (id)safari_stringAsHexWithData:(id)arg1;	// IMP=0x0000000000025c4d
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000253c0
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForUserTypedStringWhenAddingPasswordInPasswordManager;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForPasswordManager;
- (id)safari_bundleIdentifierFromApplicationIdentifier:(id *)arg1;	// IMP=0x000000000002804d
- (unsigned long long)safari_numberOfComposedCharacters;	// IMP=0x0000000000027f50
- (_Bool)safari_looksLikeWillRedirectToURLStringAfterLogin:(id)arg1;	// IMP=0x0000000000027b26
@property(readonly, copy, nonatomic) NSString *safari_suggestedFilenameFromTitleString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwAndWildcardDotPrefixes;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwDotPrefix;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;	// IMP=0x000000000002786f
@property(readonly, copy, nonatomic) NSString *safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;	// IMP=0x000000000002767b
@property(readonly, copy, nonatomic) NSString *safari_stringByRedactingBookmarkDAVServerID;
@property(readonly, nonatomic) _Bool safari_looksLikeEmailAddress;
@property(readonly, nonatomic) _Bool safari_looksLikeIPAddress;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;	// IMP=0x00000000000273f1
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;	// IMP=0x00000000000272fd
- (_Bool)safari_containsAllCharactersInString:(id)arg1;	// IMP=0x00000000000271f8
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;	// IMP=0x0000000000027148
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;	// IMP=0x0000000000027129
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property(readonly, copy, nonatomic) NSString *safari_stringByNormalizingVersionString;
@property(readonly, copy, nonatomic) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
@property(readonly, nonatomic) _Bool safari_containsPeriodOrHomoglyphForPeriod;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0000000000026cbc
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x0000000000026c93
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;	// IMP=0x0000000000026af0
- (_Bool)_safari_hasLocalizedPrefix:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000000026a0e
- (_Bool)safari_hasLocalizedCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x00000000000269f6
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;	// IMP=0x00000000000269de
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;	// IMP=0x0000000000026970
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x0000000000026902
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;	// IMP=0x000000000002689e
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x000000000002683a
- (_Bool)safari_isHostOrSubdomainOfHost:(id)arg1;	// IMP=0x0000000000026791
- (_Bool)safari_hasPrefix:(id)arg1;	// IMP=0x0000000000026736
@property(readonly, copy, nonatomic) NSString *safari_separateResourceForkPath;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedSiteNameForCredentialLookup;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;	// IMP=0x0000000000025d8b
@property(readonly, nonatomic) NSData *safari_base64DecodedData;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHost;
@property(readonly, copy, nonatomic) NSString *safari_filenameByFixingIllegalCharacters;
@property(readonly, nonatomic) _Bool safari_containsInteriorWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_stringByTrimmingWhitespace;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x0000000000025641
@end

