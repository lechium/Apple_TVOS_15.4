//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/NSObject-Protocol.h>

@class NSString;

@protocol BMStreamsAccessRequestProtocol <NSObject>
- (void)requestAccess:(unsigned long long)arg1 streamIdentifier:(NSString *)arg2 streamType:(unsigned long long)arg3 reply:(void (^)(NSData *, NSError *))arg4;
@end

