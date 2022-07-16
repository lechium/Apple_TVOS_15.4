//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMLightProfileSettings, NSArray, NSError, NSString;

@interface HMHomeFetchLightProfileSettingsResult : NSObject <HMFObject, NSSecureCoding, NSCopying>
{
    NSError *_error;	// 8 = 0x8
    HMLightProfileSettings *_settings;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x00000000002451fc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002451f4
- (void).cxx_destruct;	// IMP=0x00000000002451cc
@property(readonly, copy) HMLightProfileSettings *settings; // @synthesize settings=_settings;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024503f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000244f44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000244e96
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000244cd1
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000244c5e
- (id)initWithError:(id)arg1;	// IMP=0x0000000000244beb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

