//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFActionRemoteUserInterface-Protocol.h>

@class NSArray, NSData, NSString;

@protocol WFSendMessageActionUserInterface <WFActionRemoteUserInterface>
- (void)showWithRecipients:(NSArray *)arg1 content:(NSString *)arg2 attachments:(NSData *)arg3 completionHandler:(void (^)(WFSendUserInterfaceResult *, NSError *))arg4;
@end

