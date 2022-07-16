//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying>
{
    NSDictionary *_outputSettingsDictionary;	// 8 = 0x8
}

+ (_Bool)supportsEmptyOutputSettingsDictionary;	// IMP=0x0000000000102459
+ (id)defaultOutputSettingsForMediaType:(id)arg1;	// IMP=0x00000000001023cb
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000001020cc
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2;	// IMP=0x000000000010204a
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id *)arg2;	// IMP=0x0000000000101ecf
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;	// IMP=0x0000000000101ebb
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x0000000000101d4a
+ (id)registeredOutputSettingsClasses;	// IMP=0x0000000000101d02
@property(readonly, nonatomic) NSDictionary *outputSettingsDictionary; // @synthesize outputSettingsDictionary=_outputSettingsDictionary;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x0000000000102664
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000102636
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x0000000000102608
@property(readonly, nonatomic) _Bool willYieldCompressedSamples;
@property(readonly, nonatomic) NSSet *compatibleMediaTypes;
- (id)description;	// IMP=0x0000000000102549
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010253e
- (void)dealloc;	// IMP=0x0000000000102503
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000102477
- (id)init;	// IMP=0x0000000000102461

@end
