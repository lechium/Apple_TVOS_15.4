//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSilo, NSString;

@interface CLSiloHeartbeatRecord : NSObject
{
    int _synCount;	// 8 = 0x8
    int _ackCount;	// 12 = 0xc
    int _residentCount;	// 16 = 0x10
    CLSilo *_silo;	// 24 = 0x18
    Class _svcClass;	// 32 = 0x20
    NSString *_svcName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000044a9
@property(readonly, nonatomic) int ackCount; // @synthesize ackCount=_ackCount;
@property(readonly, nonatomic) int synCount; // @synthesize synCount=_synCount;
@property(nonatomic) int residentCount; // @synthesize residentCount=_residentCount;
@property(readonly) NSString *svcName; // @synthesize svcName=_svcName;
@property(readonly, nonatomic) Class svcClass; // @synthesize svcClass=_svcClass;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void)ack;	// IMP=0x0000000000004453
- (void)syn;	// IMP=0x0000000000004449
- (id)initTrackingServiceClass:(Class)arg1 name:(id)arg2;	// IMP=0x000000000000438b

@end

