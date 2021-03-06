//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>

@class NSArray, NSString;

@interface WFDevice : NSObject <WFNaming>
{
    NSArray *_capabilities;	// 8 = 0x8
}

+ (id)systemShortcutsUserDefaults;	// IMP=0x000000000002cb7e
+ (_Bool)deviceIsGreenTea;	// IMP=0x000000000002cb76
+ (id)currentDevice;	// IMP=0x000000000002cb13
- (void).cxx_destruct;	// IMP=0x000000000002cb03
- (id)description;	// IMP=0x000000000002ca03
- (id)_deviceInfoForKey:(struct __CFString *)arg1;	// IMP=0x000000000002c9ec
@property(readonly, nonatomic) NSString *symbolName;
@property(readonly, nonatomic) NSString *localStorageDisplayName;
@property(readonly, nonatomic) _Bool isChineseRegionCelluarDevice;
@property(readonly, nonatomic) long long chipID;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *marketingName;
@property(readonly, nonatomic) NSString *localizedWiFiDisplayName;
- (_Bool)hasCapability:(id)arg1;	// IMP=0x000000000002c782
@property(readonly, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) double screenCornerRadius;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) struct CGRect screenBounds;
@property(readonly, copy, nonatomic) NSString *wfName;

@end

