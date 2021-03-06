//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber, NSDictionary, NSString, PKPassLibrary;

@interface PKPurchaseNewActionItem : NSObject <NSSecureCoding, NSCopying>
{
    PKPassLibrary *_sharedLibrary;	// 8 = 0x8
    _Bool _serviceProviderDataRequiresAppletData;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSDecimalNumber *_amount;	// 40 = 0x28
    NSString *_currency;	// 48 = 0x30
    NSDate *_newExpirationDate;	// 56 = 0x38
    NSDictionary *_serviceProviderData;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ddbb6
- (void).cxx_destruct;	// IMP=0x00000000003de0bc
@property(readonly, nonatomic) _Bool serviceProviderDataRequiresAppletData; // @synthesize serviceProviderDataRequiresAppletData=_serviceProviderDataRequiresAppletData;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(readonly, copy, nonatomic) NSDate *newExpirationDate; // @synthesize newExpirationDate=_newExpirationDate;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ddf70
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003dde9a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ddbbe
- (id)serviceProviderDataWithItemForPass:(id)arg1;	// IMP=0x00000000003dd98f
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;	// IMP=0x00000000003dd93f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003dd720
- (id)init;	// IMP=0x00000000003dd712

@end

