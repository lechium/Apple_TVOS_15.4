//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFActionRemoteUserInterface-Protocol.h>

@class NSLocale, NSString;

@protocol WFDictateTextActionRecordingUserInterface <WFActionRemoteUserInterface>
- (void)showWithLocale:(NSLocale *)arg1 stopListeningValue:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
@end

