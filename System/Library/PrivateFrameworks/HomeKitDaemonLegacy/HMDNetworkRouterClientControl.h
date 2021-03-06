//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientControl : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_operations;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047e796
- (void).cxx_destruct;	// IMP=0x000000000047dba0
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047d9e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047d979
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000047d679
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047d30d
- (id)initWithOperations:(id)arg1;	// IMP=0x000000000047d2a2
- (id)init;	// IMP=0x000000000047d273

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

