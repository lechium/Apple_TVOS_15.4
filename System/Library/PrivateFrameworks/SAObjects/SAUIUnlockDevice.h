//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SAUIUnlockDevice
{
}

+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001f0b7
+ (id)unlockDevice;	// IMP=0x000000000001f0a5
- (_Bool)requiresResponse;	// IMP=0x000000000001f13c
@property(copy, nonatomic) NSArray *successCommands;
@property(copy, nonatomic) NSArray *failureCommands;
@property(copy, nonatomic) NSArray *cancellationCommands;
- (id)encodedClassName;	// IMP=0x000000000001f098
- (id)groupIdentifier;	// IMP=0x000000000001f084

@end

