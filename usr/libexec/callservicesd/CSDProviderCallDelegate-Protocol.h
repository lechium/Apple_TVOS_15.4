//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDProviderCall, CXCallAction, CXCallSource, CXStartCallAction, NSArray, NSString, TUCallProvider, TUDialRequest, TUJoinConversationRequest;

@protocol CSDProviderCallDelegate <NSObject>
- (void)performStartCallAction:(CXStartCallAction *)arg1 forCall:(CSDProviderCall *)arg2;
- (void)performCallActions:(NSArray *)arg1 forCall:(CSDProviderCall *)arg2;
- (void)performCallAction:(CXCallAction *)arg1 forCall:(CSDProviderCall *)arg2;
- (TUCallProvider *)providerWithIdentifier:(NSString *)arg1;
- (CXCallSource *)callSourceForJoinConversationRequest:(TUJoinConversationRequest *)arg1;
- (CXCallSource *)callSourceForDialRequest:(TUDialRequest *)arg1;
@end

