//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem
{
    unsigned long long _permissionType;	// 8 = 0x8
    NSError *_cancelError;	// 16 = 0x10
}

+ (id)promptForType:(unsigned long long)arg1;	// IMP=0x000000000018f151
- (void).cxx_destruct;	// IMP=0x000000000018ef86
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(readonly, nonatomic) unsigned long long permissionType; // @synthesize permissionType=_permissionType;
- (id)description;	// IMP=0x000000000018ee52
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000018ed56
- (void)runForPairingDriver:(id)arg1;	// IMP=0x000000000018ebe3
- (id)initWithPermissionType:(unsigned long long)arg1;	// IMP=0x000000000018eb83

@end

