//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCEndpointAppState-Protocol.h>

@class NSString, NSUUID;

@interface SIBCEndpointAppState : NSObject <SIBCEndpointAppState>
{
    NSUUID *_endpointId;	// 8 = 0x8
    NSString *_appId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c1c8
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSUUID *endpointId; // @synthesize endpointId=_endpointId;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bfc5
- (id)initWithEndpointId:(id)arg1 appId:(id)arg2;	// IMP=0x000000000000bf2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

