//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _resourceType;	// 8 = 0x8
    unsigned long long _expungedState;	// 16 = 0x10
    NSDate *_expungedDate;	// 24 = 0x18
}

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1;	// IMP=0x0000000000020a19
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005b34b
- (void).cxx_destruct;	// IMP=0x0000000000020f70
@property(copy, nonatomic) NSDate *expungedDate; // @synthesize expungedDate=_expungedDate;
@property(nonatomic) unsigned long long expungedState; // @synthesize expungedState=_expungedState;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)description;	// IMP=0x0000000000020e52
- (unsigned long long)hash;	// IMP=0x0000000000020e40
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020e2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a5b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a54c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005a53a

@end
