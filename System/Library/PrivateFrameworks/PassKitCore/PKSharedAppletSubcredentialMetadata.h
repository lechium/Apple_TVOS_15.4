//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredentialMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _localDevice;	// 8 = 0x8
    _Bool _revoked;	// 9 = 0x9
    NSString *_recipientIdentifier;	// 16 = 0x10
    NSString *_recipientHandle;	// 24 = 0x18
    NSUUID *_sharingSessionIdentifier;	// 32 = 0x20
    NSString *_groupIdentifier;	// 40 = 0x28
    PKAppletSubcredentialEntitlement *_entitlement;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000319cf1
+ (id)metadataWithSharingRequest:(id)arg1 andInvitationReceipt:(id)arg2;	// IMP=0x0000000000319b60
- (void).cxx_destruct;	// IMP=0x000000000031a0e7
@property(retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSUUID *sharingSessionIdentifier; // @synthesize sharingSessionIdentifier=_sharingSessionIdentifier;
@property(nonatomic, getter=isRevoked) _Bool revoked; // @synthesize revoked=_revoked;
@property(copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(nonatomic, getter=isLocalDevice) _Bool localDevice; // @synthesize localDevice=_localDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000319f64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000319dd3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000319cf9
- (id)description;	// IMP=0x0000000000319c86

@end

