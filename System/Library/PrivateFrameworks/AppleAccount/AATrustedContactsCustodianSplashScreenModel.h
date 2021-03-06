//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAOBBulletedWelcomeControllerModelProtocol-Protocol.h>

@class AACustodianshipInfo, NSString;

@interface AATrustedContactsCustodianSplashScreenModel : NSObject <AAOBBulletedWelcomeControllerModelProtocol>
{
    NSString *_detailText;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004929b
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *helpLinkURL;
@property(copy, nonatomic) NSString *helpLinkTitle;
- (id)_thirdBulletPointTitle;	// IMP=0x0000000000049261
- (id)_thirdBulletPointSymbolName;	// IMP=0x0000000000049254
- (id)_thirdBulletPointDescription;	// IMP=0x0000000000049243
- (id)_secondBulletPointTitle;	// IMP=0x0000000000049232
- (id)_secondBulletPointSymbolName;	// IMP=0x0000000000049225
- (id)_secondBulletPointDescription;	// IMP=0x0000000000049214
- (id)_firstBulletPointTitle;	// IMP=0x0000000000049203
- (id)_firstBulletPointSymbolName;	// IMP=0x00000000000491f6
- (id)_firstBulletPointDescription;	// IMP=0x00000000000490bc
@property(copy, nonatomic) NSString *imageName;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *primaryButton;
@property(copy, nonatomic) NSString *secondaryButton;
- (id)bullets;	// IMP=0x0000000000048dc3

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

