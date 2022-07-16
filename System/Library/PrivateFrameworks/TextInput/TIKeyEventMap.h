//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyEventMap : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000217b5
- (long long)candidateNumberKey:(int)arg1;	// IMP=0x00000000000217a6
- (id)inputEventForInputString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;	// IMP=0x000000000002179e
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;	// IMP=0x0000000000021788
- (unsigned long long)hash;	// IMP=0x000000000002176e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021744
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002173e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002170f

@end

