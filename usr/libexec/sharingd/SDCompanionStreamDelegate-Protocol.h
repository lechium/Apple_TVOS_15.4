//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSFileHandle, SDCompanionStream, SFCompanionService;

@protocol SDCompanionStreamDelegate <NSObject>

@optional
- (void)companionStreamClosedStreams:(SDCompanionStream *)arg1;
- (void)continuationStream:(SDCompanionStream *)arg1 connectedToService:(SFCompanionService *)arg2 withFileHandle:(NSFileHandle *)arg3 acceptHandler:(void (^)(_Bool))arg4;
@end

