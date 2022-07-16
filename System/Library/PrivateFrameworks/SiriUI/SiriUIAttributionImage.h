//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, NSURL, SAUIAppPunchOut;

@interface SiriUIAttributionImage : NSObject
{
    NSString *_localResourceName;	// 8 = 0x8
    NSString *_localPressedResourceName;	// 16 = 0x10
    SAUIAppPunchOut *_localPunchOut;	// 24 = 0x18
    NSBundle *_localResourceBundle;	// 32 = 0x20
    NSURL *_remoteURL;	// 40 = 0x28
    NSURL *_remotePressedURL;	// 48 = 0x30
    SAUIAppPunchOut *_remotePunchOut;	// 56 = 0x38
    double _remoteScale;	// 64 = 0x40
    double _remotePressedScale;	// 72 = 0x48
    struct CGSize _logoSize;	// 80 = 0x50
}

+ (id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;	// IMP=0x000000000001e32a
+ (id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;	// IMP=0x000000000001e244
+ (id)attributionImageFromImageResource:(id)arg1;	// IMP=0x000000000001e11f
+ (id)attributionImageFromAppPunchOut:(id)arg1;	// IMP=0x000000000001e0ca
- (void).cxx_destruct;	// IMP=0x000000000001ef81
@property(nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
@property(nonatomic) double remotePressedScale; // @synthesize remotePressedScale=_remotePressedScale;
@property(nonatomic) double remoteScale; // @synthesize remoteScale=_remoteScale;
@property(retain, nonatomic) SAUIAppPunchOut *remotePunchOut; // @synthesize remotePunchOut=_remotePunchOut;
@property(copy, nonatomic) NSURL *remotePressedURL; // @synthesize remotePressedURL=_remotePressedURL;
@property(copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain, nonatomic) NSBundle *localResourceBundle; // @synthesize localResourceBundle=_localResourceBundle;
@property(retain, nonatomic) SAUIAppPunchOut *localPunchOut; // @synthesize localPunchOut=_localPunchOut;
@property(copy, nonatomic) NSString *localPressedResourceName; // @synthesize localPressedResourceName=_localPressedResourceName;
@property(copy, nonatomic) NSString *localResourceName; // @synthesize localResourceName=_localResourceName;
- (void)_fetchRemoteResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e9b0
- (id)_imageInLocalResourceBundleNamed:(id)arg1;	// IMP=0x000000000001e923
- (void)_fetchLocalResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e804
- (void)getLogoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e5ed

@end
