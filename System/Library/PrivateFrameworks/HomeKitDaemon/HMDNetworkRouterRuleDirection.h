//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterRuleDirection : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _direction;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b7dad
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x000000000044f92f
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b7c85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b7c34
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b7c1a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b7abe
- (id)initWithDirection:(long long)arg1;	// IMP=0x00000000004b7a81
- (id)init;	// IMP=0x00000000004b7a45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

