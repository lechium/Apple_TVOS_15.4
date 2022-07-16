//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientStatusIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_clientStatusIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d340b
- (void).cxx_destruct;	// IMP=0x00000000004d2520
@property(retain, nonatomic) NSMutableArray *clientStatusIdentifiers; // @synthesize clientStatusIdentifiers=_clientStatusIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d2362
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d22f9
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004d1ff9
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d1c8d
- (id)initWithClientStatusIdentifiers:(id)arg1;	// IMP=0x00000000004d1c22
- (id)init;	// IMP=0x00000000004d1bf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

