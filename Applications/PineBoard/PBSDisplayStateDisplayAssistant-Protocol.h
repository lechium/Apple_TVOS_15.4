//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PBSDisplayStateMutation-Protocol.h"

@class NSNumber, NSString, PBSDisplayAssistantPresentationRequest;

@protocol PBSDisplayStateDisplayAssistant <PBSDisplayStateMutation>
- (void)setAudioLatency:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (void)displayAssistantDidCompleteForKind:(NSNumber *)arg1;
- (void)displayAssistantDidStartForKind:(NSNumber *)arg1;
- (void)removeCableCheckHistory;
- (void)forgetDisplaysForDisplayAssistant;
- (void)presentDisplayAssistantWithRequest:(PBSDisplayAssistantPresentationRequest *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)handleRegionChangeWithNewCountryCode:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

