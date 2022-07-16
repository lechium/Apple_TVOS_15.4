//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (PKAdditions)
+ (id)pk_stringWithInteger:(unsigned long long)arg1;	// IMP=0x00000000001a5713
- (id)pk_decodeURLBase64;	// IMP=0x00000000001a5656
- (id)pk_decodeHexadecimal;	// IMP=0x00000000001a5556
- (double)pk_normalizedLevenshteinDistanceFromString:(id)arg1 decimalPlaces:(unsigned long long)arg2;	// IMP=0x00000000001a5406
- (id)pk_uppercaseAttributedString;	// IMP=0x00000000001a539d
- (id)pk_uppercaseFirstStringForLocale:(id)arg1;	// IMP=0x00000000001a528a
- (id)pk_uppercaseFirstStringForPreferredLocale;	// IMP=0x00000000001a5224
- (id)pk_capitalizedStringForPreferredLocale;	// IMP=0x00000000001a51be
- (id)pk_lowercaseStringForPreferredLocale;	// IMP=0x00000000001a5158
- (id)pk_uppercaseStringForPreferredLocale;	// IMP=0x00000000001a50f2
- (id)pk_zString;	// IMP=0x00000000001a50ce
@end

