//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAOBWelcomeControllerModelProtocol-Protocol.h>

@class AACustodianshipInfo, NSString;

@interface AAOBInheritanceContactPickerModel : NSObject <AAOBWelcomeControllerModelProtocol>
{
    NSString *_imageName;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_detailText;	// 24 = 0x18
    NSString *_primaryButton;	// 32 = 0x20
    NSString *_secondaryButton;	// 40 = 0x28
    NSString *_helpLinkTitle;	// 48 = 0x30
    NSString *_helpLinkURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000073b81
@property(copy, nonatomic) NSString *helpLinkURL; // @synthesize helpLinkURL=_helpLinkURL;
@property(copy, nonatomic) NSString *helpLinkTitle; // @synthesize helpLinkTitle=_helpLinkTitle;
@property(copy, nonatomic) NSString *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(copy, nonatomic) NSString *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)init;	// IMP=0x0000000000073a25

// Remaining properties
@property(copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *leftBarButton;
@property(copy, nonatomic) NSString *ownerHandle;
@property(copy, nonatomic) NSString *recipientHandle;
@property(readonly) Class superclass;

@end

