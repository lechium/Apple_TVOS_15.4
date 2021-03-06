//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAOBWelcomeControllerModelProtocol-Protocol.h>
#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class AACustodianshipInfo, NSString;

@interface AAOBCustodianInvitationModel : NSObject <AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding>
{
    NSString *_imageName;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_detailText;	// 24 = 0x18
    NSString *_primaryButton;	// 32 = 0x20
    NSString *_secondaryButton;	// 40 = 0x28
    NSString *_helpLinkTitle;	// 48 = 0x30
    NSString *_helpLinkURL;	// 56 = 0x38
    NSString *_ownerHandle;	// 64 = 0x40
    NSString *_recipientHandle;	// 72 = 0x48
    AACustodianshipInfo *_custodianshipInfo;	// 80 = 0x50
    long long _type;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ba83
- (void).cxx_destruct;	// IMP=0x000000000000bd2c
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) AACustodianshipInfo *custodianshipInfo; // @synthesize custodianshipInfo=_custodianshipInfo;
@property(copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(copy, nonatomic) NSString *ownerHandle; // @synthesize ownerHandle=_ownerHandle;
@property(copy, nonatomic) NSString *helpLinkURL; // @synthesize helpLinkURL=_helpLinkURL;
@property(copy, nonatomic) NSString *helpLinkTitle; // @synthesize helpLinkTitle=_helpLinkTitle;
@property(copy, nonatomic) NSString *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(copy, nonatomic) NSString *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b96a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b6de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b5ac
- (id)detailsTextWithFirstName:(id)arg1 fullName:(id)arg2;	// IMP=0x000000000000b48c
- (id)initWithCustodianshipInfo:(id)arg1;	// IMP=0x000000000000b1b0
- (id)initWithType:(long long)arg1 ownerHandle:(id)arg2;	// IMP=0x000000000000ae00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *leftBarButton;
@property(readonly) Class superclass;

@end

