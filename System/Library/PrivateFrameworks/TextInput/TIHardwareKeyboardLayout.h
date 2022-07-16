//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIHardwareKeyboardLayout <NSSecureCoding>
{
    long long _keyboardType;	// 8 = 0x8
}

+ (void)flushLayoutCaches;	// IMP=0x0000000000023fa6
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023f9e
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (id)_JISFrames;	// IMP=0x0000000000023f7b
- (id)_ISOFrames;	// IMP=0x0000000000023f69
- (id)_ANSIFrames;	// IMP=0x0000000000023a06
- (struct CGRect)_frameForKeyCode:(unsigned long long)arg1;	// IMP=0x0000000000023916
- (void)addExactString:(id)arg1 forKeyCode:(unsigned long long)arg2;	// IMP=0x0000000000023889
- (void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2;	// IMP=0x00000000000237fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002376e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000236f1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023677
- (id)initWithKeyboardType:(long long)arg1;	// IMP=0x000000000002362e

@end

