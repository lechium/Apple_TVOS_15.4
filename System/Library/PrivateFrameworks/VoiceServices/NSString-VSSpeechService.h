//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VSSpeechService)
+ (_Bool)vs_isCJKCharacter:(unsigned short)arg1;	// IMP=0x000000000001da83
+ (unsigned long long)_vs_countPhoneticSyllables_xsampa:(id)arg1;	// IMP=0x000000000001d150
+ (unsigned long long)_vs_countPhoneticSyllables_lhp:(id)arg1;	// IMP=0x000000000001d0c6
+ (id)vs_markerStringForContext:(id)arg1;	// IMP=0x000000000001c878
+ (id)vs_stringFrom4CC:(int)arg1;	// IMP=0x000000000002a401
- (id)vs_convertToSSML;	// IMP=0x000000000001dc2e
- (_Bool)vs_hasCJKCharacter;	// IMP=0x000000000001db9d
- (id)vs_removeSpeechTags;	// IMP=0x000000000001d97e
- (id)vs_removePhonetics;	// IMP=0x000000000001d7fc
- (unsigned long long)vs_countPhoneticSyllables;	// IMP=0x000000000001d1da
- (double)vs_measurePauses;	// IMP=0x000000000001cb40
- (id)vs_insertContextInfo:(id)arg1;	// IMP=0x000000000001cada
- (id)vs_substituteAudioWithLocalPath;	// IMP=0x000000000001c576
- (id)vs_textifyEmojiWithLanguage:(id)arg1;	// IMP=0x000000000001c47a
- (id)preinstalledAudioHashForLanguage:(id)arg1 name:(id)arg2;	// IMP=0x000000000002ead6
- (id)sha256hex;	// IMP=0x000000000002ea09
@end
