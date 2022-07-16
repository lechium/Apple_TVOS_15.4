//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@class PBSDisplayManagerUpdateRequest;

@protocol PBSDisplayStateMutation <NSObject>
- (void)enableAtmos:(_Bool)arg1;
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;
- (void)wakeDisplayWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)sleepDisplayWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)updateDisplayManagerWithRequest:(PBSDisplayManagerUpdateRequest *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end

