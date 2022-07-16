//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString;

@interface INAppInfo : NSObject <NSSecureCoding>
{
    _Bool _supportsMultiwindow;	// 8 = 0x8
    NSString *_applicationIdentifier;	// 16 = 0x10
    NSArray *_counterpartIdentifiers;	// 24 = 0x18
    NSString *_developmentRegion;	// 32 = 0x20
    NSSet *_supportedActions;	// 40 = 0x28
    NSSet *_supportedIntents;	// 48 = 0x30
    NSSet *_supportedIntentsByApp;	// 56 = 0x38
    NSSet *_supportedActionsByExtensions;	// 64 = 0x40
    NSSet *_actionsRestrictedWhileLocked;	// 72 = 0x48
    NSSet *_actionsRestrictedWhileProtectedDataUnavailable;	// 80 = 0x50
    NSSet *_supportedMediaCategories;	// 88 = 0x58
    NSSet *_definedIntents;	// 96 = 0x60
    NSDictionary *_supportedIntentsGroupedByExtensionPoints;	// 104 = 0x68
    NSString *_companionApplicationIdentifier;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005265c
+ (id)_appInfoWithApplicationRecord:(id)arg1 applicationExtensionRecords:(id)arg2 userActivityTypes:(id)arg3;	// IMP=0x0000000000051d1d
+ (id)appInfoWithIntent:(id)arg1;	// IMP=0x00000000000519ae
+ (id)appInfoWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000051945
+ (id)appInfoWithApplicationRecord:(id)arg1;	// IMP=0x000000000005172f
+ (id)appInfoWithAppProxy:(id)arg1;	// IMP=0x00000000000514e3
- (void).cxx_destruct;	// IMP=0x0000000000051442
@property(copy, nonatomic) NSString *companionApplicationIdentifier; // @synthesize companionApplicationIdentifier=_companionApplicationIdentifier;
@property(copy, nonatomic) NSDictionary *supportedIntentsGroupedByExtensionPoints; // @synthesize supportedIntentsGroupedByExtensionPoints=_supportedIntentsGroupedByExtensionPoints;
@property(copy, nonatomic) NSSet *definedIntents; // @synthesize definedIntents=_definedIntents;
@property(copy, nonatomic) NSSet *supportedMediaCategories; // @synthesize supportedMediaCategories=_supportedMediaCategories;
@property(copy, nonatomic) NSSet *actionsRestrictedWhileProtectedDataUnavailable; // @synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable;
@property(copy, nonatomic) NSSet *actionsRestrictedWhileLocked; // @synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked;
@property(copy, nonatomic) NSSet *supportedActionsByExtensions; // @synthesize supportedActionsByExtensions=_supportedActionsByExtensions;
@property(copy, nonatomic) NSSet *supportedIntentsByApp; // @synthesize supportedIntentsByApp=_supportedIntentsByApp;
@property(copy, nonatomic) NSSet *supportedIntents; // @synthesize supportedIntents=_supportedIntents;
@property(copy, nonatomic) NSSet *supportedActions; // @synthesize supportedActions=_supportedActions;
@property(nonatomic) _Bool supportsMultiwindow; // @synthesize supportsMultiwindow=_supportsMultiwindow;
@property(copy, nonatomic) NSString *developmentRegion; // @synthesize developmentRegion=_developmentRegion;
@property(copy, nonatomic) NSArray *counterpartIdentifiers; // @synthesize counterpartIdentifiers=_counterpartIdentifiers;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000050a0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000050884
@property(readonly, copy, nonatomic) NSData *data;
- (id)init;	// IMP=0x00000000000507d8

@end

