//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDBatterySaverProtocol-Protocol.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000ca3f0
+ (id)batterySaver;	// IMP=0x00000000000ca3d7
- (void).cxx_destruct;	// IMP=0x00000000000caa69
- (long long)getPowerMode;	// IMP=0x00000000000caa1d
- (_Bool)setPowerMode:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ca7e8
- (void)setPowerMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca7cc
- (_Bool)setPowerMode:(long long)arg1 fromSource:(id)arg2;	// IMP=0x00000000000ca675
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ca586
- (long long)setMode:(long long)arg1;	// IMP=0x00000000000ca559
- (void)dealloc;	// IMP=0x00000000000ca517
- (id)init;	// IMP=0x00000000000ca445

@end

