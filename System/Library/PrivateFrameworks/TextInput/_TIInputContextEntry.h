//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_text;	// 8 = 0x8
    NSString *_senderIdentifier;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000504d1
- (void).cxx_destruct;	// IMP=0x000000000005049e
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *senderIdentifier; // @synthesize senderIdentifier=_senderIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;	// IMP=0x00000000000503af
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000050085
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ffe6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004fed6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004fe53

@end

