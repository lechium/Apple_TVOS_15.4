//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AXSSKeyChordExtras)
+ (struct USet *)_japaneseLetterSet;	// IMP=0x0000000000027990
+ (struct USet *)_ideographSet;	// IMP=0x000000000002790c
+ (struct USet *)_characterSetWithPattern:(id)arg1;	// IMP=0x000000000002780a
- (id)axss_keyChordKeyDisplayValueForUSKeyboard:(_Bool)arg1;	// IMP=0x000000000000a090
- (id)axss_stringByTrimmingToLength:(unsigned long long)arg1 encoding:(unsigned long long)arg2;	// IMP=0x000000000002132c
- (_Bool)_isJapanesePhrase;	// IMP=0x0000000000027a4d
- (_Bool)_isOnlyIdeographs;	// IMP=0x0000000000027a14
@end

