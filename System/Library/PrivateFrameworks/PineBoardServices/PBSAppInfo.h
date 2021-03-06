//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <PineBoardServices/NSCopying-Protocol.h>
#import <PineBoardServices/NSMutableCopying-Protocol.h>
#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class BSSettings, NSArray, NSNumber, NSString, NSURL, PBSBadgeValue;

@interface PBSAppInfo : NSObject <NSMutableCopying, BSSettingDescriptionProvider, NSCopying, NSSecureCoding>
{
    BSSettings *_settings;	// 8 = 0x8
}

+ (id)debugDescriptionForChangesFromAppInfo:(id)arg1 toAppInfo:(id)arg2;	// IMP=0x0000000000088140
+ (id)changesFromAppInfo:(id)arg1 toAppInfo:(id)arg2;	// IMP=0x0000000000087ed0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000085cd0
- (void).cxx_destruct;	// IMP=0x0000000000088860
@property(readonly, nonatomic) BSSettings *settings; // @synthesize settings=_settings;
@property(readonly, copy, nonatomic) NSString *topShelfStaticImageName;
@property(readonly, nonatomic) long long installFailureReason;
@property(readonly, nonatomic) long long installType;
@property(readonly, copy, nonatomic) NSString *liveIconName;
@property(readonly, copy, nonatomic) NSString *primaryIconName;
@property(readonly, copy, nonatomic) NSString *iconFile;
@property(readonly, nonatomic) double installPercentage;
@property(readonly, nonatomic) long long installState;
@property(readonly, nonatomic) unsigned long long disabledReasons;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isSignatureTrusted) _Bool signatureTrusted;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isAnyTerminationAssertionInEffect) _Bool anyTerminationAssertionInEffect;
@property(readonly, nonatomic, getter=isCacheDeleting) _Bool cacheDeleting;
@property(readonly, nonatomic, getter=isRecentlyUpdated) _Bool recentlyUpdated;
@property(readonly, nonatomic, getter=isBadgeEnabled) _Bool badgeEnabled;
@property(readonly, copy, nonatomic) PBSBadgeValue *badgeValue;
@property(readonly, nonatomic) long long genre;
@property(readonly, nonatomic) NSNumber *purchaserDSID;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) long long ratingRank;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted;
@property(readonly, nonatomic) _Bool supportsSharePlay;
@property(readonly, nonatomic, getter=isUsingCloudKit) _Bool usingCloudKit;
@property(readonly, nonatomic, getter=isAdHocCodeSigned) _Bool adHocCodeSigned;
@property(readonly, nonatomic, getter=isXcodeApp) _Bool xcodeApp;
@property(readonly, nonatomic, getter=isBetaApp) _Bool betaApp;
@property(readonly, nonatomic) long long applicationType;
@property(readonly, copy, nonatomic) NSString *alternateIconName;
@property(readonly, copy, nonatomic) NSArray *tags;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) double lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *bundleURL;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x0000000000086d20
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;	// IMP=0x00000000000868b0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086540
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086050
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000085ff0
- (id)_initWithSettings:(id)arg1;	// IMP=0x0000000000085f10
- (id)initWithAppInfo:(id)arg1;	// IMP=0x0000000000085e40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000085d70
- (id)init;	// IMP=0x0000000000085cf0

// Remaining properties
@property(readonly) Class superclass;

@end

