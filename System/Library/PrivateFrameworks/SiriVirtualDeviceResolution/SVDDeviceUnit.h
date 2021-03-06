//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSCopying-Protocol.h>
#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>

@class NSString, SVDDeviceUnitSwift;

@interface SVDDeviceUnit : NSObject <NSSecureCoding, NSCopying>
{
    SVDDeviceUnitSwift *_backing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002562
- (void).cxx_destruct;	// IMP=0x0000000000002629
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000261e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000258d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000256a
- (id)description;	// IMP=0x00000000000023ec
@property(readonly, nonatomic) NSString *homeKitAccessoryIdentifier;
@property(readonly, nonatomic) _Bool isCommunalDevice;
@property(readonly, nonatomic) NSString *mediaRouteIdentifier;
@property(readonly, nonatomic) long long proximity;
@property(readonly, nonatomic) NSString *roomName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *assistantId;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithDeviceUnit:(id)arg1;	// IMP=0x00000000000022d1
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 name:(id)arg3 roomName:(id)arg4 proximity:(long long)arg5;	// IMP=0x000000000000213c
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 builder:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001e9c

@end

