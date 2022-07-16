//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerProductInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding>
{
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 8 = 0x8
    NSString *_productCategory;	// 16 = 0x10
    NSString *_detailedProductCategory;	// 24 = 0x18
    NSString *_vendorName;	// 32 = 0x20
    NSString *_anonymizedIdentifier;	// 40 = 0x28
    NSNumber *_attachedToDevice;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000594a3
- (void).cxx_destruct;	// IMP=0x0000000000059971
@property(copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice; // @synthesize attachedToDevice=_attachedToDevice;
@property(copy, nonatomic) NSString *anonymizedIdentifier; // @synthesize anonymizedIdentifier=_anonymizedIdentifier;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *detailedProductCategory; // @synthesize detailedProductCategory=_detailedProductCategory;
@property(copy, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;	// IMP=0x00000000000598e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059764
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000595b0
- (id)init;	// IMP=0x0000000000059556
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000594e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
