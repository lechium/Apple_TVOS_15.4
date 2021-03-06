//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentMessage : NSObject <NSSecureCoding>
{
    _Bool _allowDeepLink;	// 8 = 0x8
    _Bool _hasAssociatedPaymentApplication;	// 9 = 0x9
    _Bool _archived;	// 10 = 0xa
    NSString *_identifier;	// 16 = 0x10
    NSString *_serviceIdentifier;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    NSDate *_messageDate;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
    unsigned long long _messageType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ac763
+ (id)paymentMessageWithDictionary:(id)arg1;	// IMP=0x00000000001ac237
- (void).cxx_destruct;	// IMP=0x00000000001acb95
@property(nonatomic, getter=isArchived) _Bool archived; // @synthesize archived=_archived;
@property(nonatomic) _Bool hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) _Bool allowDeepLink; // @synthesize allowDeepLink=_allowDeepLink;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *messageDate; // @synthesize messageDate=_messageDate;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool archiveOnNextTransaction;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ac936
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ac76b
- (id)description;	// IMP=0x00000000001ac6a6
- (_Bool)isEqualToPaymentMessage:(id)arg1;	// IMP=0x00000000001ac601
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ac599
- (unsigned long long)hash;	// IMP=0x00000000001ac4bd
- (id)init;	// IMP=0x00000000001ac429

@end

