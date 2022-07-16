//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_clientIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ba5be
- (void).cxx_destruct;	// IMP=0x00000000004ba5ae
@property(retain, nonatomic) NSMutableArray *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ba3f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ba387
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ba087
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b9d1b
- (id)initWithClientIdentifiers:(id)arg1;	// IMP=0x00000000004b9cb0
- (id)init;	// IMP=0x00000000004b9c81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
