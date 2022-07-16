//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersistentConnection/PCInterfaceMonitorProtocol-Protocol.h>
#import <PersistentConnection/PCInterfaceUsabilityMonitorDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol PCInterfaceUsabilityMonitorProtocol;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>
{
    id <PCInterfaceUsabilityMonitorProtocol> _internal;	// 8 = 0x8
    NSMapTable *_delegateMap;	// 16 = 0x10
}

+ (_Bool)isBadLinkQuality:(int)arg1;	// IMP=0x0000000000016ed0
+ (_Bool)isPoorLinkQuality:(int)arg1;	// IMP=0x0000000000016eb7
+ (id)stringForLinkQuality:(int)arg1;	// IMP=0x0000000000016e9e
+ (_Bool)isNetworkingPowerExpensiveToUse;	// IMP=0x0000000000016187
+ (id)sharedInstanceForIdentifier:(long long)arg1;	// IMP=0x00000000000160e4
- (void).cxx_destruct;	// IMP=0x0000000000016ee9
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) unsigned long long interface5GMode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) int currentRAT;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)interfaceRadioHotnessChanged:(id)arg1;	// IMP=0x0000000000016a0a
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x000000000001677f
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x00000000000164df
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000001646b
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000016362
- (void)dealloc;	// IMP=0x000000000001631e
- (id)initWithInterfaceIdentifier:(long long)arg1;	// IMP=0x0000000000016218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

