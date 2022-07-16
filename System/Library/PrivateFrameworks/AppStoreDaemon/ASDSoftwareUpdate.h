//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_blockedBy;	// 8 = 0x8
    NSDate *_installDate;	// 16 = 0x10
    NSDictionary *_metrics;	// 24 = 0x18
    _Bool _perDevice;	// 32 = 0x20
    _Bool _profileValidated;	// 33 = 0x21
    NSDictionary *_rawUpdateDictionary;	// 40 = 0x28
    long long _rawUpdateState;	// 48 = 0x30
    NSDate *_timestamp;	// 56 = 0x38
    long long _updateState;	// 64 = 0x40
    _Bool _iOSBinaryMacOSCompatible;	// 72 = 0x48
    _Bool _downloaded;	// 73 = 0x49
    _Bool _requiresRosetta;	// 74 = 0x4a
    _Bool _runsOnIntel;	// 75 = 0x4b
    _Bool _runsOnAppleSilicon;	// 76 = 0x4c
    long long _deviceFamilies;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d82f
- (void).cxx_destruct;	// IMP=0x000000000000df75
@property(nonatomic) long long rawUpdateState; // @synthesize rawUpdateState=_rawUpdateState;
@property(copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) long long updateState; // @synthesize updateState=_updateState;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) _Bool runsOnAppleSilicon; // @synthesize runsOnAppleSilicon=_runsOnAppleSilicon;
@property(readonly, nonatomic) _Bool runsOnIntel; // @synthesize runsOnIntel=_runsOnIntel;
@property(readonly, nonatomic) _Bool requiresRosetta; // @synthesize requiresRosetta=_requiresRosetta;
@property(readonly, nonatomic) NSDictionary *rawUpdateDictionary; // @synthesize rawUpdateDictionary=_rawUpdateDictionary;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPerDevice) _Bool perDevice; // @synthesize perDevice=_perDevice;
@property(nonatomic, getter=isDownloaded) _Bool downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic, getter=isIOSBinaryMacOSCompatible) _Bool iOSBinaryMacOSCompatible; // @synthesize iOSBinaryMacOSCompatible=_iOSBinaryMacOSCompatible;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(nonatomic) long long deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(copy, nonatomic) NSArray *blockedBy; // @synthesize blockedBy=_blockedBy;
- (_Bool)_boolValueForProperty:(id)arg1 withDefaultValue:(_Bool)arg2;	// IMP=0x000000000000de03
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000da7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d837
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d70c
@property(readonly, nonatomic) NSDictionary *updateDictionary;
@property(readonly, nonatomic) long long storeItemIdentifier;
- (id)releaseDate;	// IMP=0x000000000000d240
@property(readonly, nonatomic) long long parentalControlsRank;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithUpdateDictionary:(id)arg1;	// IMP=0x000000000000cc37

@end

