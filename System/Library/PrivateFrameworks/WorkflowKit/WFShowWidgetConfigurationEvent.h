//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFShowWidgetConfigurationEvent
{
    NSString *_key;	// 8 = 0x8
    NSString *_appBundleIdentifier;	// 16 = 0x10
    NSString *_intentType;	// 24 = 0x18
    NSString *_sizeClass;	// 32 = 0x20
}

+ (Class)codableEventClass;	// IMP=0x00000000001b48f9
- (void).cxx_destruct;	// IMP=0x00000000001b48a6
@property(copy, nonatomic) NSString *sizeClass; // @synthesize sizeClass=_sizeClass;
@property(copy, nonatomic) NSString *intentType; // @synthesize intentType=_intentType;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3;	// IMP=0x00000000001b4714

@end

