//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TIKeyEventMap_zh_Hant_Zhuyin
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021e21
+ (id)sharedInstance;	// IMP=0x0000000000021dbe
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;	// IMP=0x0000000000021cca
- (_Bool)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1;	// IMP=0x0000000000021b59
- (_Bool)shouldInsertZhuyinCharacterAfter:(id)arg1;	// IMP=0x0000000000021b44
- (id)punctuationMap;	// IMP=0x0000000000021b2a

@end

