//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSTextAttributeStorage
{
}

- (void)enumerateAttributesFromLocation:(id)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000089e2
- (_Bool)setAttributes:(id)arg1 forTextRange:(id)arg2;	// IMP=0x00000000000089ca
- (_Bool)_setAttributes:(id)arg1 forTextRange:(id)arg2 checkForChange:(_Bool)arg3;	// IMP=0x0000000000008901
- (_Bool)_attributesInTextRange:(id)arg1 areEqualToAttributes:(id)arg2;	// IMP=0x000000000000866a
- (_Bool)removeAttribute:(id)arg1 forTextRange:(id)arg2;	// IMP=0x0000000000008653
- (_Bool)addAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x0000000000008641
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x0000000000007e30

@end

