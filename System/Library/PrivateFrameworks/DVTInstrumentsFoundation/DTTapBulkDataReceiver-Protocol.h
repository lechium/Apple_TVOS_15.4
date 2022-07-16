//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapMessage, NSData;

@protocol DTTapBulkDataReceiver <NSObject>
- (void)sendHeartbeatTime:(unsigned long long)arg1;
- (void)sendFrameMessage:(DTTapMessage *)arg1;
- (void)handleBulkData:(NSData *)arg1;
- (void)handleBulkData:(const void *)arg1 size:(unsigned long long)arg2 destructor:(void (^)(void))arg3;
@end

