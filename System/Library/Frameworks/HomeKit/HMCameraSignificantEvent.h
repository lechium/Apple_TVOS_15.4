//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFaceClassification, NSArray, NSDate, NSString, NSUUID;

@interface HMCameraSignificantEvent : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
    NSDate *_dateOfOccurrence;	// 24 = 0x18
    unsigned long long _confidenceLevel;	// 32 = 0x20
    NSUUID *_cameraProfileUUID;	// 40 = 0x28
    HMFaceClassification *_faceClassification;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e100e
+ (id)shortDescription;	// IMP=0x00000000001e0ffc
- (void).cxx_destruct;	// IMP=0x00000000001e0eb5
@property(readonly, copy) HMFaceClassification *faceClassification; // @synthesize faceClassification=_faceClassification;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) unsigned long long confidenceLevel; // @synthesize confidenceLevel=_confidenceLevel;
@property(readonly, copy) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e0b98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e0a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e0a2d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e0795
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) _Bool canAskForUserFeedback;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassification:(id)arg5;	// IMP=0x00000000001e03e6
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 cameraProfileUUID:(id)arg5 faceClassification:(id)arg6;	// IMP=0x00000000001e02a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
