//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMAccount;

@interface IMCoreAutomationHook : NSObject
{
    IMAccount *_imessageAccount;	// 8 = 0x8
}

+ (id)stringFromAutomationErrorCode:(long long)arg1;	// IMP=0x00000000000508f5
- (void).cxx_destruct;	// IMP=0x00000000000509fc
- (id)existingChatForGroupID:(id)arg1 error:(id *)arg2 results:(id)arg3;	// IMP=0x0000000000050656
- (id)handlesFromStrings:(id)arg1 error:(id *)arg2 results:(id)arg3;	// IMP=0x000000000004ff79
- (id)chatForHandles:(id)arg1 error:(id *)arg2 results:(id)arg3;	// IMP=0x000000000004fa61
@property(readonly) IMAccount *bestiMessageAccount;

@end

