//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterControlOperation : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _operation;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000467d59
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000467c31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000467be0
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000467bc6
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000467a6a
- (id)initWithOperation:(long long)arg1;	// IMP=0x0000000000467a2d
- (id)init;	// IMP=0x00000000004679f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

