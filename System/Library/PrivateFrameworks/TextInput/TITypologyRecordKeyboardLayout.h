//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TIKeyboardLayout;

@interface TITypologyRecordKeyboardLayout
{
    TIKeyboardLayout *_keyboardLayout;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007687
- (void).cxx_destruct;	// IMP=0x0000000000007656
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TIKeyboardLayout *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
- (id)shortDescription;	// IMP=0x0000000000007602
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007563
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000748a

@end

