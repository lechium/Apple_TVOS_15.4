//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UVPropertyList;

@protocol UVXcodeServiceProtocol <NSObject>
- (oneway void)sendMessage:(UVPropertyList *)arg1 reply:(void (^)(UVPropertyList *, NSError *))arg2;
@end

