//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBProcess, FBSExtensionInfo;

@interface FBExtensionProcess
{
    FBSExtensionInfo *_extensionInfo;	// 88 = 0x58
    int _hostPID;	// 96 = 0x60
    struct os_unfair_lock_s _hostProcessLock;	// 100 = 0x64
    FBProcess *_lock_hostProcess;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000141db
@property(readonly, nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(readonly, nonatomic) FBSExtensionInfo *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001411a
- (_Bool)isExtensionProcess;	// IMP=0x0000000000014112
@property(readonly, nonatomic) FBProcess *hostProcess;
- (void)_finishInit;	// IMP=0x0000000000013d8b

@end

