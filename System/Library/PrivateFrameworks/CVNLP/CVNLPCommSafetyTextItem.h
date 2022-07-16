//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CVNLP/NSCopying-Protocol.h>
#import <CVNLP/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CVNLPCommSafetyTextItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_conversationIdentifier;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    long long _direction;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016ea0
- (void).cxx_destruct;	// IMP=0x0000000000016ef0
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016bd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016a00
- (unsigned long long)hash;	// IMP=0x0000000000016940
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016930
- (id)description;	// IMP=0x00000000000167c0
- (id)initWithConversationIdentifier:(id)arg1 date:(id)arg2 direction:(long long)arg3 text:(id)arg4;	// IMP=0x00000000000166c0

@end

