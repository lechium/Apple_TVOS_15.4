//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterICMPTypeList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_types;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000471d52
+ (id)typeListFromICMPTypes:(id)arg1;	// IMP=0x00000000004095b6
- (void).cxx_destruct;	// IMP=0x000000000047115c
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000470f9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000470f35
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000470c35
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004708c9
- (id)initWithTypes:(id)arg1;	// IMP=0x000000000047085e
- (id)init;	// IMP=0x000000000047082f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

