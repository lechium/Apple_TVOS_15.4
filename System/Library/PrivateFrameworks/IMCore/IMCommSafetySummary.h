//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCommSafetySummary : NSObject
{
}

+ (void)registerEvent:(unsigned long long)arg1 eventType:(unsigned long long)arg2 messageGUID:(id)arg3 chat:(id)arg4 forImages:(id)arg5 childID:(id)arg6 deviceID:(id)arg7 senderID:(id)arg8 eventSender:(CDUnknownBlockType)arg9;	// IMP=0x0000000000108a68
+ (void)registerEvent:(unsigned long long)arg1 eventType:(unsigned long long)arg2 messageGUID:(id)arg3 chat:(id)arg4 forImages:(id)arg5;	// IMP=0x000000000010870b
+ (id)recipientStrings:(id)arg1;	// IMP=0x000000000010850f
+ (id)primaryiCloudAccountIdentifier;	// IMP=0x0000000000108463

@end
