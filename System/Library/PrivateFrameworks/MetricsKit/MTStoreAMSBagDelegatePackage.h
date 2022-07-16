//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTDelegatePackage-Protocol.h>

@class MTConfigAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, MTEventRecorderAMSMetricsDelegate, NSString;

@interface MTStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>
{
    CDUnknownBlockType _hostAppBlock;	// 8 = 0x8
    MTConfigAMSMetricsDelegate *_configDelegate;	// 16 = 0x10
    MTEventRecorderAMSMetricsDelegate *_eventRecorderDelegate;	// 24 = 0x18
    MTConvenienceEnvironmentDelegate *_environmentDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005d1d
@property(retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate; // @synthesize environmentDelegate=_environmentDelegate;
@property(retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate; // @synthesize eventRecorderDelegate=_eventRecorderDelegate;
@property(retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate; // @synthesize configDelegate=_configDelegate;
@property(copy, nonatomic) CDUnknownBlockType hostAppBlock; // @synthesize hostAppBlock=_hostAppBlock;
- (id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(CDUnknownBlockType)arg3 resourceRevNumBlock:(CDUnknownBlockType)arg4 hostAppBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005b72
- (id)initWithAMSBag:(id)arg1;	// IMP=0x0000000000005b47
- (id)init;	// IMP=0x0000000000005ab1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

