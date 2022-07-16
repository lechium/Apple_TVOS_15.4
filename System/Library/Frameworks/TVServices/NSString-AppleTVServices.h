//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AppleTVServices)
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x000000000004bd12
+ (id)tvs_uppercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004bcfd
+ (id)tvs_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004bce5
+ (id)tvs_stringWithNumber:(id)arg1;	// IMP=0x000000000004a98a
- (id)tvs_adamIDStringFromBuyParams;	// IMP=0x000000000004bf08
- (id)tvs_flatImageURLString;	// IMP=0x000000000004be01
- (unsigned long long)tvs_threePartVersionCompare:(id)arg1;	// IMP=0x000000000004ba3a
- (id)tvs_dataFromHexString;	// IMP=0x000000000004b94c
- (unsigned long long)tvs_hexValue;	// IMP=0x000000000004b895
- (id)tvs_stringByDecodingFriendlyHTMLCodes;	// IMP=0x000000000004b206
- (id)tvs_componentCharacters;	// IMP=0x000000000004b12e
- (id)tvs_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x000000000004af37
- (id)tvs_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x000000000004ae0a
- (id)tvs_subStringAfter:(unsigned long long)arg1;	// IMP=0x000000000004adc7
- (id)tvs_subStringBefore:(unsigned long long)arg1;	// IMP=0x000000000004adb0
- (_Bool)tvs_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x000000000004ad49
- (id)tvs_SHA256String;	// IMP=0x000000000004ac89
- (id)tvs_SHA1String;	// IMP=0x000000000004abc7
- (id)tvs_MD5String;	// IMP=0x000000000004ab07
- (id)tvs_filenameSafeString;	// IMP=0x000000000004aa2d
- (unsigned long long)tvs_unsignedLongLongValue;	// IMP=0x000000000004aa07
@end
