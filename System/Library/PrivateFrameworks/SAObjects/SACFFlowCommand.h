//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SACFFlowCommand
{
}

+ (id)flowCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a392
+ (id)flowCommand;	// IMP=0x000000000002a380
- (_Bool)mutatingCommand;	// IMP=0x000000000002a3c6
- (_Bool)requiresResponse;	// IMP=0x000000000002a3be
@property(copy, nonatomic) NSDictionary *jsDialogScripts;
- (id)encodedClassName;	// IMP=0x000000000002a373
- (id)groupIdentifier;	// IMP=0x000000000002a35f

@end

