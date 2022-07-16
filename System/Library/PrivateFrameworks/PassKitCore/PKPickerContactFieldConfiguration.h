//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKPickerContactFieldConfiguration <NSSecureCoding>
{
    NSArray *_pickerItems;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000181e21
- (void).cxx_destruct;	// IMP=0x0000000000181ffa
@property(readonly, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000181ea6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000181e29
- (id)description;	// IMP=0x0000000000181d70
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000181af2

@end
