//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSString;

@interface SVDDeviceUnitSwift : NSObject <NSSecureCoding>
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *assistantId;	// 24 = 0x18
    MISSING_TYPE *name;	// 40 = 0x28
    MISSING_TYPE *roomName;	// 56 = 0x38
    MISSING_TYPE *proximity;	// 72 = 0x48
    MISSING_TYPE *mediaRouteIdentifier;	// 80 = 0x50
    MISSING_TYPE *isCommunalDevice;	// 96 = 0x60
    MISSING_TYPE *homeKitAccessoryIdentifier;	// 104 = 0x68
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0000000000015680
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015610
- (void).cxx_destruct;	// IMP=0x0000000000017450
- (id)init;	// IMP=0x00000000000171b0
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017070
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016a80
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000163f0
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 builder:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015a50
@property(nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property(nonatomic, readonly) _Bool isCommunalDevice; // @synthesize isCommunalDevice;
@property(nonatomic, readonly) NSString *mediaRouteIdentifier;
@property(nonatomic, readonly) long long proximity; // @synthesize proximity;
@property(nonatomic, readonly) NSString *roomName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *assistantId;
@property(nonatomic, readonly) NSString *identifier;

@end

