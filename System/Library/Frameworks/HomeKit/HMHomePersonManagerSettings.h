//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMHomePersonManagerSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _faceClassificationEnabled;	// 8 = 0x8
}

+ (id)shortDescription;	// IMP=0x00000000000212ac
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000212a4
@property(getter=isFaceClassificationEnabled) _Bool faceClassificationEnabled; // @synthesize faceClassificationEnabled=_faceClassificationEnabled;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021091
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021038
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020fd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020fcd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020f1c
@property(readonly, getter=isEnabled) _Bool enabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
