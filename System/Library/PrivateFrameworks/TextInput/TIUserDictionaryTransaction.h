//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    TIUserDictionaryEntryValue *_valueToDelete;	// 8 = 0x8
    TIUserDictionaryEntryValue *_valueToInsert;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005bfe1
- (void).cxx_destruct;	// IMP=0x000000000005bfb9
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToInsert; // @synthesize valueToInsert=_valueToInsert;
@property(retain, nonatomic) TIUserDictionaryEntryValue *valueToDelete; // @synthesize valueToDelete=_valueToDelete;
- (id)description;	// IMP=0x000000000005bed9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005be76
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005bd9c

@end

