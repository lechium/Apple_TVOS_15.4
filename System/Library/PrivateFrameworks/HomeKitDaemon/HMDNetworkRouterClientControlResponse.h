//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientControlResponse : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_operationResponses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ced6c
- (void).cxx_destruct;	// IMP=0x00000000004ced5c
@property(retain, nonatomic) NSMutableArray *operationResponses; // @synthesize operationResponses=_operationResponses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ceb9e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ceb35
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ce835
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ce4c9
- (id)initWithOperationResponses:(id)arg1;	// IMP=0x00000000004ce45e
- (id)init;	// IMP=0x00000000004ce42f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

