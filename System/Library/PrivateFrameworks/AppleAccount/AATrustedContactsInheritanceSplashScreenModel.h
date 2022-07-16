//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAOBBulletedWelcomeControllerModelProtocol-Protocol.h>

@class AACustodianshipInfo, NSString;

@interface AATrustedContactsInheritanceSplashScreenModel : NSObject <AAOBBulletedWelcomeControllerModelProtocol>
{
    NSString *_detailText;	// 8 = 0x8
    NSString *_helpLinkTitle;	// 16 = 0x10
    NSString *_helpLinkURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003d8fa
@property(copy, nonatomic) NSString *helpLinkURL; // @synthesize helpLinkURL=_helpLinkURL;
@property(copy, nonatomic) NSString *helpLinkTitle; // @synthesize helpLinkTitle=_helpLinkTitle;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (id)_thirdBulletPointTitle;	// IMP=0x000000000003d89e
- (id)_thirdBulletPointSymbolName;	// IMP=0x000000000003d891
- (id)_thirdBulletPointDescription;	// IMP=0x000000000003d880
- (id)_secondBulletPointTitle;	// IMP=0x000000000003d86f
- (id)_secondBulletPointSymbolName;	// IMP=0x000000000003d862
- (id)_secondBulletPointDescription;	// IMP=0x000000000003d851
- (id)_firstBulletPointTitle;	// IMP=0x000000000003d840
- (id)_firstBulletPointSymbolName;	// IMP=0x000000000003d833
- (id)_firstBulletPointDescription;	// IMP=0x000000000003d822
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *primaryButton;
@property(copy, nonatomic) NSString *secondaryButton;
- (id)bullets;	// IMP=0x000000000003d529

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
