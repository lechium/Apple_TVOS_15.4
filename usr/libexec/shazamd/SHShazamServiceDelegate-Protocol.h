//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SHShazamService;
@protocol SHService;

@protocol SHShazamServiceDelegate <NSObject>
- (void)shazamService:(SHShazamService *)arg1 updatedChildService:(id <SHService>)arg2;
@end
